#include<stdio.h>
int counting(int a,int n){
	if(a==n) return a;
	printf("%d\n",a);
	return counting(a+1,n);
	
}
int main(){
	int a=1;
	int n;
	scanf("%d",&n);
	counting(a,n);
	printf("%d",n);
}