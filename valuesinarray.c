#include<stdio.h>
int main (){
    int n;
    printf("Enter how many number you want to store :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Enter the values ");
    scanf("%d",&arr[i]);
}
            printf("the value store into the array reverse are :");
    for(int i=n-1;i>=0;i--){
        printf("%d,",arr[i]);
    }
    }