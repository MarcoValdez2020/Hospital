#include <iostream>
#include <string>
#include <conio.h>
#include<stdlib.h>
#include "hospital.cpp"
using namespace std;

main(){
	system("color F0");
	nodo *lista = NULL;
	string nombre;
	string direccion;
	string fechaingreso;
	int numseg, edad, enfermedad,opc,tipomenu;
	int dhosp;
	char sexo, res;

	do{
		system("cls");
		tipomenu=1;
		graficar_menu(tipomenu);
		gotoxy(17,6);
		cout<<"1) Alta Paciente"<<endl;
		gotoxy(17,8);
		cout<<"2) Buscar Pacientes "<<endl;
		gotoxy(17,10);
		cout<<"3) Baja de Pacientes"<<endl;
		gotoxy(17,12);
		cout<<"4) Salir"<<endl;
		gotoxy(17,13);
		cin>>opc;
		switch(opc){
			case 1:
				do{
					system("cls");
					tipomenu=2;
					graficar_menu(tipomenu);
					gotoxy(17,4);cout<<"No. Seguro  "<<" Nombre    "<< "Edad  "<<" Sexo "<<"     Direccion     "<<"Fecha Ingreso    "<<"Enfermedad ";
					gotoxy(17,5);cin>>numseg;
    				gotoxy(30,5);cin>>nombre;	
					gotoxy(40,5);cin>>edad;
					gotoxy(47,5);cin>>sexo;
					gotoxy(57,5);cin>>direccion;
					gotoxy(72,5);cin>>fechaingreso;
					gotoxy(88,5);cin>>enfermedad;
					alta_paciente(lista,numseg,nombre,edad,direccion,sexo,fechaingreso,enfermedad);
					gotoxy(17,7);cout<<"Desea realizar otro registro? s/n: ";
					gotoxy(51,7);cin>>res;
					system("cls");
				}while(res=='s'|| res=='S');
			break;
			case 2:
				do{
					system("cls");
					tipomenu=4;
					graficar_menu(tipomenu);
					gotoxy(17,5);cout<<"1) Consultar todos los pacientes";
					gotoxy(17,7);cout<<"2) Consulta de un Paciente";
					gotoxy(17,9);cout<<"3) Regresrar";
					gotoxy(17,11);cin>>opc;
					switch(opc){
						case 1:
							system("cls");
							if(lista!=NULL){
								tipomenu=3;
			        			graficar_menu(tipomenu);
								mostrar_todos_pacientes(lista);
								getch();
							}else {
								gotoxy(7,3);cout<<"La lista esta vacia!";
								getch();
							}
						break;
						case 2:
							system("cls");
							if(lista!=NULL){
								tipomenu=5;
			        			graficar_menu(tipomenu);
								gotoxy(17,5);cout<<"Ingrese el numero de seguro del paciente que desea buscar:";
								gotoxy(17,7);cin>>numseg;
								system("cls");
								tipomenu=3;
			        			graficar_menu(tipomenu);
								buscar_paciente(lista,numseg);
								getch();
							}else {
								gotoxy(7,3);cout<<"La lista esta vacia!";
								getch();
							}
						break;
						case 3:
						break;
						default: 
						cout<<"Opcion incorrecta!! ";
				}
			getch();
		}while(opc!=3);
			break;
			case 3:
				system("cls");
				if(lista!=NULL){
					tipomenu=6;
		        	graficar_menu(tipomenu);
					gotoxy(17,5);cout<<"Ingrese el numero de seguro del paciente que desea eliminar: ";
					gotoxy(17,7);cin>>numseg;
					gotoxy(17,9);cout<<"Ingrese los dias que el paciente estuvo hospitalizado: ";
					gotoxy(17,11);cin>>dhosp;
					system("cls");
					tipomenu=7;
		        	graficar_menu(tipomenu);
		        	buscar_paciente(lista,numseg);
					baja_paciente(lista,numseg,dhosp);
					getch();
				}else {
					gotoxy(7,3);cout<<"La lista esta vacia!";
					getch();
				}				
			break;
			case 4:
				gotoxy(5,18);
				system("EXIT");
			break;	
			default:
			cout<<"Opcion Invalida";	
		}
	}while(opc!=4);
}


