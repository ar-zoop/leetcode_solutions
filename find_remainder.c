#include <stdio.h>
int main(){
	int a,b,t,i,rem;
	scanf("%d",&t);
	for (i=0;i<t;i++){
		scanf("%d%d",&a,&b);
		rem=a%b;
		printf("%d\n",rem);
	}
	return 0;
}
