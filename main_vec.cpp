#include"vector_impl.h"
int main(){
    Vector obj(5);
    obj.push_back(10);
    obj.push_back(15);
   std::cout<< obj.getSize()<<std::endl;
    std::cout<<obj.getCap();
    obj.print();
    
    return 0;
}