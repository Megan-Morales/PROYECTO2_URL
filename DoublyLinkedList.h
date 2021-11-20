#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

template <typename T>
class DoublyLinkedList
{
    struct Node
    {
        T* item;
        Node* next;
        Node* back;
        Node(T* item) {
            this->item = item;
            this->next = nullptr;
            this->back = nullptr;
        }
    };
    Node* head;
    Node* tail;
    int size = 0;

public:
    void add(T* item) {
        Node* node = new Node(item);
        if (this->isEmpty()) {
            this->head = this->tail = node;
        }
        else {
            this->tail->next = node; //this -> tail = cola actual en la lista
            this->tail->next->back = this->tail; // node = this->tail->next
            this->tail = this->tail->next;
        }
        this->size++;
    }
    int getSize() {
        return this->size;
    }
    bool isEmpty() {
        return this->size == 0;
    }
    T* get(int index) {
        if (index >= this->size || index < 0) {
            return nullptr;
        }
        Node* iterator = this->head;
        int i = 0;
        while (i < index) {
            iterator = iterator->next;
            i++;
        }
        return iterator->item;
    }
    T* getItem(int carnet) {
        if (this->isEmpty()) {
            return nullptr;
        }
        else {
            Node* iterator = this->head;
            while (iterator != nullptr)
            {
                if (iterator->item->getCarnet() == carnet) {
                    return iterator->item;
                }
                iterator = iterator->next;
            }
            return nullptr;
        }
    }
    T* getItem2(string dpi) {
        if (this->isEmpty()) {
            return nullptr;
        }
        else {
            Node* iterator = this->head;
            while (iterator != nullptr)
            {
                if (iterator->item->getDpi() == dpi) {
                    return iterator->item;
                }
                iterator = iterator->next;
            }
            return nullptr;
        }
    }
    /*void removeAt(int carnet) {
        if (this->isEmpty()) {
            return nullptr;
        }
        else {
            Node* temp = this->head;
            this->getItem(carnet);
            if (this->getItem(carnet)!=nullptr) {

                if (this->getItem(carnet)->item = this->head) {
                    head = temp->next;
                }
                else {

                }
            }
        }
    }*/
    void clear() {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
    T* getNext(T* item) {
        return item->next;
    }
    //Ver que en esta función hacemos el intercambio de valores entre los parametros que le enviamos a la función
    void swap(T* item1, T* item2) {
        T temp = *item1; // recordar que el * antes de la variable significa que extraemos el valor al cual apunta el puntero
        *item1 = *item2;
        *item2 = temp;
    }
    void setItem(int index, T* item) {
        if (index >= this->size || index < 0) {v
        }
        else {
            Node* iterator = this->head;
            int i = 0;
            while (i < index) {
                iterator = iterator->next;
                i++;
            }
            iterator->item = item;
        }
    }
    int getCantidadCursos(int carnet) {
        int cantidadCursos = 0;
        if (this->isEmpty()) {
            return cantidadCursos;
        }
        else {
            Node* iterator = this->head;
            while (iterator != nullptr)
            {
                if (iterator->item->getEstudiante()->getCarnet() == carnet) {
                    cantidadCursos++;
                }
                iterator = iterator->next;
            }
            return cantidadCursos;
        }
    }
    //nuevos metodos
    DoublyLinkedList<T>* getArrayAsignaciones(int carnet) {
        int contador = 0;
        DoublyLinkedList<T>* listaAsignaciones = new DoublyLinkedList<T>;

        Node* iterator = this->head;
        while (iterator != nullptr)
        {
            if (iterator->item->getEstudiante()->getCarnet() == carnet) {
                //recordar que el template actual en esta lista es de las clase Asignacion_EyC por lo que guardamos un item que es de tipo Asignacion_EyC
                listaAsignaciones->add(iterator->item);
                contador++;
            }
            iterator = iterator->next;
        }
        return listaAsignaciones;
    }
    bool eliminarEstudiante(int carnet) {
        if (this->isEmpty()) {
            return false;
        }
        else {
            Node* iterator = this->head;
            while (iterator != nullptr)
            {
                if (iterator->item->getCarnet() == carnet) {
                    if (iterator == this->head) {
                        iterator->next->back = iterator->back;
                        this->head = iterator->next;
                    }
                    else if (iterator == this->tail) {
                        iterator->back->next = iterator->next;
                        this->tail = iterator->back;
                    }
                    else {

                        iterator->back->next = iterator->next;
                        iterator->next->back = iterator->back;

                    }
                    this->size--;
                    return true;
                }
                iterator = iterator->next;
            }
            return false;
        }
    }
    bool modificarEstudiante(T* itemModificado) {
        T* item = this->getItem(itemModificado->getCarnet());
        if (item != nullptr) {
            item->setNombre(itemModificado->getNombre());
            item->setApellidos(itemModificado->getApellidos());
            item->setDpi(itemModificado->getDpi());
            item->setNivelAcademico(itemModificado->getNivelAcademico());
            item->setFacultad(itemModificado->getFacultad());
            item->setAñoIngreso(itemModificado->getAñoIngreso());
            return true;
        }
        else {
            return false;
        }
    }
    double promedioEstudiante(int carnet) {
        if (this->isEmpty()) {
            return -1;
        }
        else {
            Node* iterator = this->head;
            int contCursos = 0;
            double sumatoriaNotas = 0;

            while (iterator != nullptr)
            {
                if (iterator->item->getEstudiante()->getCarnet() == carnet) {
                    sumatoriaNotas = sumatoriaNotas + iterator->item->getNota();
                    contCursos++;
                }
                iterator = iterator->next;
            }
            double promedio = sumatoriaNotas / contCursos;
            return promedio;
        }
    }
    DoublyLinkedList<T>* getAlumnosPorFacultad(string facultad) {
        if (this->isEmpty()==true) {
            return nullptr;
        }
        int contador = 0;
        DoublyLinkedList<T>* listaAlumnosPorFacultad = new DoublyLinkedList<T>;

        Node* iterator = this->head;
        while (iterator != nullptr)
        {
            if (iterator->item->getFacultad() == facultad) {
                //recordar que el template actual en esta lista es de las clase Asignacion_EyC por lo que guardamos un item que es de tipo Asignacion_EyC
                listaAlumnosPorFacultad->add(iterator->item);
                contador++;
            }
            iterator = iterator->next;
        }
        return listaAlumnosPorFacultad;
    }

};