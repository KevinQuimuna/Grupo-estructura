#include <iostream>
#include <list>

int main() {
    // Crear una lista vac�a
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

    // Acceder al primer y �ltimo elemento de la lista
    std::cout << "Primer elemento: " << myList.front() << std::endl;
    std::cout << "�ltimo elemento: " << myList.back() << std::endl;

    // Eliminar un elemento de la lista
    myList.pop_front();

    // Verificar si la lista est� vac�a
    if (myList.empty()) {
        std::cout << "La lista est� vac�a." << std::endl;
    } else {
        std::cout << "La lista no est� vac�a." << std::endl;
    }

    // Obtener el tama�o de la lista
    std::cout << "Tama�o de la lista: " << myList.size() << std::endl;

    return 0;
}

