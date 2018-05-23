#include <iostream>
#include "matrice.h"

using namespace std;



int main(){

    int tab[3][3]={1,2,3,4,5,6,7,8,9};      
    int tab1[3][3]={1,2,3,4,5,6,7,8,9};
    matrice a(tab),b,c;
    b=tab1;
    c=a*b;
    c.afiche();  
    return 0;
}

