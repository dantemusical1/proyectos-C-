#include<iostream>
#include<cmath>

	using namespace std;
	
	int main(){
	
	double numero1,numero2;
	float div,multiplicar,suma,resta;
cout<<"bienvenido a nuestro primer prototipo de calculadora: \n"<<endl<<"esperamos que nuestro trabajo sea de asu agrado"<<endl;


cout<<"\nDigite el valor de a"<<endl;cin>>numero1;
cout<<"\nDigite el valor de b"<<endl;cin>>numero2;


cout << "\n\nMenu de Opciones" << endl;
        cout << "1. sumar los dos numeros" << endl;
        cout << "2. presentar la resta de los 2 a-b" << endl;
        cout << "3. hacer la multiplicacion de a*b" << endl;
        cout << "4. realizar la divicion de a/b o de b/a" << endl;
        cout << "0. SALIR\n"<< endl;
    char opcion;
    cout<<"selecione por favor"<<endl;
    cin >> opcion;
	cout<<"\n";
    switch(opcion)
    {
        case '1': cout << "Usted ha seleccionado sumar a+b y su resultado es:\n"<<endl;
        suma=numero1+numero2;
        cout<<suma<<endl;
        break;
        
        case '2': cout << "La resta tiene dos posibles resultados"<<endl;
        cout<<"\n La resta de a-b";
        resta=numero1-numero2;
        cout<<resta<<endl;
        cout<<"\n Mientras que la resta de b-a nos da los siguiente"<<endl;
        resta=numero2-numero1;
        cout<<resta<<endl;
        break;
        
        case '3': cout <<"\nUsted ha seleccionado la opción de multiplicar a a*b\n";
        multiplicar=numero1*numero2;
        cout<<multiplicar<<endl;
        break;
        
        case '4': cout<<"La divicion de los numeros nos da como resultado lo siguiente \n"<<endl;
        if(numero1==0 && numero2==0){
        	cout<<"\nlo sentimos pero la divicion de ambos numero es imponsible"<<endl;
		}else{
			if(numero1!=0 && numero2==0){
				
			cout<<"\nla operacion b/a nos da lo siguiente:\n ";
			div=numero2/numero1;
			cout<<div<<endl;
				
			cout<<"la operacion a/b no es posible porque no esta definida";
			
			}else{
				if(numero2!=0 && numero1==0){
			
			cout<<"\nla divicion de a/b nos da como resultado";
			div=numero1/numero2;
			cout<<div<<endl;
			cout<<"\n pero la divicion b/a no esta definida";
			
				}else{if(numero1!=0 && numero2!=0){
					cout<<"\nlos resultados son los siguientes"<<endl;
					div=numero1/numero2;
					cout<<"\nLa divicion de a/b es:\n";
					cout<<div<<endl;
					cout<<"\nMientras que la divicion de b/a es:\n";
					div=numero2/numero1;
					cout<<div<<endl;
					}
				}
			}
		}
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }	
    
    cout<<"Gracias por provar nuestro programa en c++";
    //Pede colaborar mandando dinero a 
		return 0;
	}