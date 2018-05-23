#include  <iostream>
#include   "cpp.h"
using namespace std;
void menu(){
cout<<"enter i pour insertion \n"
    <<"enter b pour insert back \n"
    <<"enter d pour delete \n"
    <<"enter p pour print \n";

}

int main(){
    char uCh='u';
    int data;

linkedList liste;
cout<<"welcome to linkedlist programing c++ \n";
while(uCh!='o'){
    menu();
  cin>>uCh;

 switch(uCh){

  case 'i' :  
     cout<<"->enter a value \n";
     cin>>data;
     liste.insert(data);
     break;
 case 'b' :  
     cout<<"->enter a value \n";
     cin>>data;
     liste.insertBack(data);
     break;
case 'd' :  
     cout<<"->enter a value \n";
     cin>>data;
     liste.Delete(data);
     break;

case 'p':  
    liste.print(liste.Head());

    

 }

}




// liste.insertBack(2);
// liste.insertBack(1);
// liste.insertBack(3);
// liste.insert(1);
// liste.insert(6);
// liste.insert(7);
// liste.insert(0);
// liste.insertBack(5);
// liste.insertBack(5);
// liste.Delete(3);
// liste.print(liste.Head());



    return 0;
}