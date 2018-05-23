#include <iostream>

using namespace std;
typedef struct node {
 int data;
 int number;
struct node *next;

}node;

class linkedList  {

    private :
         node *head;
         int number=0;
         
    public :
    linkedList(){
    cout<<"declaration of linkedlist empty"<<endl;
    head=NULL;
    }
  
     linkedList(int data){
      node *link= new node;
      link->data=data;
       link->number=++number;
       link->next=head;
       head=link;

     }
     ~linkedList(){

       delete head;
     }
     void insert(int data ){
       
      if (isExist(data)) return ;
       node *link= new node;
      link->data=data;

       link->next=head;
       head=link;
       link->number=++number;
     } 

     void insertBack(int data){
       
       if ( isExist(data) || head==NULL){
       insert(data);
         return ;
       }
     
      node *link= new node;
      link->data=data;
      node *laux=head;
      link->data=data;
      while(laux->next) laux=laux->next;
      laux->next=link;
      link->next-NULL;
    link->number=++number;
     }
  int isExist(int data){
        node *laux=head;

      while(laux!=NULL && laux->data!=data) laux=laux->next;

      return laux!= NULL;
     }
     void Delete(int data){
      node *laux=head;
      if (isExist(data)) while(laux->next->data!=data) laux=laux->next;

      laux->next=laux->next->next;

     }
     node *Head(){

       return head;
     }
     void print(node *laux){
       
      if (laux==NULL) return ;
      cout<<laux->number <<"/ data is "<<laux->data<<endl;
       print(laux->next);
     }



};


