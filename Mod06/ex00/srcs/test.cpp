/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/15 15:14:19 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    string literal = argv[1];

    if (literal.length() == 1) {
        char c = literal[0];
        cout << "Char: " << c << endl;

        int i = static_cast<int>(c);
        if (i < numeric_limits<int>::min() || i > numeric_limits<int>::max()) {
            cout << "Conversion to int not possible" << endl;
        } else {
            cout << "Int: " << i << endl;
        }

        float f = static_cast<float>(c);
        cout << "Float: " << f << endl;

        double d = static_cast<double>(c);
        cout << "Double: " << d << endl;
    } else {
        int i;
        float f;
        double d;

        if (literal.find('f') != string::npos) {
            f = stof(literal);
            i = static_cast<int>(f);
            if (i < numeric_limits<int>::min() || i > numeric_limits<int>::max()) {
                cout << "Conversion to int not possible" << endl;
            } else {
                cout << "Int: " << i << endl;
            }

            d = static_cast<double>(f);
            cout << "Float: " << f << endl;
            cout << "Double: " << d << endl;
        } else {
            d = stod(literal);
            i = static_cast<int>(d);
            if (i < numeric_limits<int>::min() || i > numeric_limits<int>::max()) {
                cout << "Conversion to int not possible" << endl;
            } else {
                cout << "Int: " << i << endl;
            }

            f = static_cast<float>(d);
            cout << "Float: " << f << endl;
            cout << "Double: " << d << endl;
        }
    }

    return 0;
}
