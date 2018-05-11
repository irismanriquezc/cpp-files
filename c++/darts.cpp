#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int cases;
	int darts;
	int x,y,z;
	int points=0;

	cin >> cases;
	cin >> darts;
		int tpoints[cases];
	
	for( int p=0; p <cases; p++){
		
		for(int i=0; i<darts;i++){
		
			cin >> x >> y;
			if(x <0)
				x*=-1;
			if(y<0)
				x*=-1;
			z= pow(x,2) + pow(y,2);
		
			if(z <=20*20){
				points +=10;}
			else if(z<=40*40)
				points+=9;
			else if(z<=60*60)
				points+=8;
			else if(z<=80*80)
				points+=7;
			else if(z<=100*100)
				points+=6;
			else if(z<=120*120)
				points+=5;
			else if(z<=140*140)
				points+=4;
			else if(z<=160*160)
				points+=3;
			else if(z<=180*180)
				points+=2;
			else if(z<=200*200)
				points+=1;
			
			}
			tpoints[p]=points;
			points=0;
			}
		for( int i=0; i <cases; i++){
			cout << tpoints[i]<< endl;}
}
