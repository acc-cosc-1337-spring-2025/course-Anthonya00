//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class MyVector
{
public: 
    MyVector(int c);//constructor
    MyVector(const MyVector& v);// copy constructor Rule of 3 Leacy C++(before 2009)
    MyVector& operator= (const MyVector& v);//copy assignment Rule of 3
    MyVector(MyVector&& v);//Rule 4 of 5 for Modern C++
    MyVector& operator=(MyVector&& v1);//Rule 5 of 5 ModernC++ move assignment
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    void PushBack(int value);
    ~MyVector();//destructor//Rule of 3

private:
    int size{0};//number of elements in the list
    int capacity;//toal number of elements
    int* elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);




};

#endif

////FREE FUNCTION NOT PART OF THE MYVECTOR CLASS
MyVector get_my_vector();
