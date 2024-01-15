#include <iostream>

using namespace std;

 main() {
	float r,m,p,s,k,n,b,a;
	cout<<"please enter a number for r :";
	cin>>r;
	if(r<6000000 ){
 		m=r*(0);
 		cout<<"m :"<<m;
	 }
	 else if(r>=6000000 && r<8000000 ){
		p=r*(0.95);
		cout<<"p :"<<p;
 }
 else if(r>=8000000 && r<10000000){
		s=r*(0.9);
		cout<<"s :"<<s;
	}
	else if(r>=10000000 && r<14000000 ){
		k=r*(0.85);
		cout<<"k :"<<k;
	}
		else if(r>=14000000 && r<18000000){
		n=r*(0.8);
		cout<<"n :"<<n;
	}
		else if(r>=18000000 && r<25000000){
		b=r*(0.75);
		cout<<"b :"<<b;
	}
	else if(r>25000000){
		a=r*(0.65);
		cout<<"a :"<<a;
	}
}
