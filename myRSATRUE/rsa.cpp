#include "rsa.h"
#include "operaciones.h"
#include "generar.h"
rsa::rsa(){
    srand(time(0));
	flag = true;
	p = generarprimo();
	q = generarprimo();
	n=p*q;
	phieu=euler(p,q);
	long long e=generare(phieu);
	long long d=inversa(e,phieu);
	keypub=e;
	keypri=d;
}
rsa::rsa(long long p, long long q,long long e,long long d){
    n=p*q;
	phieu=euler(p,q);
	keypub=e;
	keypri=d;
}

long long rsa::cifrado(string mensaje){
    long long aux;
	for (int i = 0; i < mensaje.size(); i++) {
		for (int j = 0; j < alphabet.size(); j++) {
			if (mensaje[i] == alphabet[j]) {
				long long aux=expomod(j,keypub,phieu);
				cout << endl<<aux << endl;
			}
		}

	}
	return aux;
}

string rsa::descifrado(long long a){
    string aux;
    long long c=expomod(a,keypri,phieu);
    aux=alphabet[c];
	cout <<endl<< aux << endl;
	return aux;
}
long long rsa::getp()const{
    return p;
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
