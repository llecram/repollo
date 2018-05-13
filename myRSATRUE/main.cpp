#include <iostream>
#include "rsa.h"
#include "operaciones.h"
using namespace std;
int main()
{
    /*rsa first;
    cout<<first.getkeypri()<<endl<<first.getkeypub()<<endl<<first.getp()<<endl<<first.getq();
    first.cifrado("h");*/
    rsa second(27583,27583,10243,40478167);
    second.descifrado(673325503);
    return 0;
}
