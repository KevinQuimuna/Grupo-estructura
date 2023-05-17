#include <iostream>
#include <stack>

int main() {
    // Crear una pila vacía
    std::stack<int> myStack;

    // Agregar elementos a la pila
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Verificar si la pila está vacía
    if (myStack.empty()) {
        std::cout << "La pila está vacia." << std::endl;
    } else {
        std::cout << "La pila no esta vacia." << std::endl;
    }

    // Obtener el tamaño de la pila
    std::cout << "Tamaño de la pila: " << myStack.size() << std::endl;

    // Acceder al elemento superior de la pila
    std::cout << "Elemento superior: " << myStack.top() << std::endl;

    // Eliminar el elemento superior de la pila
    myStack.pop();

    // Acceder al nuevo elemento superior de la pila
    std::cout << "Nuevo elemento superior: " << myStack.top() << std::endl;

    return 0;
}

