#ifndef RSA_H
#define RSA_H
#include<iostream>
#include<string>
#include<math.h>
#include<ctime>
using namespace std;
static string alphabet = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,_-0123456789";
class rsa{
    public:
        long long p;
        long long q;
        bool flag;
        long long keypub;
        long long keypri;
        long long n;
        long long phieu;
        rsa();
        rsa(long long, long long ,long long ,long long );
        long long cifrado(string);
        string descifrado(long long);
        long long getkeypub()const;
        long long getkeypri()const;
        long long getp()const;
        long long getq()const;
};

#endif // RSA_H
