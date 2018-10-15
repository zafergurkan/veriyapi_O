#include "Okul.hpp"
#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    bool cikis=true;
    int secenek=0;
    while(cikis){
        cout<<"1. Sinif Degistir"<<endl;
        cout<<"2. Ogrenci Degistir"<<endl;
        cout<<"3. Cikis"<<endl;
        Okul *ok = new Okul(5);
        cout<<ok->sayi<<endl;
        //printf();
        cin>>secenek;

        
        switch (secenek)
        {
            case 1:
                /* code */
                break;
             case 2:
                /* code */
                break;
            case 3:
                cikis=false;
                break;
            default:
                break;
        }

    }
    return 0;
}
