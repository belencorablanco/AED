#include <cassert>
#include <string>

using namespace std::literals;

int main () {
// PRUEBA DE TIPO DE DATO INT
assert (2 == 1 + 1); //Suma
assert (0 == -1 + 1); //Suma y negación
assert (5 != 3 + 6); //Diferencia y resta
assert (5 <= 15); //Menor o igual
assert (18 >= 3); //Mayor o igual
assert (6 == 2 * 3); //Multiplicación
assert (4 == -2 * -2); //Multiplicación con negación
assert (5 == 10 / 2); //División 
assert (-6 == 12 / -2); //División con negación
assert (1 == 11 % 2); //Resto
// PRUEBA DE TIPO DE DATO BOOLE
assert (true);
assert (false == false);
assert (true != false);
assert (not false);
assert (not false == true);
assert (false or true);
assert (true or true);
assert (true and true);
assert (false or true and false == false);
assert ((false or true) and false == false);
assert (true or true and false);
// PRUEBA DE TIPO DE DATO DOUBLE
assert (2.0 == 1.0 + 1.0);   //Suma
assert (3.8 != 2.2 - 0.4);  //Diferencia y resta
assert (147.3 <= 200.5);   //Menor o igual
assert (17.6 >= 4.2);     //Mayor o igual
assert (10.0 == 2.5 * 4.0); //Multiplicación
assert (7.6 == 19.0 / 2.5); //División
assert (0.0 - 1.0 == -1.0); //Resta y negación (opuesto)
// PRUEBA DE TIPO DE DATO STRING
assert ("B"s == "B"s);
assert ("boquita"s == "bo"s + "quita"s);
assert ("bbb"s >= "bb"s);
assert (5 == "belen"s.length());
assert ("mariabelen"s.length() == "corablanco"s.length());
assert ("maria"s.length() >= "cora"s.length());
assert ("2" <= "3");
assert ("AA"s < "AB"s);
assert ("AA"s < "aa"s);
// PRUEBA DE TIPO DE DATO CHAR
assert ('C' != 'D'); //En la tabla ASCII C =  67 y D = 68
assert ('F' <= 'M'); //Menor o igual (M = 77 y F = 70 en la tabla ASCII)
assert ('W' >= 'A'); //Mayor o igual (W = 87 y A = 65 en la tabla ASCII)
assert ('C' == 67);
assert ('D' == 68);
assert ('F' == 70);
assert ('M' == 77);
assert ('W' == 87);
assert ('A'== 65);
assert (151 == 'E' + 'R'); //Suma distintos tipos de datos (E = 69 y R = 82 en la tabla ASCII)
assert ('E' == 69);
assert ('R' == 82);
assert (12 == 'V' % 'J'); //Resto (V = 86 y J = 74 en la tabla ASCII)
assert ('V' == 86);
assert ('J' == 74);
assert ('5' != '2' + '3'); //En char la cuenta es (5 = 53) != (2 = 50) + (3 = 51), daría 101 en char
assert ('a' != 'A'); //En la tabla ASCII a = 97 y A = 65
// PRUEBA DE TIPO DE DATO UNSIGNED
assert (0u == 0u);
assert (0u == 12u % 3u);
assert (8u == 4u + 4u);
assert (888888888888889u == 888888888888888u + 1u);
assert (10000u <= 100000u);
assert (9000u >= 1000u);
}