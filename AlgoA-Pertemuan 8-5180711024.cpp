#include<iostream>
using namespace std;

void data(){
cout<<"\t\t||==========================||\n";
cout<<"\t\t||Nama : Wahid Andrianto    ||\n";
cout<<"\t\t||NIM  : 5180711024         ||\n";
cout<<"\t\t||Prodi: S1 Teknik Elektro A|| \n";
cout<<"\t\t||==========================||\n\n";


}

float input(string text){
double ni;
cout<<"nilai  "<<text<<" :"; cin>>ni;
return ni;

}
void grade(float ak){

if(ak>80)
    {cout<<"Anda Dapat Nilai 'A'";}
else if(ak>60&&ak<80)
    {cout<<"Anda Dapat Nilai 'B'";}
else if(ak>40&&ak<60)
    {cout<<"Anda Dapat Nilai 'C'";}
else if(ak>20&&ak<40)
    {cout<<"Anda Dapat Nilai 'D'";}
else if(ak>0&&ak<20)
    {cout<<"Anda Dapat Nilai 'E'";}

}

    struct tikus{
int uts,uas,tgs,abs;
 float uta, uaa, tga, aba;};

main(){
data();
float ak;
tikus kl;
kl.uts=input("UTS  ");
kl.uas=input("UAS  ");
kl.tgs=input("TUGAS");
kl.abs=input("ABSEN");
cout<<endl;
kl.uta=kl.uts*20/(float)100;
kl.uaa=kl.uas*30/(float)100;
kl.tga=kl.tgs*35/(float)100;
kl.aba=kl.abs*15/(float)100;
cout<<" nilai UTS Akhir    :"<<kl.uta<<endl;
cout<<" nilai UAS Akhir    :"<<kl.uaa<<endl;
cout<<" nilai TUGAS Akhir  :"<<kl.tga<<endl;
cout<<" nilai ABSEN Akhir  :"<<kl.aba<<endl<<endl;
ak=kl.uta+kl.uaa+kl.tga+kl.aba;
cout<<" Nilai Akhir Semua:"<<ak<<endl;
grade(ak);
cout<<endl;



}
