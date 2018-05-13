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

pair<long long,long long> euclidesext(long long a, long long b){
    long long r1 = a;
	long long r2 = b;
	long long s1 = 1;
	long long s2 = 0;
	long long t1 = 0;
	long long t2 = 1;
	long long s = 0;
	long long t = 0;
	pair<long long, long long>xandy;
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
	xandy.first=s1;
	xandy.second=t1;
	return xandy;
}
long long modulo(long long a,long long b){
    if (b == 0) {
		return 0;
	}
    while(a%b<0){
        a+=b;
    }
    return a%b;
}
long long inversa(long long a, long long b){
    long long x,y,r;
    x=a;y=b;
    pair<long long,long long>xandy=euclidesext(x,y);
    r=modulo(xandy.first,b);
    return r;
}
long long expomod(long long a, long long b, long long m){
    long long exp;
    exp=1;
    long long x=a%m;
    while(b>0 and x>1){
        if(b%2!=0){
            exp=(exp*x)%m;
        }
        x=(x*x)%m;
        b=b/2;
    }
    return exp;
}
long long euler(long long p,long long q){
    long long c;
    c=(p-1)*(q-1);
    return c;
}
bool Primalidad(long long e, int iteraciones=5){
    srand(time(0));
    if (e == 1){
        return false;
    }
    for (int i = 0; i < iteraciones; i++){
        long long a = rand() % (e - 1) + 1;
        if (expomod(a, e - 1, e) != 1){
            return false;
        }
    }
    return true;
}
