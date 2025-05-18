#include<stdio.h>
int main (){
    int n,sum=0;
    printf("Enter how many number you want to add :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
    // printf("Enter the values ");
    // scanf("%d",&arr[i]);
   arr[i]=i;
   sum+=arr[i];
}

    //printf("the value store into the array reverse are :");
    printf("numbers in array :");
    for(int i=0;i<=n;i++){
        printf(" %d",arr[i]);
    }

    // }
    
// for(int i=n-1;i>=0;i--){
//     sum+=arr[i];
// }
printf("\nsum=%d",sum);
return 0;
    }