#include<stdio.h>
int main(){
int i,j,n,count=0;
printf("Enter how many number you want to store :");
scanf("%d",&n);
int a[n];
int b[n];
for(i=0;i<n;i++){
    printf("enter your values :");
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
        count++;
  
      
    }}}
    printf("%d",count);
    }