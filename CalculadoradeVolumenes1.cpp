#include<iostream>
#include<math.h>

using namespace std;
	int main(void){
		
		cout<<"\t\t\nCalculadora del volumen de cuerpos";
		const double PI=3.141592;
		float radio,base,altura,lado1,lado2;
		double volumen;
		char valor;
		
		cout<<"\n\tSeleccione el cuerpo del que desea conocer el promedio"<<endl;
				cout<<"\n\ta)Esfera"<<endl;
				cout<<"\n\tb)Cono"<<endl;
				cout<<"\n\tc)Cilindro"<<endl;
				cout<<"\n\td)Piramide"<<endl;
				cout<<"\n\te)cubo"<<endl;
				
				cout<<"\nCual es su opcion?:\t";cin>>valor;
		
		switch(valor){
			//Esfera
			case 'a':
				cout<<"\t\nIndiquenos el radio de las esfera"<<endl;
				cin>>radio;
				volumen=(4.0/3.0)*PI*pow(radio,3);
				cout<<"\nEl volumen de su esfera es de "<<volumen<<endl;
				break;
			//Cono;
				case 'b':
				cout<<"\t\nIndiquenos el radio de la base"<<endl;
				cin>>radio;
				cout<<"Indique la altura del cuerpo"<<endl;
				cin>>altura;
				volumen=(altura*PI*pow(radio,2))/3;
				cout<<"\t\nSu cono circular tiene un valor de "<<volumen<<endl;
				break;
			//cilindro
				case 'c':
				cout<<"\t\nIndiquenos el radio del cilindro"<<endl;
				cin>>radio;
				cout<<"Indiquenos su largo o altura";
				cin>>altura;
				volumen=altura*PI*pow(radio,2);
				cout<<"Su cilindro tiene un bolumen de: "<<volumen<<endl;
				break;
			//cubo
				case 'd':
				cout<<"Indiquenos el lado del cubo que desea calcular"<<endl;
				cin>>radio;
				volumen=pow(radio,3);
				cout<<"Su cubo tiene un volumen de "<<volumen<<endl;
				break;
				
				
				
			default: cout<<"sintaxis ERROR :(";

		}
		system("pause");
		return 0;
	}