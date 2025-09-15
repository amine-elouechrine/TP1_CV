#include <stdlib.h>

#include "Utils/types.h"
#include "Utils/Util.h"

#include "TP1/TP1_funcs.h"

void init_image(ppm_file* image,int rows,int cols,int magic_number){
  image->pixmap=malloc(sizeof(pixel)*rows*cols);
  image->cols=cols;
  image->rows = rows;
  image->magic_number = magic_number;
  image->maxval = 0;
}

int main(int argc, char* argv[])
    {
    ppm_file image;

    /* Arguments */
    if ( argc != 5 ){
      printf("\nUsage : %s file_in file_R file_G file_B \n\n", argv[0]);
      exit(0);
    }

    /* Opening input file */
    image = read_ppm(argv[1]);

    
     //Image definition
    ppm_file image_r;
    ppm_file image_g;
    ppm_file image_b;

    init_image(&image_b,image.rows,image.cols,image.magic_number);
    init_image(&image_r,image.rows,image.cols,image.magic_number);
    init_image(&image_g,image.rows,image.cols,image.magic_number);


    split_channels(image, &image_r, &image_g, &image_b);

    /* Write output files */
    write_ppm(image_r, argv[2]);
    write_ppm(image_g, argv[3]);
    write_ppm(image_b, argv[4]);

    return 0;
}
