#include<stdio.h>
int pow(int m,int n){
	if(n==0)
	return 1;
	else
	return m*pow(m,n-1);	
}
int main(){
	int n,m;
	scanf("%d %d",&m,&n);
	printf("%d ",pow(m,n));
}
