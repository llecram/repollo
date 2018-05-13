#include "generar.h"
long long generarprimo(){
    srand(time(NULL));
	long long x=rand();
	bool flag=Primalidad(x,5);
	while(!flag){
		x=rand();
		flag=Primalidad(x,5);
	}
	return x;
}
long long generare(long long n){
    long long x=rand();
    bool flag=true;
    while (flag){
        if (x>1 && x<n && euclides(n,x)==1){
            flag=false;
        }
    }
    return x;
}
