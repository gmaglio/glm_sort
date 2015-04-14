#include <stdio.h>
#include <glm_sort.h>

int main(int argc, char *argv[]) {
   
    int array[] = { 12, 7, -13, 2, 8, -9 };
    int count = (argc - 1);
    int i = 0;

    for(i = 1;i < argc;i++) {
       array[i] = atoi(argv[i]);
    } 

    printf("orginal list: ");
    plist(array,sizeof(array)/sizeof(int));
    
    bsort(array,sizeof(array)/sizeof(int));
    printf("bubble sorted list: ");
    plist(array,sizeof(array)/sizeof(int));
    
    return 0;

}
