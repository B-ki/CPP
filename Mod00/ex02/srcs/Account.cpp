/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:39:22 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/28 15:05:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	 Account::getNbAccounts(void)
{
	return Account::_nbAccounts; 
}

int	 Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	 Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	 Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
		<< Account::getTotalAmount() << ";deposits:"
		<< Account::getNbDeposits() << ";withdrawals:"
		<< Account::getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year << std::setfill('0') << std::setw(2)
		<< ltm->tm_mon + 1 << std::setfill('0') << std::setw(2)
		<< ltm->tm_mday << "_" << std::setfill('0') << std::setw(2)
		<< ltm->tm_hour << std::setfill('0') << std::setw(2)
		<< ltm->tm_min << std::setfill('0') << std::setw(2)
		<< ltm->tm_sec << "] ";
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		return true;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}
