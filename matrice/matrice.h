
#include <iostream>
using namespace std;
class matrice {

private :
      int  mat[3][3];
public :
       matrice(){
         for(int i=0;i<3;i++) 
            for(int j=0;j<3;j++) 
                mat[i][j]=0;

       } 
       matrice(int tab[3][3]){

     for(int i=0;i<3;i++) 
        for(int j=0;j<3;j++)
              mat[i][j]=tab[i][j];
     }
     matrice operator *(const matrice &ma){
             matrice res;
             int sum=0;

   for(int i=0;i<3;i++) {
     
    
      for(int j=0;j<3;j++){

      sum+=mat[i][j]*ma.mat[j][0];

      } 
      res.mat[i][0]=sum;
       sum=0;
    
      for(int j=0;j<3;j++){
        sum+=mat[i][j]*ma.mat[j][1];
      } 
        res.mat[i][1]=sum;
         sum=0;
      for(int j=0;j<3;j++){
        sum+=mat[i][j]*ma.mat[j][2];
           } 
        res.mat[i][2]=sum;
        sum=0;
       
   }
       
       return res;
     }
  void afiche(){

 for(int i=0;i<3;i++) {

for(int j=0;j<3;j++){
                 cout<<mat[i][j]<<" ";
        }
  cout<<"\n";
   }
        
               

  }

  matrice operator +(const matrice &ma){
   matrice res;

for(int i=0;i<3;i++) 
        for(int j=0;j<3;j++)
            res.mat[i][j]=this->mat[i][j]+ma.mat[i][j];

     return res;       
  }


};