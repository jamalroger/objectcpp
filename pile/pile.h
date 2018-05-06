#include <iostream>

using namespace std;
typedef struct  node{
      int data;
      struct node *next;

}node;



class pile {

   node  *head;

   public :
    pile(int data=0){

       node *l=new node;
       l->data=data;

       l->next=head;
       head=l;
    
    }
void empiler(int data){

       node *link=new node;
       link->data=data;

       link->next=head;
       head=link;
        
    }
   void depiler(){

    head=head->next;

   } 
   void print(){
       node *laux=head;
    while(laux->next!=NULL) {
        cout<<"data is :v"<<laux->data<<"\n";
          laux=laux->next;
    }

   }
};