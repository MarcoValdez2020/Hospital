#include <iostream>
#include <string>
#include <conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{//creamos la estructura nodo
	int  numseg;
	string nombre;
	int edad;
	string direccion;
	char sexo;
	string fechaingreso;
	int enfermedad;
	nodo *siguiente;
};


void alta_paciente(nodo *&, int, string, int, string, char, string, int);//funcion para dar de alta un paciente
void mostrar_todos_pacientes(nodo *);
void buscar_paciente(nodo *, int);


