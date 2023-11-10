#include<stdio.h>
void main()
{

    int arr[50], n, i, j, temp;

    printf("Please Enter the Number of Elements you want in the array: ");

    scanf("%d", &n);

    printf("Please Enter the Value of Elements: ");

    for(i= 0; i < n; i++)

        scanf("%d", &arr[i]);


    for(i = 0; i < n-1; i++){

        for(j= 0; j < n-i-1; j++){

            if(arr[j] > arr[j + 1]){

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

    printf("Array after implementing bubble sort: ");

    for(i= 0; i < n; x++){

        printf("%d  ", arr[i]);

    }

}
