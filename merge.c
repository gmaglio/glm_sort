#include <stdio.h>

void swap(int *a, int *b) {

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}

void bsort(int *array, size_t nsize) {

    int i = 0;
    ssize_t swapped = 1;
    while(swapped > 0) {
        swapped = 0;
        for( i = nsize; i > 0; i-- ) { 
            if(array[i] < array[i-1]) {
                swap(&array[i],&array[i-1]); 
                swapped++;
            } 
        } 
    }
    

}

void plist(int *array, ssize_t nsize) {

    size_t i = 0;

    for( i = 0; i < nsize; i++ ) {
        printf("%i,", array[i]);
    }
    printf("\n");

}

int main() {
   
    int array[] = { 12, 66, 8, 239, 40, -2, 550, 93, 32 };

    plist(array,9);
    bsort(array,9);
    plist(array,9);
    
    return 0;

}
