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


void buscar_paciente(nodo *lista, int nums){
    bool band=false;
	while (lista!=NULL){
		if (nums==(lista->numseg)){
			gotoxy(17,4);cout<<"No. Seguro  "<<" Nombre    "<< "Edad  "<<" Sexo "<<"     Direccion     "<<"Fecha Ingreso    "<<"Enfermedad ";
			gotoxy(18,5);cout<<lista->numseg;
			gotoxy(30,5);cout<<lista->nombre;
			gotoxy(40,5);cout<<lista->edad;
			gotoxy(47,5);cout<<lista->sexo;
			gotoxy(57,5);cout<<lista->direccion;
			gotoxy(72,5);cout<<lista->fechaingreso;
			gotoxy(88,5);cout<<lista->enfermedad;
			band=true;
		}
		lista=lista->siguiente;
	}
	if (band==false){
			gotoxy(18,5);cout<<"EL pacinete no se encontro!!";
		}
	
}


void baja_paciente(nodo *&lista, int nums, int dhosp){
		float total;
		if (nums==(lista->numseg)){
			switch(lista->enfermedad){
				case 1:	
					total=(dhosp*350);
				break;	
				case 2:
					total=(dhosp*425.80);	
				break;
				case 3:	
					total=(dhosp*796);
				break;
				case 4:	
					total=(dhosp*1610.1);
				break;
				default:
					cout<<"Enfermedad no encontrada";
			}	
			gotoxy(18,7);cout<<"Dias Hospitalizado:  "<<dhosp;
			gotoxy(18,9);cout<<"El totala a pagar es: "<<total<<"$";
		}
		if(lista!=NULL){
			nodo *aux_borrar;
			nodo *anterior=NULL;
			aux_borrar=lista;
			while((aux_borrar!=NULL)&&(aux_borrar->numseg!=nums)){
				anterior = aux_borrar;
				aux_borrar=aux_borrar->siguiente;
			}
		if(aux_borrar==NULL){
			gotoxy(7,5);
			cout<<"El Paciente no existe";
		}else if(anterior==NULL){
			lista=lista->siguiente;
			delete aux_borrar;
		}else {
			anterior ->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}	
		
		}
	
	
}


