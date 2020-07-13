#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
const int longCad = 20;

    struct compras{
    char nombre[longCad+1];
    int cantidad;
    float precio;
    float costoxarticulo;
    };

    compras datosdecompras(compras a){

        cout<<"\nNombre del producto: "<<endl;
        cin>>a.nombre;
        cout<<"Cantidad del producto: "<<endl;
        cin>>a.cantidad;
        cout<<"Precio del producto: "<<endl;
        cin>>a.precio;

        return a;
    }

    float precio_por_art(compras b){

        b.costoxarticulo = b.cantidad * b.precio;

        return b.costoxarticulo;
    }

    compras mostrardatos(compras c){
        
        cout<<"\nNombre: ";
        cout<<c.nombre<<endl;

        cout<<"cantidad: ";
        cout<<c.cantidad<<endl;

        cout<<"precio: ";
        cout<<c.precio<<endl;

        cout<<"costo: ";
        cout<<c.costoxarticulo<<endl;
    }

    float totalapagar(float d){
        float e = 0;
        e += d;

        return e;
    }

int main(){
    int productos;
    float preciototal;

    cout<<"Ingresa cuantos productos diferentes compraste: "<<endl;
    cin>>productos;

    compras registro[productos];

    for(int i = 0; i < productos; i++){

        registro[i] = datosdecompras(registro[i]);
    }

    for(int i = 0; i < productos; i++){

        registro[i].costoxarticulo = precio_por_art(registro[i]);
    }

    for(int i = 0; i < productos; i++){

        mostrardatos(registro[i]);
    }

    for(int i = 0; i < productos; i++){
        preciototal += totalapagar(registro[i].costoxarticulo);
    }

    cout<<"\nEl total a pagar es: "<<preciototal;

    return 0;
}