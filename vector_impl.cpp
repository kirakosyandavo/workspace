#include"vector_impl.h"
using namespace std;
void Vector::reallocate(int new_capacity){
    int*tmp=new int[new_capacity];
    for(int i=0;i<m_size;i++){
        tmp[i]=m_data[i];
    }
    delete []m_data;
    m_data=tmp;

}
int Vector::at(int index)const{
    if(index>=m_size){
         cout<<"there is no such a index";
           exit(0);
    }
    return m_data[index];
}
void Vector::push_back(int index){
    if(m_capacity==0){
        m_capacity=2;
        reallocate(m_capacity);
    }
    if(m_size==m_capacity){
        m_capacity=m_capacity*2;
        reallocate(m_capacity);
        m_data[m_size]=index;
    }
    else{
        m_data[m_size]=index;
    }
    m_size++;
}
void Vector::pop_back(){
    m_size=m_size-1;
}
int Vector::getSize()const{
 return m_size;
}
int Vector::getCap()const{
    return m_capacity;
}
void Vector:: resize(int new_size){
    if(new_size<m_capacity){
        m_size=new_size;
    }  
    else{ reallocate(new_size);
          m_capacity=new_size;
          m_size=new_size;

    }
}
    void Vector:: reserve(int new_cap){
               reallocate(new_cap);
               m_capacity=new_cap;
               if(new_cap<m_size){
                m_size=new_cap;
                m_capacity=new_cap;
               }
               }
int Vector::front()const{
    if(m_size==0){
        cout<<"there is no element";
        exit(0);
    }
    return m_data[0];
    
}
    int Vector::back()const{
        if(m_size==0){
            cout<<"there is no element"; 
    }    
    return m_data[m_size];    
   
    }

    bool Vector:: isEmpty()const{
            if(m_size==0){
                return false;
            }
            return true;
    }
    void Vector:: shrink_to_fit(){
        m_capacity=m_size;
        reallocate(m_size);

    }
   void Vector::insert(int index,int value){
    
    if(m_size==m_capacity){
        m_capacity=m_capacity*2;
        reallocate(m_capacity);
    }
    m_size++; 
    for(int i=m_size-1;i>index;i--){
        m_data[i]=m_data[i-1];
    }
    m_data[index]=value;


   } 
   void Vector::erase(int index){
    if(index>=m_size){
        exit(0);
    }
    for(int i=index;i<m_size-1;i++){
        m_data[i]=m_data[i+1];
    }
    m_size--;
   }
   void Vector::clear(){
    m_size=0;
    m_capacity=0;
    delete[] m_data;
   }
   void Vector::print(){
    for(int i=0;i<m_size;i++){
        cout<<m_data[i]<<"\t";
    }

   }

