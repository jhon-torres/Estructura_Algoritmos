#include <iostream>
using namespace std;
int lista [100];
int longitud=0;
void llenar(int &longitud, int lista[]);
void ordenar(int &longitud,int lista[]);
void buscar(int &longitud, int lista[]);

int main (){
    llenar(longitud,lista);
    ordenar(longitud,lista);
    buscar(longitud,lista);
    system ("pause");
    return 0;
}

void llenar(int &longitud, int lista[]){
    cout<<"> Ingrese la longitud de la lista: ";
    cin>>longitud;
    while (longitud<= 0){
    cout<<"\t\t[Solo se admiten valores mayores a 0]"<<endl;
    cout<<"> Ingrese la longitud de la lista: ";
    cin>>longitud;
    }
    for (int i =0;i<longitud;i++){
        cout<<"> Ingrese el elemento: ";
        cin>>lista[i];
    }
}

void ordenar (int &longitud,int lista[]){
    int aux=0;
    for (int i =0;i<longitud;i++){ 
        for (int j=0;j<longitud-1;j++){
            if (lista[j]>lista[j+1]){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
        }
    }
    cout<<"\t--- ELEMENTOS ORDENADOS: ";
    for (int i =0;i<longitud;i++){
        cout<<"["<<lista[i]<<"] ";
    }
}

void buscar(int &longitud, int lista[]){
    int numero=0,mitad=0,i=0,j=0;
    j = longitud-1;
    cout<<endl<<" > Ingrese el numero que desee buscar: ";
    cin>>numero;
    do{
        mitad = (i+j)/2;
        if (lista[mitad]>=numero){j=mitad-1;}
        else{i = mitad+1;}
    } while (i<=j); 
    if (lista[mitad] == numero){
        cout<<"\t\t -----> N U M E R O  E N C O N T R A D O, posicion ["<<i<<"]"<<endl;
    }
    else{
        cout<<"\t\tE L E M E N T O   N O   E N C O N T R A D O"<<endl;
    }
}