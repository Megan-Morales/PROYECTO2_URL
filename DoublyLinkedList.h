#pragma once
#include <string>
using std::string;

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
            while (iterator!=nullptr)
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
        if (index >= this->size || index < 0) {

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
    
};