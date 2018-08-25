#include "Ingredientes.h"

#include<string>
#include<vector>
#include<iostream>
using namespace std;

Ingredientes::Ingredientes(string pNombre,string pType,double pAporte_sabor,int pDuracion,int pCantidad){
	nombre = pNombre;
	type = pType;
	aporte_sabor = pAporte_sabor;
	duracion = pDuracion;
	cantidad = pCantidad;
}

void Ingredientes::setNombre(string pNombre){
	nombre = pNombre;
}

void Ingredientes::setType(string pType){
	type = pType;
}

void Ingredientes::setAporte(double pAporte_sabor){
	aporte_sabor = pAporte_sabor;
}

void Ingredientes::setDuracion(int pDuracion){
	duracion = pDuracion;
}

void Ingredientes::setCantidad(int pCantidad){
	cantidad = pCantidad;
}
string Ingredientes::getNombre(){
	return nombre;
}

string Ingredientes::getType(){
	return type;
}

double Ingredientes::getAporte(){
	return aporte_sabor;
}

int Ingredientes::getDuracion(){
	return duracion;
}

int Ingredientes::getCantidad(){
	return cantidad;
}

