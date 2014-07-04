#include <stdio.h>

int main() {
   
    ssize_t ret = 0;
    int array[] = { 12, 66, 8, 239, 40, -2, 550, 93, 32 };
    size_t nsize = sizeof(array)/sizeof(int);
    printf("Our array is this many elements: %i \n",nsize);
    return 0;

}
