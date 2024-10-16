#include <bits/stdc++.h>
using namespace std;

struct coordenadas{
	float x,y;
};

void presentacion(){
	cout<<"Archivo para calcular la distancia entre dos coordenadas."<<endl;
	cout<<"Autor: Juan Rafael Gonzalez Diaz (RAF28)."<<endl;
	cout<<"Fecha de creacion: 14/10/2024."<<endl;
	cout<<"Ultima modificacion: 14/10/2024."<<endl;
	cout<<"_________________________________________________________"<<endl;
}

void despedida(){
	cout<<"_________________________________________________________"<<endl;
	cout<<"Gracias por usar el codigo, suerte en la vida. :D"<<endl;
	cout<<"GitHub: RAF28gitH"<<endl;
	cout<<"Codeforces: RAF28"<<endl;
	cout<<"OmegaUp: -TyphlosionParaPresidente-"<<endl;
}

float distancia(coordenadas _c1,coordenadas _c2){
	return sqrt(pow((_c2.x-_c1.x),2)+pow((_c2.y-_c1.y),2));
}

int main(){
	presentacion();
	coordenadas c1,c2;
	if(!(cin >> c1.x >> c1.y >> c2.x >> c2.y)){
		cout<<"Una de las coordenadas ingresadas tiene algún error."<<endl;
		despedida();
		return 0;
	}
	cout<<fixed<<setprecision(6)<<"Distancia: "<<distancia(c1,c2)<<endl;
	despedida();
	return 0;
}
