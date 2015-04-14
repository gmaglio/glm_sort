#include <stdio.h>
#include <glm_sort.h>

void swap(int *a, int *b) {

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}


void merge_arr( int *array0, int *array1, size_t mid, size_t end ) {

    int i = 0;
    int j = 0;
    
    for( i = mid; i <= end; i++ ) {
        array0[i] = array1[i];
    }

}




void msort(int *array, size_t nsize) {
    
    ssize_t half = nsize/2;
    int array0[nsize];
    int array1[nsize];
    int mid = (nsize/2) + 1;
    int end = nsize;
    int i = 0;

    if(nsize > 2) {
        for( i = 0;i < mid;i++ ) {
            array0[i] = array[i];
        }
        for( i = mid; i < nsize; i++ ) {
            array1[i] = array[i];
        }
        msort(array0,nsize/2);
        msort(array1,nsize/2);
        merge_arr(array0,array1,mid,end);
    }
    else
        bsort(array,nsize);

}


void plist(int *array, ssize_t nsize) {

    size_t i = 0;

    for( i = 0; i < nsize; i++ ) {
        printf("%i,", array[i]);
    }
    printf("\n");

}
