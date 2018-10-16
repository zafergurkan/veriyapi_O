#include "Yonetim.hpp"
#include "Okul.hpp"
#include "Sinif.hpp"
#include <iostream>
#include <fstream>
using namespace std;

Yonetim::Yonetim(){
    printf("Yonetim yapici sinifi calisti\n");

}
void Yonetim::DosyaOku(){
    string line[100];
    char str[255];
    Sinif **sinifs;
    sinifs = new Sinif*[4];

    ifstream reader("Okul.txt");
    
    if (reader.is_open()) {
        
       int a=0;
       
       while(reader){
           reader.getline(str,255);
           line[a]=str;
           a++;           
       }

       

       for(size_t i = 0; i < a; i++)
       {
           string sinif = line[i];
           sinifs[i]=new Sinif(sinif[0]);
           cout<<"Sinif "<<sinif[0]<<" : "<<sinif<<endl;
           
       }
      // Sinif * y = new Sinif();

   // y->Yazdir(sinifs,4);

      
       
       
       
    }

}

void Yonetim::menuOlustur(){
    Okul * k = new Okul();
    bool cikis=true;
    int secenek=0;
    while(cikis){
        cout<<"1. Sinif Degistir"<<endl;
        cout<<"2. Ogrenci Degistir"<<endl;
        cout<<"3. Cikis"<<endl;
        
        cin>>secenek;

        
        switch (secenek)
        {
            case 1:
                DosyaOku();     
                break;
             case 2:
                printf("2 secildi.\n");
                break;
            case 3:
                cikis=false;
                break;
            default:
                break;
        }

    }
}


