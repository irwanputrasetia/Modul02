#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int LRumah=42;
	cout<<"Luas Rumah			: "<<LRumah<<" m2"<<endl;
	double LBP=1.87596;
	cout<<"Luas 1 box parket	: "<<LBP<<" m2"<<endl;
	double JBP=LRumah/LBP;
	cout<<"Jumlah box parket	: "<<JBP<<endl;
	double BP=JBP*500;
	cout<<"Biaya Parket (Rp)	: "<<BP<<endl;
	int Bpas=LRumah*20;
	cout<<"Biaya Pasang (Rp)	: "<<Bpas<<endl;
	double TotB=BP+Bpas;
	cout<<"Total Biaya  (Rp)	: "<<TotB<<endl;
	cout<<"-------------------------------------";
	getch();
	return 0;
}
