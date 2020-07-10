#include<stdio.h>
float sum(float m){
	if(m==0)
	return 0;
	return m+sum(m-1);	
}
float fact(float m){
	if(m==0)
	return 1;
	return m*fact(m-1);	
}
float pow(float m,float n){
	if(n==0)
	return 1;
	else
	return m*pow(m,n-1);	
}
float series(float m,float n){
	if(n==0)
	return 1;
	return pow(m,n)/fact(n)+series(m,n-1);
}
int main(){
	float m,n;
	scanf("%d %d",&m,&n);
	printf("%d",series(m,n));
}
