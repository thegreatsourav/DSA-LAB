#include<stdio.h>

int linearsearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){

        if (arr[i]==element){
        return i;
    }
    }
        return -1;


}

int main(){
    int arr[] = {1,3,654,5464,3,4,546,4566,43634};
    int size = sizeof(arr)/sizeof(int);
    int element = 654;
    int searchindex = linearsearch(arr, size, element);

    printf("The value of %d is %d", element, searchindex);
    return 0; 
}