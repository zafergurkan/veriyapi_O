#include "Okul.hpp"
#include <fstream>
#include <iostream>
using namespace std;

Okul::Okul(){
   cout<<"yapici fonksiyon calisti."<<endl;
    
}


void Okul::sinifYerlestir(){
    string line;
    ifstream reader("Okul.txt");
    
    if (reader.is_open()) {
        
       
       while(reader.good()){
           getline(reader,line);
           cout<<line<<endl;
           /* code */
           
       }
       
    }
    
}
