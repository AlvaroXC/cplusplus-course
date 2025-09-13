//
//  main.cpp
//  estudiantes-escuela
//
//  Created by Alvaro Xool Canul on 30/08/25.
//

#include <iostream>
using namespace std;

const int MAX_ESTUDIANTES = 50;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    int materiasAprobadas;
};

// Prototipos de funciones
int registrarEstudiante(Estudiante estudiantes[], int total);
void mostrarEstudiantes(const Estudiante estudiantes[], int total);
void buscarPorNombre(const Estudiante estudiantes[], int total);
void calcularPromedioGeneral(const Estudiante estudiantes[], int total);

void testingIgnoreFunction(){
    int edad;
    string nombre;

    cout << "Ingresa tu edad: ";
    cin >> edad;   // aquí se guarda la edad y queda el salto de línea '\n' en el buffer

    // --- PRUEBA 1: sin usar ignore ---
    cout << "\nIngresa tu nombre (sin ignore): ";
    cin >> nombre;
    //getline(cin, nombre); // este getline leerá directamente el '\n' pendiente
    cout << "Tu nombre leído es: \"" << nombre << "\"" << endl;

    // --- PRUEBA 2: ahora con ignore ---
    cout << "\nIngresa tu edad otra vez: ";
    cin >> edad;

    cin.ignore(100, '\n'); // aquí limpiamos el buffer (quitamos el '\n')

    cout << "Ingresa tu nombre (con ignore): ";
    getline(cin, nombre);  // ahora sí funciona correctamente
    cout << "Tu nombre leído es: \"" << nombre << "\"" << endl;



}

int main() {
    //testingIgnoreFunction();
    
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int total = 0;
    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar listado completo\n";
        cout << "3. Buscar estudiante por nombre\n";
        cout << "4. Calcular promedio general del grupo\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer

        switch(opcion) {
            case 1:
                total = registrarEstudiante(estudiantes, total);
                break;
            case 2:
                mostrarEstudiantes(estudiantes, total);
                break;
            case 3:
                buscarPorNombre(estudiantes, total);
                break;
            case 4:
                calcularPromedioGeneral(estudiantes, total);
                break;
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    } while(opcion != 5);

    return 0;
}

int registrarEstudiante(Estudiante estudiantes[], int total) {
    if (total >= MAX_ESTUDIANTES) {
        cout << "No se pueden registrar mas estudiantes.\n";
        return total;
    }

    cout << "\n--- Registro de estudiante ---\n";
    cout << "Nombre: ";
    getline(cin, estudiantes[total].nombre);
    cout << "Edad: ";
    cin >> estudiantes[total].edad;
    cout << "Promedio: ";
    cin >> estudiantes[total].promedio;
    cout << "Materias aprobadas: ";
    cin >> estudiantes[total].materiasAprobadas;
    cin.ignore(); // limpiar buffer

    cout << "Estudiante registrado con exito.\n";
    return total + 1; // devolvemos el nuevo total
}

void mostrarEstudiantes(const Estudiante estudiantes[], int total) {
    if (total == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    cout << "\n--- Listado de estudiantes ---\n";
    for (int i = 0; i < total; i++) {
        cout << "Estudiante " << i+1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << "Materias aprobadas: " << estudiantes[i].materiasAprobadas << endl;
        cout << "-------------------------\n";
    }
}

void buscarPorNombre(const Estudiante estudiantes[], int total) {
    if (total == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    string nombreBuscado;
    cout << "Ingrese el nombre a buscar: ";
    getline(cin, nombreBuscado);

    bool encontrado = false;
    for (int i = 0; i < total; i++) {
        if (estudiantes[i].nombre == nombreBuscado) {
            cout << "\nEstudiante encontrado:\n";
            cout << "Nombre: " << estudiantes[i].nombre << endl;
            cout << "Edad: " << estudiantes[i].edad << endl;
            cout << "Promedio: " << estudiantes[i].promedio << endl;
            cout << "Materias aprobadas: " << estudiantes[i].materiasAprobadas << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Estudiante no encontrado.\n";
    }
}

void calcularPromedioGeneral(const Estudiante estudiantes[], int total) {
    if (total == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }
    
    float suma = 0;
    for (int i = 0; i < total; i++) {
        suma += estudiantes[i].promedio;
    }
    
    float promedioGeneral = suma / total;
    cout << "El promedio general del grupo es: " << promedioGeneral << endl;
}
