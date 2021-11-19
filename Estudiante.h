#pragma once
#include "Persona.h"
#include "DoublyLinkedList.h"
#include <string>
#include "Curso.h"
using std::string;


class Estudiante :
    public Persona
{
protected:
    string nivelAcademico;
    int carnet;
    string facultad;
    int a�oIngreso;
    DoublyLinkedList<Curso>* listaCursos;

public:

    Estudiante(string nombre, string apellidos, string DPI, string nivelAcademico, int carnet, string facultad, int a�oIngreso) :Persona(nombre, apellidos, DPI) {
        this->nivelAcademico = nivelAcademico;
        this->carnet = carnet;
        this->facultad = facultad;
        this->a�oIngreso = a�oIngreso;
        this->listaCursos = new DoublyLinkedList<Curso>(); //realmente nunca usamos este atributo ya que creamos las clases de asignaciones para evitar las relaciones de muchos a muchos.
    }

    void insertCurso(Curso* nuevoCurso) { //Agregar cursos al estudiante
        this->listaCursos->add(nuevoCurso);

    }
    string getNivelAcademico() {
        return this->nivelAcademico;
    }
    string getFacultad() {
        return this->facultad;
    }
    int getCarnet() {
        return this->carnet;
    }
    int getA�oIngreso() {
        return this->a�oIngreso;
    }
    void setNivelAcademico(string nivelAcademico) {
        this->nivelAcademico = nivelAcademico;
    }
    void setFacultad(string facultad) {
        this->facultad = facultad;
    }
    void setA�oIngreso(int a�oIngreso) {
        this->a�oIngreso = a�oIngreso;
    }


};

