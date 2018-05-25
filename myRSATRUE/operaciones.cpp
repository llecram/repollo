#include "operaciones.h"
long long euclides(long long a, long long b){
    long long r1 = a;
	long long r2 = b;
	while (r2 > 0) {
		long long q = r1 / r2;
		long long r = r1 - q * r2;
		r1 = r2;
		r2 = r;
	}
	return r1;
}

long long euclidesext(long long a, long long b){
    long long r1 = a;
	long long r2 = b;
	long long s1 = 1;
	long long s2 = 0;
	long long t1 = 0;
	long long t2 = 1;
	long long s = 0;
	long long t = 0;
	while (r2 > 0) {
		int q = r1 / r2;
		int r = r1 - q * r2;
		r1 = r2;
		r2 = r;
		s = s1 - q * s2;
		s1 = s2;
		s2 = s;
		t = t1 - q * t2;
		t1 = t2;
		t2 = t;
	}
	return s1;
}
long long modulo(long long a, long long b){
    if (b == 0) {
		return 0;
	}
    while(a%b<0){
        a+=b;
    }
    return a%b;
}
long long expomod(long long a, long long b, long long m){
    long long exp=1;
    long long x=modulo(a,m);
    while(b>0){
        if(b%2!=0){
            exp=modulo((exp*x),m);
        }
        x=modulo((x*x),m);
        b=b/2;
    }
    return exp;
}
long long euler(long long p,long long q){
    long long c;
    c=(p-1)*(q-1);
    return c;
}
bool fermat1(long long n, int t){
    if(n==3)
        return true;
    for(long long i=1;i<t;i++){
        //srand(time(0));
        long long a=rand()%n-2;
        while(a<2){
            a=rand()%n-2;
        }
        long long r=expomod(a,n-1,n);
        if(r!=1){
            return false;
        }
    }
    return true;
}