void graficar_menu(int tipomenu){
	switch (tipomenu){
	case 1:
		gotoxy(13,2); cout<<" ________________________________________________________________" ;
		gotoxy(13,3); cout<<"|                        Programa Hospital +                     |";
		gotoxy(13,4); cout<<"|________________________________________________________________|" ;
		gotoxy(13,5); cout<<"|                                                                |";
		gotoxy(13,6); cout<<"|                                                                |";
		gotoxy(13,7); cout<<"|                                                                |";
		gotoxy(13,8); cout<<"|                                                                |";
		gotoxy(13,9); cout<<"|                                                                |";
		gotoxy(13,10);cout<<"|                                                                |";
		gotoxy(13,11);cout<<"|                                                                |";
		gotoxy(13,12);cout<<"|                                                                |";
		gotoxy(13,13);cout<<"|                                                                |";
		gotoxy(13,12);cout<<"|                                                                |";
		gotoxy(13,14);cout<<"|________________________________________________________________|";
	break;
	case 2:
		gotoxy(13,0); cout<<" _____________________________________________________________________________________________";
		gotoxy(13,1); cout<<"|                                      Alta de Pacientes                                      |";
		gotoxy(13,2); cout<<"|_____________________________________________________________________________________________|";
		gotoxy(13,3); cout<<"|                                                                                             |";
		gotoxy(13,4); cout<<"|                                                                                             |";
		gotoxy(13,5); cout<<"|                                                                                             |";
		gotoxy(13,6); cout<<"|                                                                                             |";
		gotoxy(13,7); cout<<"|                                                                                             |";
		gotoxy(13,8); cout<<"|                                                                                             |";
		gotoxy(13,9); cout<<"|                                                                                             |";
		gotoxy(13,10);cout<<"|                                                                                             |";
		gotoxy(13,11);cout<<"|                                                                                             |";
		gotoxy(13,12);cout<<"|                                                                                             |";
		gotoxy(13,13);cout<<"|_____________________________________________________________________________________________|";
	break;
	case 3:
		gotoxy(13,0); cout<<" _____________________________________________________________________________________________";
		gotoxy(13,1); cout<<"|                                    Consultas de Pacientes                                   |";
		gotoxy(13,2); cout<<"|_____________________________________________________________________________________________|";
		gotoxy(13,3); cout<<"|                                                                                             |";
		gotoxy(13,4); cout<<"|                                                                                             |";
		gotoxy(13,5); cout<<"|                                                                                             |";
		gotoxy(13,6); cout<<"|                                                                                             |";
		gotoxy(13,7); cout<<"|                                                                                             |";
		gotoxy(13,8); cout<<"|                                                                                             |";
		gotoxy(13,9); cout<<"|                                                                                             |";
		gotoxy(13,10);cout<<"|                                                                                             |";
		gotoxy(13,11);cout<<"|                                                                                             |";
		gotoxy(13,12);cout<<"|                                                                                             |";
		gotoxy(13,13);cout<<"|_____________________________________________________________________________________________|";
	break;
	case 4:
		gotoxy(13,2); cout<<" ________________________________________________________________" ;
		gotoxy(13,3); cout<<"|                            Busquedas...                        |";
		gotoxy(13,4); cout<<"|________________________________________________________________|";
		gotoxy(13,5); cout<<"|                                                                |";
		gotoxy(13,6); cout<<"|                                                                |";
		gotoxy(13,7); cout<<"|                                                                |";
		gotoxy(13,8); cout<<"|                                                                |";
		gotoxy(13,9); cout<<"|                                                                |";
		gotoxy(13,10);cout<<"|                                                                |";
		gotoxy(13,11);cout<<"|                                                                |";
		gotoxy(13,12);cout<<"|                                                                |";
		gotoxy(13,13);cout<<"|                                                                |";
		gotoxy(13,12);cout<<"|                                                                |";
		gotoxy(13,14);cout<<"|________________________________________________________________|";
	
	break;	
	case 5:
		gotoxy(13,2); cout<<" ________________________________________________________________" ;
		gotoxy(13,3); cout<<"|                            Busquedas...                        |";
		gotoxy(13,4); cout<<"|________________________________________________________________|";
		gotoxy(13,5); cout<<"|                                                                |";
		gotoxy(13,6); cout<<"|                                                                |";
		gotoxy(13,7); cout<<"|                                                                |";
		gotoxy(13,8); cout<<"|________________________________________________________________|";
	break;
	case 6:
		gotoxy(13,2); cout<<" ____________________________________________________________________" ;
		gotoxy(13,3); cout<<"|                         Baja de un Paciente                        |";
		gotoxy(13,4); cout<<"|____________________________________________________________________|";
		gotoxy(13,5); cout<<"|                                                                    |";
		gotoxy(13,6); cout<<"|                                                                    |";
		gotoxy(13,7); cout<<"|                                                                    |";
		gotoxy(13,8); cout<<"|                                                                    |";
		gotoxy(13,9); cout<<"|                                                                    |";
		gotoxy(13,10);cout<<"|                                                                    |";
		gotoxy(13,11);cout<<"|                                                                    |";
		gotoxy(13,12);cout<<"|                                                                    |";
		gotoxy(13,13);cout<<"|                                                                    |";
		gotoxy(13,14);cout<<"|____________________________________________________________________|";
	break;
	case 7:
		gotoxy(13,0); cout<<" _____________________________________________________________________________________________________";
		gotoxy(13,1); cout<<"|                                         Baja de un Paciente                                         |";
		gotoxy(13,2); cout<<"|_____________________________________________________________________________________________________|";
		gotoxy(13,3); cout<<"|                                                                                                     |";
		gotoxy(13,4); cout<<"|                                                                                                     |";
		gotoxy(13,5); cout<<"|                                                                                                     |";
		gotoxy(13,6); cout<<"|                                                                                                     |";
		gotoxy(13,7); cout<<"|                                                                                                     |";
		gotoxy(13,8); cout<<"|                                                                                                     |";
		gotoxy(13,9); cout<<"|                                                                                                     |";
		gotoxy(13,10);cout<<"|                                                                                                     |";
		gotoxy(13,11);cout<<"|_____________________________________________________________________________________________________|";

	break;	
	}
	
}

