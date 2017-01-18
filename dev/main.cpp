/*
 *  Load primes. Construct a dummy network. Run it.
 *
 */

#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;


class perceptron{

public:
   perceptron(const double *w, const double &bias){};

}




int main(){

   cout<<"first... get the data"<<endl;

   string primesSource="/Users/manitou6/neuralPrimes/data/primes50.txt";

   ifstream file;
   file.open(primesSource);
   if(!file){
      cout<<"Something went wrong with file: "<<endl;
      cout<<"        "<<primesSource<<endl;
   }

   int j=0;
   for(string line; getline(file,line);){
      istringstream in(line);
      for(int i=0;i<8;i++){
          int numi;
          char *num=new char[8];
          in>> num;
          numi=atoi(num);
        //  if(j==10){
             int *array=new int[9];
          //   cout<<num<<endl;    
          //   cout<<numi<<endl;    
             for(int it=0;it<9;it++){
                array[it]=static_cast<int>(num[it])-48;
               // ARRAY OF PRIME DIGITS



             }
         // }
       // ++j;
       }
   }   
   file.close();
   return 0; 
}





