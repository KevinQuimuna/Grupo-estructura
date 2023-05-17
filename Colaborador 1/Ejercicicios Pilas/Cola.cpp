#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> cola;
    cola.push(1);
    cola.push(2);
    cout << cola.size() << '\n';
    cola.pop();
    cout << cola.size() << '\n';
    cola.push(1);
    cola.push(3);
    cout << cola.front() << '\n';
    cola.pop();
    cola.pop();
    if (cola.empty()) cout << "La cola no tiene elementos\n";
    else cout << "La cola tiene elementos\n";
    return 0;
}
