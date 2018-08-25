#ifndef CLIENTES_H
#define CLIENTES_H

#include "Platos.h"

#include<string>
#include<vector>
using namespace std;

class Clientes{
	private:
		string nombre;
		int consumidos;
		int gastado;
		double evaluacion;
	public:
		Clientes(string,int,double,int);
		void setNombre(string);
		void setConsumidos(int);
		void setGastado(int);
		void setEvaluacion(double);
		string getNombre();
		int getConsumidos();
		int getGastado();
		double getEvaluacion();
};
#endif



