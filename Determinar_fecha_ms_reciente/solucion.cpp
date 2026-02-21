#include <iostream>
using namespace std;
//Función principal
main(){
	int d1,d2,d3,m1,m2,m3,a1,a2,a3,num1,num2,max;
	cout<<"Fecha 1:"<<endl;
	cout<<"d1="; cin>>d1;
	cout<<"m1="; cin>>m1;
	cout<<"a1="; cin>>a1;
	cout<<"Fecha 2:"<<endl;
	cout<<"d2="; cin>>d2;
	cout<<"m2="; cin>>m2;
	cout<<"a2="; cin>>a2;
	cout<<"Fecha 3:"<<endl;
	cout<<"d3="; cin>>d3;
	cout<<"m3="; cin>>m3;
	cout<<"a3="; cin>>a3;
	//comparando las fechas
	num1=a1*10000+m1*100+d1;
	num2=a2*10000+m2*100+d2;
	if(num1>num2){
		max=num1;
	}
	else{
		max=num2;
	}
	num2=a3*10000+m3*100+d3;
	if(num2>max){
		max=num2;
	}
	//Fecha mas reciente
	a1=max/10000;
	m1=(max%10000)/100;
	d1=(max%10000)%100;
	cout<<"Fecha mas reciente:"<<d1<<"/"<<m1<<"/"<<a1<<endl;
}
