#include <stdio.h>

int readfile(char *filename, ) {
    FILE *fp;

    if ( (fp = fopen(filename,"+r)) == NULL ) {
        perror("Error: readfile(): file not opened");
        return -1;
    }
    fgets

