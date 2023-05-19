#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    cout << "El n�mero binario es: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int decimal;

    cout << "Ingrese un n�mero decimal: ";
    cin >> decimal;

    decimalToBinary(decimal);

    return 0;
}

