#include "Okul.hpp"

#include <iostream>
using namespace std;

Okul::Okul(int sayi){
    this->sayi=sayi;
    
}
/*void sinifYerlestir(){
    string line;
    ifstream reader("Okul.txt");
    
    if (reader.is_open()) {
        
       
       while(reader.good()){
           getline(reader,line);
           cout<<line<<endl;
           /* code 
       }
       
    }
    
}*/

void Okul::yerlestir(){
    
    cout<<"Oldu :D";

}
