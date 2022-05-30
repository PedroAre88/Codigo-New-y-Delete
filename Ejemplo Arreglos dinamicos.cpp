#include <iostream>
#include <stdlib.h>
int *calificaciones,cantidadCalificaciones;
void pedirDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    mostrarDatos();
    delete[] calificaciones;
    pedirDatos();
    mostrarDatos();
    
}
void pedirDatos(){
    std::cout<<"Ingrese las calificaciones:";
 std::cin>>cantidadCalificaciones;
    calificaciones=new int[cantidadCalificaciones];
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        std::cout<<"Calificacion "<<i+1<<": ";
        std::cin>>calificaciones[i];
    }
}
void mostrarDatos(){
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        std::cout<<"Calificacion "<<i+1<<": "<<calificaciones[i]<<" - direccion memoria:"<<&calificaciones[i]<<"\n";
    }

} 

