#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include<string>
#include<vector>
using namespace std;

class Ingredientes{
	private:
		string nombre;
		string type;
		double aporte_sabor;
		int duracion;
		int cantidad;
	public:
		Ingredientes(string,string,double,int,int);//nombre,type,aporte,duracion,cantidad
		void setNombre(string);
		void setType(string);
		void setAporte(double);
		void setDuracion(int);
		void setCantidad(int);
		string getNombre();
		string getType();
		double getAporte();
		int getDuracion();
		int getCantidad();
};
#endif