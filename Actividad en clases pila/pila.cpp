#include <iostream>
using namespace std;

void decimalbinario(int decimal) {
    int binario[20];
    int index = 0;

    while (decimal > 0) {
        binario[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    cout << "El numero binario es: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binario[i];
    }
}

int main() {
    int decimal;

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    decimalbinario (decimal);

    return 0;
}
