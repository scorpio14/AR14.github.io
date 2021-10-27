#include <iostream.h>
#include <conio.h>
void main()
{float p,b,s,tp,tb,ts,jum,disc,byr;
cout<<"Rumah makan kece"<<endl;
cout<<"Jl. Haji Selong"<<endl;
cout<<"Menyedikan Berbagai Makanan"<<endl;
cout<<"________________________________"<<endl;
cout<<"Jumlah Pulpen yang dibeli =";
cin>>p;
cout<<"Jumlah Buku yang dibeli =";
cin>>b;
cout<<"Jumlah Spidol yang dibeli =";
cin>>s;
cout<<"_________________";
tp=10000*p;
tb=30000*b;
ts=50000*s;
jum=tp+tb+ts;
disc=0.1*jum;
byr=jum-disc;
cout<<"______________________"<<endl;
cout<<"Total Pulpen ="<<tp<<endl;
cout<<"Total Buku ="<<tb<<endl;
cout<<"Total Spidol ="<<ts<<endl;
cout<<"______________________"<<endl;
cout<<"Jumlah ="<<jum<<endl;
cout<<"Discount ="<<disc<<endl;
cout<<"______________________"<<endl;
cout<<"Yang harus dibayar ="<<byr;
getch();
}