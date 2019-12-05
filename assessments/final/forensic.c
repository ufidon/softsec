/* This program load a forensic image into memory for fast processing. */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int load2mem(char *image)
{
    char memory[23];

    /* copy image into memory */
    strcpy(memory, image);

    return 0;
}

int main(int argc, char **argv)
{
    char image[512];
    FILE *imagefile;

    imagefile = fopen("imagefile", "r");
    fread(image, sizeof(char), 256, imagefile);
    load2mem(image);

    printf("Imagefile is loaded into memory successfully.\n");
    return 0;
}

