#include <stdio.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    int k;
    int i;
    int j;
    int n;
    int P[MAX]; // P[100]
    printf("Enter lenght of array: "); // n = 5
    scanf("%d",&n);
    for(i = 0;i<=n-1;i++){
        scanf("%d",&P[i]);
    }
    printf("\nThe array is: \n");
    for(i=0;i<n-1;i++) {
        printf("%d\n",P[i]);
    }
    printf("\nEnter position where to insert: ");
    scanf("%d",&k);
    k--; // the position is always one value higher than the subscript , so it is decremented by one
    for(j=n-1;j>=k;j--){
        P[j+1] = P[j] ;
     
    } //Shifiting all the elements of the aray one position down from the location of insertion 
    printf("\nEnter the value to insert: ");
    scanf("%d",&P[k]);
    printf("\nArray after insertion of element: ");
    for(i=0;i<=n;i++){
        printf("%d\n",P[i]);
    }




}

