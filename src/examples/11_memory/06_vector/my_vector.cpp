#include "my_vector.h"

using std:: cout;

template<typename T>
MyVector<T>:: MyVector()
    
{


}

template<typename T>
MyVector<T>::MyVector (int c) : capacity(c), elements {new T[c]}
{
    cout<<"constructor MyVector (c) created memory at: "<<elements<<"\n";
}

template<typename T>
MyVector<T>:: MyVector(const MyVector& v1) : size(v1.size), capacity(v1.capacity), elements{new T [v1.capacity]}
{
    cout<< "Constructor MyVector(const MyVector& v) created memory at: "<<elements<<"\n";
    for (auto i=0; i < size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

template<typename T>
MyVector<T>r& MyVector<T>::operator= (const Vector& v);
{
    int* temp = new T[v1.size];

    for (auto i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[]elements;
    elements = temp;
    cout<<"copy assignment new memory createat "<<elements<<"\n";

    size = v1.size;

    return* this ;
    
}

template<typename T>

MyVector<T>::MyVector(MyVector<T>&& v)
: size {v1.size}, elements {v1.elements}
{
    cout<<" Move constructor - memory pointer switched from v1 to v2: "<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

MyVector& MyVector::operator=(MyVctor&& v1)
{
    cout<<"Mve assignment - Delete memory"<<elements<<"\n";
    delete[]elements;
    elements = v1.elements;
    size = v1.size;
    cout<<"Move assignment - Memory pointer switched "<<elements<<"\n";

    v1.elements = nullptr;
    v1.size = 0;
    
    return *this;
}

template<typename T>
void MyVector<T>:: Reserve(int new_size)
{
    if(new_size > capacity)
    {
        int*temp = new T[new_size];
        cout<< "Reserve-temp memory created: "<<temp<<"\n";

        for (auto i=o; i < size; i ++)
        {
                temp[i] = elements[i];
        }

        cout<<"Reserve- delete the old memory:"<<elements<<"\n";
        delete[]elements;

        elements = temp;
        capacity = new_size;
    }
}

void MyVector:: PushBack(int value)
{
    if(capacity == 0 )
    {
        Reserve(RESERVE_DEFAULT_SIZE);//Create new memory of 8 slots
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);//double the capacity
    }


    elements[size] = value;
    size++;
}

template<typename T>

MyVector<T>::~MyVector()
{
    cout<<"Destructor ~MyVector() deleting memory at: "<<elements<<"\n";
    delete[] elements; 

}

template class

////FREE FUNCTION NOT PART OF THE MYVECTOR CLASS
MyVector<T> get_my_vector()
{
    MyVector<int> v1(3);
    return v1;
}