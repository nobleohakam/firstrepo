#include "stdio.h"


void reverse_arr(int arr[], int num);

int main() {
    static int numbers[] = {1,2,3,4,5,6};

    int *ptr;
    ptr = numbers;
    printf("%d\n",*ptr);
    reverse_arr(ptr,6);
    for(int i =0; i < 6; i++){
        printf("%d\n",numbers[i]);
    }


    return 0;
}


void reverse_arr(int arr[], int num){
    int temp;
    for(int i = 0; i < num/2; i++){
        temp = arr[i];
        arr[i] = arr[num -i -1];
        arr[num -i -1] = temp;
    }
}
