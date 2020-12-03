#include <stdio.h>
int main() {
	int a,b,c,d,suma;
	int sum[20];
	for(a=0;a<6561;a++){
	c=a;
	d=0;
	suma=0;
	for(b=0;b<20;b++){sum[b]=0;}
	sum[0]=1;
	 for(b=2;b<10;b++){
		 if(c%3==0) {d=d+1;sum[d]=b;}
		 else if(c%3==1) {if(sum[d]>0) sum[d]=10*sum[d]+b; else sum[d]=10*sum[d]-b;}
		 else {d=d+1;sum[d]=-b;}
		 c=c/3;
	 }
	 for(b=0;b<9;b++){suma=suma+sum[b];}
	 if(suma==100) {
	 c=a;
	 printf("1");
	 for(b=2;b<10;b++){
		 if(c%3==0) printf("+");
		 else if(c%3==1) ;
		 else printf("-");
		 printf("%d",b);
		 c=c/3;
	 }
	 printf("\n");
	 }
	}
	return 0;
}
