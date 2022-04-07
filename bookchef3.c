#include<stdio.h>
int chefbook[1000001] = {0};
int specialF[100001] = {0};
int normalF[100001] = {0};
char post[100001][101];
int main(){
  int n,m,i;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    int x;
    scanf("%d",&x);
    chefbook[x] = 1;
  }
  for(i=0;i<m;i++){
    int f,p;
    scanf("%d %d",&f,&p);
    if(chefbook[f]==1)
    specialF[p]=1;
    else
    normalF[p]=1;
    scanf("%s",post[p]);
  }
  for(i=10000;i>0;i--){
    if(specialF[i])
    printf("%s\n",post[i]);
  }
  for(i=10000;i>0;i--){
    if(normalF[i])
    printf("%s\n",post[i]);  
  }
  
}
