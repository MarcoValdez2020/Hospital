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

void graficar_menu(int);
void alta_paciente(nodo *&, int, string, int, string, char, string, int);//funcion para dar de alta un paciente
void mostrar_todos_pacientes(nodo *);//Funcion que nos muestra a TODOS los pacientes
void buscar_paciente(nodo *, int);//Funcion que nos permite buscar un paciente
void baja_paciente(nodo *&, int , int );//Nos ayuda a eliminar un paciente y calcular el total que este pagará




