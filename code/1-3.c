#include <stdio.h>

void print_reverse(int *arr, int size){
    for(int i = 0 ; i < size - 1 ; i++)
        arr++;
    
    for(int i = 0 ; i < size ; i++){
        printf("%d",*arr);
        arr--;
        
        if(i == size-1)
            break;

        printf(" ");
    }
}

int main(){
    int nums[] = {1,2,3,4,5};

    print_reverse(nums, 5);
    
    printf("\n");
    return 0;

}
