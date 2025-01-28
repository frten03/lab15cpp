#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a,int *b,int *c,int *d){
	int key = rand()%4 ;
	int keepa = *a ;
	int keepb = *b;
	int keepc = *c;
	int keepd = *d;
	if(key==0){
		*a = keepb;
		*b = keepc;
		*c = keepd;
		*d = keepa;
	}
	if(key==1){
		*a = keepc ;
		*b = keepd ;
		*c = keepa ;
		*d = keepb ;
	}
	if(key==2){
		*a = keepd ;
		*b = keepa ;
		*c = keepb ;
		*d = keepc ;
	}
	if(key==3){
		*a = keepc ;
		*b = keepa ;
		*c = keepd ;
		*d = keepb ;
	}
}