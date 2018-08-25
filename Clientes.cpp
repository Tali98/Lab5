#include "Clientes.h"

Clientes::Clientes(string pNombre, int pGastado , double pEvaluacion, int pConsumidos){
	nombre = pNombre;
	gastado = pGastado;
	evaluacion = pEvaluacion;
	consumidos = pConsumidos;
}

void Clientes::setNombre(string pNombre){
	nombre = pNombre;
}

void Clientes::setConsumidos(int pConsumidos){
	consumidos = pConsumidos;
}

void Clientes::setGastado(int pGastado){
	gastado = pGastado;
}

void Clientes::setEvaluacion(double pEvaluacion){
	evaluacion = pEvaluacion;
}

string Clientes::getNombre(){
	return nombre;
}

int Clientes::getConsumidos(){
	return consumidos;
}

int Clientes::getGastado(){
	return gastado;
}

double Clientes::getEvaluacion(){
	return evaluacion;
}