#include "Platos.h"

#include<string>
#include<vector>
#include<iostream>
using namespace std;

Platos::Platos(string pNombre,string pOrigen,double pCantidad_sabor,int pCocinado,double pPrecio,double pValoracion){
//cantindad ingre, origen , cantidad_sabor, cocinado,precio , valoracion
	origen = pOrigen;
	cantidad_sabor=pCantidad_sabor;
	cocinado = pCocinado;
	precio = pPrecio;
	valoracion = pValoracion;
	nombre = pNombre;
}

string Platos::getNombre(){
	return nombre;
}

/*void Platos::setNombreTemp(string pNombre){
	nombre = pNombre;
}*/

void Platos::setCantidad_Ingre(int pCantidad_ingre){
	cantidad_ingre.push_back(pCantidad_ingre);
}

void Platos::setCantidad_Sabor(double pCantidad_sabor){
	cantidad_sabor=pCantidad_sabor;
}

void Platos::setOrigen(string pOrigen){
	origen=pOrigen;
}

void Platos::setCocinado(int pCocinado){
	cocinado=pCocinado;
}

void Platos::setPrecio(double pPrecio){
	precio=pPrecio;
}

void Platos::setValoracion(double pValoracion){
	valoracion=pValoracion;
}

void Platos::setContenidos(Ingredientes* pIngrediente){
	contenidos.push_back(pIngrediente);
}

vector<int> Platos::getCantidad_Ingre(){
	return cantidad_ingre;
}

string Platos::getOrigen(){
	return origen;
}

double Platos::getCantidad_Sabor(){
	return cantidad_sabor;
}



int Platos::getCocinado(){
	return cocinado;
}
double Platos::getPrecio(){
	return precio;
}
double Platos::getValoracion(){
	return valoracion;
}
vector<Ingredientes*> Platos::getContenidos(){
	return contenidos;
}
