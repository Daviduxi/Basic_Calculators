#include <iostream>
#include <cmath>    // Para sqrt() y pow()
using namespace std;

void mostrarMenu() {
    cout << "Calculadora basica en C++\n";
    cout << "--------------------------\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Raiz cuadrada\n";
    cout << "6. Potencia\n";
    cout << "0. Salir\n";
    cout << "Selecciona una opcion: ";
}

int main() {
    int opcion;
    double num1, num2;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: // Suma
                cout << "Introduce dos numeros: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 + num2 << "\n\n";
                break;

            case 2: // Resta
                cout << "Introduce dos numeros: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 - num2 << "\n\n";
                break;

            case 3: // Multiplicacion
                cout << "Introduce dos numeros: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 * num2 << "\n\n";
                break;

            case 4: // Division
                cout << "Introduce dos numeros: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Resultado: " << num1 / num2 << "\n\n";
                else
                    cout << "Error: No se puede dividir entre cero.\n\n";
                break;

            case 5: // Raiz cuadrada
                cout << "Introduce un numero: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Resultado: " << sqrt(num1) << "\n\n";
                else
                    cout << "Error: No se puede calcular la raiz de un numero negativo.\n\n";
                break;

            case 6: // Potencia
                cout << "Introduce la base y el exponente: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << pow(num1, num2) << "\n\n";
                break;

            case 0:
                cout << "Saliendo de la calculadora.\n";
                break;

            default:
                cout << "Opcion no valida. Intenta de nuevo.\n\n";
        }

    } while (opcion != 0);

    return 0;
}
