#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input Char:"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;    
    case 'c':
        cout<<"Hola"<<endl;
        break;            
    case 'd':
        cout<<"Ciao"<<endl;
        break;
    case 'e':
        cout<<"Salut"<<endl;
        break;    
    default:
        cout<<"I'm still Learning! "<<endl;
        break;
    }

    return 0;
}