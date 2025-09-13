//
//  main.cpp
//  producto-inventario
//
//  Created by Alvaro Xool Canul on 23/08/25.
//

#include <iostream>
#include <string>

// 1. Definición del Producto (Struct)
struct Producto {
    int codigo;
    std::string nombre;
    double precio;
    int cantidad;
};

// Constante para el tamaño máximo del inventario
const int MAX_PRODUCTOS = 100;

//---
// 2. Funciones para la Gestión

// Función para agregar un nuevo producto al inventario
// Devuelve el nuevo número de productos
int agregarProducto(Producto inventario[], int numProductos) {
    if (numProductos >= MAX_PRODUCTOS) {
        std::cout << "El inventario esta lleno. No se pueden agregar mas productos." << std::endl;
        return numProductos; // No se agregó nada, devuelve el mismo número
    }

    std::cout << "\n--- Agregar Nuevo Producto ---" << std::endl;
    std::cout << "Codigo: ";
    std::cin >> inventario[numProductos].codigo;
    std::cin.ignore(); // Limpiar el buffer de entrada
    std::cout << "Nombre: ";
    std::getline(std::cin, inventario[numProductos].nombre);
    std::cout << "Precio: ";
    std::cin >> inventario[numProductos].precio;
    std::cout << "Cantidad: ";
    std::cin >> inventario[numProductos].cantidad;

    std::cout << "Producto agregado con exito!" << std::endl;
    return numProductos + 1; // Devuelve el nuevo número de productos
}

// Función para mostrar todo el inventario
void mostrarInventario(const Producto inventario[], int numProductos) {
    if (numProductos == 0) {
        std::cout << "El inventario esta vacio." << std::endl;
        return;
    }

    std::cout << "\n--- Inventario Completo ---" << std::endl;
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Codigo: " << inventario[i].codigo << ", ";
        std::cout << "Nombre: " << inventario[i].nombre << ", ";
        std::cout << "Precio: $" << inventario[i].precio << ", ";
        std::cout << "Cantidad: " << inventario[i].cantidad << std::endl;
    }
}

// Función para buscar un producto por su código
void buscarProducto(const Producto inventario[], int numProductos) {
    int codigoBuscar;
    bool encontrado = false;

    std::cout << "\n--- Buscar Producto ---" << std::endl;
    std::cout << "Ingrese el codigo del producto a buscar: ";
    std::cin >> codigoBuscar;

    for (int i = 0; i < numProductos; ++i) {
        if (inventario[i].codigo == codigoBuscar) {
            std::cout << "Producto encontrado:" << std::endl;
            std::cout << "Codigo: " << inventario[i].codigo << ", ";
            std::cout << "Nombre: " << inventario[i].nombre << ", ";
            std::cout << "Precio: $" << inventario[i].precio << ", ";
            std::cout << "Cantidad: " << inventario[i].cantidad << std::endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Producto con el codigo " << codigoBuscar << " no encontrado." << std::endl;
    }
}

// Función para calcular el valor total del inventario
double calcularValorTotal(const Producto inventario[], int numProductos) {
    double valorTotal = 0.0;
    for (int i = 0; i < numProductos; ++i) {
        valorTotal += inventario[i].precio * inventario[i].cantidad;
    }
    return valorTotal;
}

//---
// 3. Función Principal (main)
int main() {
    Producto inventario[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;

    do {
        std::cout << "\n\n--- MENU DE INVENTARIO ---" << std::endl;
        std::cout << "1. Agregar producto" << std::endl;
        std::cout << "2. Mostrar inventario" << std::endl;
        std::cout << "3. Buscar producto por codigo" << std::endl;
        std::cout << "4. Calcular valor total del inventario" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Se actualiza numProductos con el valor devuelto por la función
                numProductos = agregarProducto(inventario, numProductos);
                break;
            case 2:
                mostrarInventario(inventario, numProductos);
                break;
            case 3:
                buscarProducto(inventario, numProductos);
                break;
            case 4: {
                double valorTotal = calcularValorTotal(inventario, numProductos);
                std::cout << "\nEl valor total del inventario es: $" << valorTotal << std::endl;
                break;
            }
            case 5:
                std::cout << "Saliendo del programa. ¡Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opcion invalida. Intente de nuevo." << std::endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}
