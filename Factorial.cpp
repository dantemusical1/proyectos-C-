#include<iostream>

using namespace std;

int main(){
	int n,i,z,j;
	
	 long double factorial;
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++){
   	 factorial = factorial * i;
   	 for(j=0;j<=n;j++){
   	cout << endl << "Factorial de " << j <<"!"<< " -> " << factorial << endl;
		}
   }
    system("pause");
  	return 0;    
}
