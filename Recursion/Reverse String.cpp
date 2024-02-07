#include<stdio.h>
#include<string.h>
void reverse(char str[],int n){
	if(n<0) return;
	printf("%c",str[n]);
	return reverse( str,n-1);
}

int main(){
	char str[200];
	scanf("%s",&str);
	int n=strlen(str);
	reverse(str,n);
//	for(int i=n;i>=0;i--){
//		printf("%c",str[i]);
//	}
	
//	printf("%d",n);
}