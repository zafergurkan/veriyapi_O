#include "Okul.hpp"

#include <iostream>
using namespace std;

Okul::Okul(int sayi){
   m_sayi=sayi;
    
}
void Okul::yazdir(){
    
    cout<<"sayi : "<<m_sayi<<endl;

}

void Okul::ekle(){
    cout<<"Sayi : ";
    cin>>m_eklenecek;
    cout<<"Girilen sayi : "<<m_eklenecek<<endl;
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
