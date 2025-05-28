#include <iostream>
#include <string>

struct Nodo {
    std::string curso;
    Nodo* siguiente;
};

void agregarNodo(Nodo*& cabeza, const std::string& nombreCurso) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->curso = nombreCurso;
    nuevoNodo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

void imprimirLista(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        std::cout << temp->curso << " -> ";
        temp = temp->siguiente;
    }
    std::cout << "nullptr" << std::endl;
}

void eliminarLista(Nodo*& cabeza) {
    Nodo* temp;
    while (cabeza != nullptr) {
        temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }
}

int main() {
    Nodo* listaCursos = nullptr;

    // Agregamos los cursos en orden de prerequisitos
    agregarNodo(listaCursos, "ANALISIS Y DISENOS DE ALGORITMOS");
    agregarNodo(listaCursos, "ESTRUCTURA DE DATOS" );
    agregarNodo(listaCursos, "SISTEMAS DE GESTION DE BASE DE DATOS I");
    agregarNodo(listaCursos, "SISTEMAS DE GESTION DE BASE DE DATOS II");
    agregarNodo(listaCursos, "GESTION DE PROYECTOS TICS");
    agregarNodo(listaCursos, "INGENIERIA DE SOFTWARE I");
    agregarNodo(listaCursos, "INGENIERIA DE SOFTWARE II");
    agregarNodo(listaCursos, "TALLER DE DESARROLLO DE SOFTWARE");
    agregarNodo(listaCursos, "INTELIGENCIA ARTIFICIAL");

    // Imprimir lista
    std::cout << "Lista de cursos en orden de prerequisitos:\n";
    imprimirLista(listaCursos);

    // Liberar memoria
    eliminarLista(listaCursos);

    return 0;
}
