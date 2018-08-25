#ifndef PLATOS_H
#define PLATOS_H

#include "Ingredientes.h"

#include<string>
#include<vector>
using namespace std;


class Platos{
	private:
		string nombre;
		vector<int>cantidad_ingre;
		string origen;
		double cantidad_sabor;
		int cocinado;
		double precio;
		double valoracion;
		vector<Ingredientes*>contenidos;
	public:
		Platos(string,string,double,int,double,double);//cantindad ingre, origen , cantidad_sabor, cocinado,precio , valoracion
		void setCantidad_Ingre(int);
		void setCantidad_Sabor(double);
		void setOrigen(string);
		void setCocinado(int);
		void setPrecio(double);
		void setValoracion(double);
		void setContenidos(Ingredientes*);
		vector<int> getCantidad_Ingre();
		double getCantidad_Sabor();	
		string getOrigen();
		int getCocinado();
		double getPrecio();
		double getValoracion();
		vector<Ingredientes*> getContenidos();
		string getNombre();
		void setNombreTemp(string);

};


#endif

