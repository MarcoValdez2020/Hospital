#include <iostream>
#include <string>
#include <conio.h>
#include<stdlib.h>
#include "goto.h"
#include "hospital.h"
using namespace std;

void  alta_paciente(nodo *& lista, int nums, string nom, int ed , string dir, char s, string fecha, int enf ){
	nodo *nvo_nodo = new nodo();
	nvo_nodo ->numseg= nums;
	nvo_nodo ->nombre= nom;
	nvo_nodo ->edad=ed ;
	nvo_nodo ->direccion= dir;
	nvo_nodo ->sexo= s;
	nvo_nodo ->fechaingreso= fecha;
	nvo_nodo ->enfermedad= enf;
	nodo *aux1=lista;
	nodo * aux2;
	while((aux1 != NULL) && (aux1->numseg)<nums){
		aux2=aux1;
		aux1=aux1->siguiente;
	}	
	if (lista==aux1){
		lista=nvo_nodo;
	}
	else{
		aux2->siguiente=nvo_nodo;
	}
	nvo_nodo->siguiente=aux1;
	
}

void mostrar_todos_pacientes(nodo *lista){
	nodo *actual= new nodo();
	actual =lista;			
		while(actual!=NULL){
			int i;
			gotoxy(17,4);cout<<"No. Seguro  "<<" Nombre    "<< "Edad  "<<" Sexo "<<"     Direccion     "<<"Fecha Ingreso    "<<"Enfermedad ";
			gotoxy(18,5+i);cout<<actual->numseg;
			gotoxy(30,5+i);cout<<actual->nombre;
			gotoxy(40,5+i);cout<<actual->edad;
			gotoxy(47,5+i);cout<<actual->sexo;
			gotoxy(57,5+i);cout<<actual->direccion;
			gotoxy(72,5+i);cout<<actual->fechaingreso;
			gotoxy(88,5+i);cout<<actual->enfermedad;
			actual=actual->siguiente;
			i=i+1;
		}		
}


