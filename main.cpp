#include"header.h"
using namespace std;
int main(){
    int n;
    do{
   cout<< "Select a shape"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Triangle"<<endl;
    cout<<"4. Square"<<endl;
    cout<<"5.if you want exit"<<endl;
     cout<<"enter choice"<<endl;
      
     cin>>n;
     
    switch(n){
     case 1:cout<<"enter the radius"<<endl;
            double radius;
        cin>>radius;
        cout<<area(radius)<<endl;
        break;
    case 2: cout<<"enter the width and height";
                double width,height;
                cin>>width>>height;
                cout<<area(width,height,'r')<<endl;  
                break;      
    
    case 3: cout<<"enter the base and height"<<endl;
                 double base,height1;
                 cin>>base>>height1;
                 cout<<area(base,height1)<<endl;
                 break;
    case 4: cout<<"enter the side";
                    int n;
                    cin>>n;
                    cout<<area(n)<<endl; 
                    break;
     case 5: cout<<"program is over";
                  break;               
    }
    }while(n!=5);
 return 0; 

    
    
}