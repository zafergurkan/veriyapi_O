#ifndef Sinif_HPP
#define Sinif_HPP
class Sinif{
    private:
    int sinifKodu;

public:
    Sinif();
    Sinif(int snfKodu){
        sinifKodu=snfKodu;
    }
    
        
        /*friend ostream& operator<<(ostream& ekran, Sinif &sag){//operatör tanımlama bir çok örnekte kullanılacak.
        ekran<<sag.sinifKodu;
        return ekran;
    }*/
    void Yazdir(Sinif **sinifs,int sinifKodu);
    



};
#endif