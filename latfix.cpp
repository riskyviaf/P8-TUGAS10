#include <iostream>
using namespace::std;

double inputan(string text){
double angka;
cout<<"input niali "<<text<<" : ";cin>>angka;
return angka;
}
void huruf(double total){
char grade;
if(total>=81) grade='A';
else if(total>=61) grade='B';
else if(total>=41) grade='C';
else if(total>=21) grade='D';
else grade='E';
cout<<"Nilai Huruf "<<grade<<endl;
}
struct score{
float uts,uas;
double tugas,absen,total;
};
main(){
score nilai[10];
for(int i=0; i<=10; i++){
nilai[i].uts=inputan("UTS");
nilai[i].uas=inputan("UAS");
nilai[i].tugas=inputan("Tugas");
nilai[i].absen=inputan("Absen");
nilai[i].total=nilai[i].uts*0.2 + nilai[i].uas*0.3 + nilai[i].tugas*0.35 + nilai[i].absen*0.15 ;
cout<<"Nilai :"<<nilai[i].total<<endl;
huruf(nilai[i].total);
}
}


