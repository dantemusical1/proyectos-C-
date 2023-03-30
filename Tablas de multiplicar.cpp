#include <iostream>

	using namespace std;
int main(){
	
	cout<<"\tTabla de multiplicar"<<endl;
int n,resultado;
cout<<"\n\n Que tabla de multiplicar quiere usted que se le muestre\n"<<endl;
cin>>n;
		cout<<"\tLa tabla de multiplicar de "<<n<<" es la siguiente:\n";

for(int i=1;i<=10;i++){
	resultado=i*n;
	cout<<"\t\t"<<i<<"x"<<n<<"="<<resultado<<endl;
}
	return 0;
}
