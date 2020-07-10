#include<stdio.h>
int sum(int m){
	if(m==0)
	return 0;
	return m+sum(m-1);	
}
int main(){
	int m;
	scanf("%d",&m);
	printf("%d ",sum(m));
}
