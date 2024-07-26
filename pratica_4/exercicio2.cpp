/*
    2. Para converter uma temperatura registrada em graus Celsius para graus Fahrenheit basta utilizar a seguinte fórmula: °F = °C × 1,8 + 32.
    Faça duas funções: uma para converter graus Celsius para graus Fahrenheit, e outra para converter o inverso. Cada função deve receber a temperatura como parâmetro e retornar a temperatura convertida.
    Utilize essas funções na função main, que deverá receber a temperatura e a unidade para qual a temperatura deve ser convertida. Depois de utilizada a função correta, deverá mostrar na tela a temperatura convertida.
    OBS: Caso seja fornecida uma unidade inválida, o programa deverá exibir a frase “Unidade inválida!” como resposta

    Exemplo 1:
    Digite a temperatura: 25.1
    Digite a unidade: fahrenheit
    Temperatura convertida: 77.18ºF

    Exemplo 2:
    Digite a temperatura: 77
    Digite a unidade: celsius
    Temperatura convertida: 25ºC

    Exemplo 3:
    Digite a temperatura: 31.2
    Digite a unidade: metros
    Unidade invalida!
*/

#include <iostream>

using namespace std;

float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main()
{
    float temperature;
    string unit;

    cout << "Digite a temperatura: ";
    cin >> temperature;

    cout << "Digite a unidade: ";
    cin >> unit;

    if (unit == "fahrenheit")
    {
        cout << "Temperatura convertida: " << celsiusToFahrenheit(temperature) << "ºC" << endl;
    }
    else if (unit == "celsius")
    {
        cout << "Temperatura convertida: " << fahrenheitToCelsius(temperature) << "ºF" << endl;
    }
    else
    {
        cout << "Unidade inválida!" << endl;
    }

    cout << "---------------------------------" << endl;

    return 0;
}

float celsiusToFahrenheit(float celsius)
{
    return (celsius * 1.8) + 32;
}

float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}