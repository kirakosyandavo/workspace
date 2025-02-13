#ifndef VECTOR
#define VECTOR
#include<iostream>

class Vector{
    private:
    int*m_data;
    int m_size;
    int m_capacity;
    void reallocate(int new_capacity);

    public:
    Vector():m_size(0),m_capacity(0),m_data(nullptr){};
    Vector(int size):m_size(0),m_capacity(size){
        m_data=new int[m_capacity];
    }
    int at(int index)const;
    void push_back(int index);
    void pop_back();
    int getSize()const;
    int getCap()const;
    void resize(int new_size);
    void reserve(int new_cap);
    int front()const;
    int back()const;
    bool isEmpty()const;
    void shrink_to_fit();
    void insert(int index,int value);
    void erase(int index);
    void clear();
    void print();
    
    ~Vector(){
        delete[]m_data;
     m_data=nullptr;
    }
};
#endif