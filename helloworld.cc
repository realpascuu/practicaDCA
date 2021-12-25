#include <iostream>
#include <string>

using namespace std;

int main() {
    bool salida = false;

    do{
        int op;
        cout << "¿Qué quieres hacer?" << endl;
        cout << "1. Mandar saludo" << endl;
        cout << "2. Mandar despedida" << endl;
        cout << "3. Mandar mensaje navideño" << endl;
        cout << "4. Mandar mensaje año nuevo" << endl;
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
        case 2: {
            string despedida;
            cout << "Introduce nombre: ";
            cin >> despedida;

            cout << "Hasta luego, " << despedida << endl;
            break;
        }
        case 3: {
            string nombre;
            cout << "Introduce nombre: ";
            cin >> nombre;

            cout << "¡Feliz Navidad, " << nombre << "! Cuidado con el turrón..." << endl;
            break;
        }
        case 4: {
            string nombre;
            cout << "Introduce nombre: ";
            cin >> nombre;

            cout << "¡Feliz Año nuevo, " << nombre 
            << "! Todos mis mejores deseos para tu familia y amigos" << endl;
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