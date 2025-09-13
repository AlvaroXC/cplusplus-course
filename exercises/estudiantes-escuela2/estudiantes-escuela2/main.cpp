//
//  main.cpp
//  estudiantes-escuela2
//
//  Created by Alvaro Xool Canul on 13/09/25.
//

#include <iostream>
using namespace std;

void registrarEstudiante(string nombre, int edad, double promedio, int materiasAprobadas);
void printStudents();
void findStudent(string nombre);
void calcularPromedioGrupal();

struct Estudiante{
    string nombre;
    int edad;
    double promedio;
    int materiasAprobadas;
} group[50];

int numOfStudents = 0;

int main(int argc, const char * argv[]) {
    
    registrarEstudiante("Alvaro", 12, 70, 2);
    registrarEstudiante("Kevin", 12, 100, 2);
    registrarEstudiante("Emiliano", 12, 70, 2);
    registrarEstudiante("Tony", 12,69, 2);
    
    printStudents();
    
    findStudent("Tony");
    
    calcularPromedioGrupal();
    
    return 0;
}

void registrarEstudiante(string nombre, int edad, double promedio, int materiasAprobadas){
    
    Estudiante newStudent{
        nombre,
        edad,
        promedio,
        materiasAprobadas
    };
    
    group[numOfStudents] = newStudent;
    
    //Manera similar de hacerlo
    /*
    group[numOfStudents].nombre = nombre;
    group[numOfStudents].edad = edad;
    group[numOfStudents].promedio = promedio;
    group[numOfStudents].materiasAprobadas = materiasAprobadas;
     */
    
    //cout << group[numOfStudents].nombre << endl;
    
    numOfStudents++;
}

void printStudents(){
    
    //int n = sizeof(group) / sizeof(group[0]);
    
    for (int i=0; i<numOfStudents; i++) {
        cout << group[i].nombre <<endl;
    }
}

void findStudent(string nombre){
    
    for (int i=0; i<numOfStudents; i++) {
        if(group[i].nombre == nombre){
            cout << "El alumno con el nombre " << nombre << " fue encontrado en la posición " << i <<endl;
            return;
        }
    }
        
    cout << "El alumno con el nombre " << nombre << "no fue encontrado"<<endl;

}

void calcularPromedioGrupal(){
    double promedio = 0;
    for (int i=0; i<numOfStudents; i++) {
        promedio += group[i].promedio;
    }
    
    cout << "El promedio del grupo es: " << promedio / numOfStudents << endl;
}

