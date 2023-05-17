#include <iostream>
#include <stack>

int main() {
  // Crear una pila vacía
  std::stack<int> miPila;

  // Insertar elementos en la pila
  miPila.push(10);
  miPila.push(20);
  miPila.push(30);

  // Obtener el tamaño de la pila
  std::cout << "Tamaño de la pila: " << miPila.size() << std::endl;

  // Acceder al elemento en la parte superior de la pila
  std::cout << "Elemento en la parte superior: " << miPila.top() << std::endl;

  // Eliminar el elemento en la parte superior de la pila
  miPila.pop();

  // Mostrar la pila después de la eliminación
  std::cout << "Elementos de la pila después de la eliminación: ";
  while (!miPila.empty()) {
    std::cout << miPila.top() << " ";
    miPila.pop();
  }
  std::cout << std::endl;

  return 0;
}