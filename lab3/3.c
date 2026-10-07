#include<stdio.h>



int main(){

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n],count=0;

    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

    printf("\nthe number of dublicate element :");
    for (int i =0;i<n;i++)
        {
            for(int j=n-1 ; j>i;j--)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            
        }
    printf("%i",count);
    
}