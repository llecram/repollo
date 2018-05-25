#include "rsa.h"
#include "generar.h"
rsa::rsa(){
    //srand(time(0));
	p = generarprimo();
	q = generarprimo();
	n=p*q;
	phieu=euler(p,q);
	e=generare(phieu);
	long long d=euclidesext(e,phieu);
	keypri=modulo(d,phieu);
	keypub=e;
}
rsa::rsa(long long n1, long long e1){
    n=n1;
    e=e1;
}

void rsa::cifrado(string mensaje){
    long long aux;
	for (int i = 0; i < mensaje.size(); i++) {
		for (int j = 0; j < alphabet.size(); j++) {
			if (mensaje[i] == alphabet[j]) {
				long long aux=expomod(j,e,n);
				cout <<aux << " ";
			}
		}

	}
}

void rsa::descifrado(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<alphabet[expomod(a[i],keypri,n)];
    }
}
long long rsa::getn()const{
    return n;
}

long long rsa::getq()const{
    return q;
}
long long rsa::getkeypub()const{
    return keypub;
}

long long rsa::getkeypri()const{
    return keypri;
}
