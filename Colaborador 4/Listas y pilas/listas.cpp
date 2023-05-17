#include <iostream>
#include <list>

int main() {
    // Crear una lista vacía
    std::list<int> myList;

    // Agregar elementos a la lista
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);

    // Recorrer la lista e imprimir sus elementos
    for (std::list<int>::const_iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Acceder al primer y último elemento de la lista
    std::cout << "Primer elemento: " << myList.front() << std::endl;
    std::cout << "Último elemento: " << myList.back() << std::endl;

    // Eliminar un elemento de la lista
    myList.pop_front();

    // Verificar si la lista está vacía
    if (myList.empty()) {
        std::cout << "La lista está vacía." << std::endl;
    } else {
        std::cout << "La lista no está vacía." << std::endl;
    }

    // Obtener el tamaño de la lista
    std::cout << "Tamaño de la lista: " << myList.size() << std::endl;

    return 0;
}

