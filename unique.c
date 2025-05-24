#include<stdio.h>
int main(){
int i,j,n,count=0;
printf("Enter how many number you want to store :");
scanf("%d",&n);
int a[n];
int b[n];
int uniq;
for(i=0;i<n;i++){
    printf("enter your values :");
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++){
        uniq=0;
    for(j=0;j<n;j++){
        if(a[i]==a[j]&& i!=j){
            uniq++;
        }}
    if(uniq==0){
    printf("%d\n",a[i]);}
    }}