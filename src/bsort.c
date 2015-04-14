#include <stdio.h>
#include <glm_sort.h>

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
