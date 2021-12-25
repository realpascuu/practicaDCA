#include <iostream>
#include <string>

using namespace std;

int main() {
    bool salida = false;

    do{
        int op;
        cout << "¿Qué quieres hacer?" << endl;
        cout << "1. Mandar saludo" << endl;
        cout << "0. Salir" << endl;
        cin >> op;

        switch (op)
        {
        case 1: {
            string saludo;
            cout << "Introduce nombre: ";
            cin >> saludo;

            cout << "Hola " << saludo << endl;
            break;
        }
        case 0:
            cout << "Adiós!" << endl;
            salida = true;
            break;
        
        default:
            cout << "Entrada  no válida!" << endl;
            break;
        }
    }while(!salida);
    cout << "Hello world!" << endl;
    return 0;
}