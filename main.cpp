#include "Ingredientes.h"
#include "Platos.h"
#include "Clientes.h"

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<Platos*>Menu;
	vector<Ingredientes*>Bodega;
	vector<Clientes*>clientes;
	Platos* plato;
	clientes.push_back(new Clientes("Tali",0,0,0));
	Bodega.push_back(new Ingredientes("Mangos","Fruta",12,1,45));
	Menu.push_back(new Platos("Mangos en sal","Le gustan a Victor",40,0,15,5));
	cout<<"BIENVENIDO A PLATOS++ EL MEJOR RESTUARANTE DE LA HISTORIA"<<endl;
	cout<<"QUE DESEA HACER"<<endl;
	cout<<"1.Crear Ingrediente nuevo \n"
	<<"2.Crear Plato \n"
	<<"3.Cliente existente \n"
	<<"4.Cliente nuevo \n"
	<<"5.Imprimir casi todo \n"
	<<"6.Si desea salir ingrese cualquier numero \n"
	<<"Ingrese su opcion: ";
	int opcion;
	cin>>opcion;
	while(opcion<6 && opcion>0){
		switch(opcion){
			case 1:{
				cout<<"Ingrese el nombre de su ingrediente: ";
				string nombre;
				cin>>nombre;
				cout<<"Ingrese el tipo: \n"
				<<"1.Lacteo \n"
				<<"2.Vegetal \n"
				<<"3.Frutas \n"
				<<"4.Otro(Cualqier otra opcion ingresada se clasificara como otro)" 
				<<"Eliga su opcion: ";
				int op;
				string type;
				cin>>op;
				switch(op){
					case 1:{
						type ="Lacteo";
						break;
					}
					case 2:{
						type ="Vegetal";
						break;
					}
					case 3:{
						type ="Frutas";
						break;
					}
					case 4:{
						type ="Otro";
						break;
					}
					default:{
						type="Otro";
						break;
					}
				}
				cout<<"Ingrese el aporte del ingrediente al sabor: ";
				double aporte;
				cin>>aporte;
				cout<<"Ingrese duracion es decir cada cuanto se disminuye: ";
				int duracion;
				cin>>duracion;
				cout<<"Ingrese la cantidad que hay de ese ingrediente: ";
				int cantidad;
				cin>>cantidad;
				Bodega.push_back(new Ingredientes(nombre,type,aporte,duracion,cantidad));
				cout<<"INGREDIENTES ACTUALES: "<<endl;
				for(int a = 0 ; a < Bodega.size() ; a++){
					cout<<a<<".Nombre: "<<Bodega[a]->getNombre()<<endl; 
				}
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				break;
			}
			case 2:{
				int sabor=0;
				cout<<"Ingrese el nombre de su plato: ";
				string nombre_plato;
				cin>>nombre_plato;
				cout<<"Ingrese el origen o pequena descripcion de su plato: ";
				string origen;
				cin>>origen;
				cout<<"Ingrese cuanto valdra su plato: ";
				int precio;
				cin>>precio;
				plato = new Platos(nombre_plato,origen,0,0,precio,5);
				bool plate=false;
				while(plate==false){
					cout<<"INGREDIENTES ACTUALES: "<<endl;
					for(int a = 0 ; a < Bodega.size() ; a++){
						cout<<a<<".Nombre: "<<Bodega[a]->getNombre()<<endl;	 
					}
					cout<<"Ingrese que ingrediente desea meter: "<<endl;
					int opt;
					cin>>opt;
					plato->getContenidos().push_back(Bodega[opt]);
					sabor = Bodega[opt]->getAporte()+sabor;
					cout<<"Ingrese cuanto de ese ingrediente necesita"<<endl;
					int cantidad;
					cin>>cantidad;
					plato->getCantidad_Ingre().push_back(cantidad);
					cout<<"Desea ingresar otro Ingrediente?[1(si)/2(no)"<<endl;
					int yes;
					cin>>yes;
					if(yes==2){
						plate=true;
					}
				}
				plato->setCantidad_Sabor(sabor);
				Menu.push_back(plato);
				cout<<"MENU ACTUAL: "<<endl;
				for(int a = 0 ; a < Menu.size() ; a++){
						cout<<a<<".Nombre: "<<Menu[a]->getNombre()<<"_____"<<Menu[a]->getOrigen()<<"___PRECIO: "<<Menu[a]->getPrecio()<<endl; 
					}
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				break;
			}		
			case 3:{
				cout<<"HOLAAAA! QUIEN ES USTED?"<<endl;
				for(int a = 0 ; a < clientes.size() ; a++){
					cout<<a<<". Nombre Cliente: "<<clientes[a]->getNombre()<<endl;
				}
				cout<<"Ingrese numero que este a la par de su nombre o robese la cuenta de otro cliente: "<<endl;
				int option2;
				cin>>option2;
				cout<<"HOLAAAA QUE PLATO DESEA COMER HOY JOVEN: "<<clientes[option2]->getNombre();
				for(int a = 0 ; a < Menu.size() ; a++){
						cout<<a<<".Nombre: "<<Menu[a]->getNombre()<<"_____"<<Menu[a]->getOrigen()<<"___PRECIO: "<<Menu[a]->getPrecio()<<endl; 
					}
				cout<<"Ingrese su opcion: \n";
				int option;
				cin>>option;
				int cooked = Menu[option]->getCocinado();
				cooked++;
				Menu[option]->setCocinado(cooked);
				int gastado=Menu[option]->getPrecio()+clientes[option2]->getGastado();
				clientes[option2]->setGastado(gastado);
				int consumidos = clientes[option2]->getConsumidos()+1;
				clientes[option2]->setConsumidos(consumidos);
				cout<<"Ingrese que tan bueno estuvo el plato (rating 1-5)"<<endl;
				double rating;
				cin>>rating;
				clientes[option2]->setEvaluacion(rating);
				Menu[option]->setValoracion(rating);
				cout<<"GRACIAS POR SU COMPRAAAAAAA \n";
				break;
			}
			case 4:{
				cout<<"Creacion cuenta: Ingrese su nombre"<<endl;
				string nombre_client;
				cin>>nombre_client;
				clientes.push_back(new Clientes(nombre_client,0,0,0));
				cout<<"Gracias por existir! \n";
				break;
			}
			case 5:{
				cout<<"Clientes: \n";
				for(int a = 0 ; a < clientes.size() ; a++){
					cout<<a<<". Nombre Cliente: "<<clientes[a]->getNombre()<<" Platos Consumidos: "
					<<clientes[a]->getConsumidos()<<" Lempiras Gastado: "<<clientes[a]->getGastado()<<" Evaluacion: "<<clientes[a]->getEvaluacion()<<endl;
				}
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"Platos: \n";
				for(int a = 0 ; a < Menu.size() ; a++){
						cout<<a<<".Nombre: "<<Menu[a]->getNombre()<<"_____"<<Menu[a]->getOrigen()<<"___PRECIO: "<<Menu[a]->getPrecio()<<endl; 
					}
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"Ingredientes: \n";
				for(int a = 0 ; a < Bodega.size() ; a++){
					cout<<a<<".Nombre: "<<Bodega[a]->getNombre()<<endl; 
				}
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				cout<<"____________________________"<<endl;
				break;
			}
		}
	cout<<"1.Crear Ingrediente nuevo \n"
	<<"2.Crear Plato \n"
	<<"3.Cliente existente \n"
	<<"4.Cliente nuevo \n"
	<<"5.Imprimir casi todo \n"
	<<"6.Si desea salir ingrese cualquier numero \n"
	<<"Ingrese su opcion: ";
	cin>>opcion;
	}
	return 0;
}