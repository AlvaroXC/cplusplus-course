//
//  main.cpp
//  structs
//
//  Created by Alvaro Xool Canul on 23/08/25.
//

#include <iostream>
using namespace std;

struct alumno{
    string nombre;
};

struct materia{
    string nombre;
    double calif;
};

struct listaAlumnos{
    alumno alumnos[20];
};

struct calificaciones {
    alumno alumno;
    materia materias[10];
};

void imprimirNombreAlumno(alumno);

int main(int argc, const char * argv[]) {
    /*
    cout << "What's your name?" << endl;
    alumno alumnoNuevo;
    getline(cin, alumnoNuevo.nombre);
    cout << "Hello " << alumnoNuevo.nombre << " nice to meet you" << endl;
    return 0;*/
    
    //USING STRUCT IN A PROGRAM
    
    struct inflatable{
        char name[20];
        float volume;
        double price;
    };
    
    inflatable vincent = {
        "Juan",
        29,
        29.99
    };
    inflatable woopie_cushion;
    inflatable mainframe;
    
    inflatable guest = {
        "Gloria", //name value
        1.8, //volume value
        29.99 //price value
    };
    
    inflatable pal = {
        "Audacius",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    
    //C++ 11
    inflatable duck {"Duck", 0.12, 9.98}; //can omit the = in C++11
    
    //OTHER STRUCTURES PROPERTIES
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    
    
    struct perks
    {
        int key_number;
        char car[12];
    } mr_smith, ms_jones, mr_glitz = {
        7,
        "Packard"
    };
    
    
    //ARRAY OF STRUCTURES
    inflatable guests[2] = // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99}, // first structure in array
        {"Godzilla", 2000, 565.99} // next structure in array
    };
    
    cout << "The guests " << guests[0].name << " and " << guests[1].name
        << "\nhave a combined volume of "
        << guests[0].volume + guests[1].volume << " cubic feet.\n";
    
    
    listaAlumnos lista = {
        {{"Andrea"},{"Paulina"}, {"David"}, {"Daniel"}}
    };
    
    for (int i=0; i<=3; i++) {
        cout << lista.alumnos[i].nombre << '\n';
    }
    
    
    calificaciones calificacionesAlumno = {
        {"David"},
        {{"Matematicas", 10}}
    };
    
    alumno tony{
        "tony"
    };
    
    cout << calificacionesAlumno.alumno.nombre << '\n';
    cout << calificacionesAlumno.materias[0].calif << '\n';
    
    imprimirNombreAlumno(tony);

    return 0;
}

void imprimirNombreAlumno(alumno alum){
    cout << alum.nombre << '\n';
}



