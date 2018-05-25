#ifndef RSA_H
#define RSA_H
#include<iostream>
#include<string>
#include<math.h>
#include<ctime>
#include<vector>
using namespace std;
static string alphabet = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,_-0123456789";
class rsa{
    public:
        long long e;
        long long p;
        long long q;
        bool flag;
        long long keypub;
        long long keypri;
        long long n;
        long long phieu;
        rsa();
        rsa(long long, long long );
        void cifrado(string);
        void descifrado(vector<int>);
        long long getkeypub()const;
        long long getkeypri()const;
        long long getn()const;
        long long getq()const;
};
#endif // RSA_H

