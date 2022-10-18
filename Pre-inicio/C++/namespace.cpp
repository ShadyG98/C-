#include <iostream>
namespace trigonometria{ //podes tener dos sumas, es lo bueno de namespace, es una caja donde adentro tenes funciones y pueden llamarse igual
    int suma(int a,int b){
        return a+b;
    }
}
namespace aritmetica{
    int suma(int a,int b){
        return a-b;
    }
}
int main(){
    using namespace std; //si usas ésto te ahorras el std:: antes del cout
    cout<<"La suma trigonometrica es: "<<trigonometria::suma(5,6)<<"\n";
    cout<<"La suma aritmetica es:"<<aritmetica::suma(5,6)<<"\n";
    system("pause");
    return 0;
}