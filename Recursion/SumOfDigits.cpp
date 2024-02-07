#include<Stdio.h>

int sum(int n){
	if(n<=9) return n;
	return (n%10)+sum(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	int c=sum(n);
	printf("%d",c);
}