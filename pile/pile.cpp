#include <iostream>
#include "pile.h"
using namespace std;


int main(){

    pile p2(9);

    p2.empiler(2);

    p2.empiler(3);
    p2.depiler();
    p2.print();











    return 0;
}