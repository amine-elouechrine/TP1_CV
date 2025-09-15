#include "TP1_funcs.h"
#include "../Utils/Util.h"


// TODO: split the image into three channels
void split_channels(ppm_file image,
                    ppm_file *image_r, ppm_file *image_g, ppm_file *image_b) {
    for (size_t i = 0; i < image.rows; i++)
    {
        /* code */
        for (size_t j = 0; j < image.cols; j++)
        { //maxvalueeeeeeeeeeeeeeeeeeeeeee
            /* code */
            pixel pR;
            pR.red= image.pixmap[i * image.cols + j].red;
            pR.blue=0;
            pR.green =0;
            image_r->pixmap[i * image.cols + j]=pR;

            pixel pG;
            pG.green= image.pixmap[i * image.cols + j].green;
            pG.blue=0;
            pG.red =0;
            image_g->pixmap[i * image.cols + j]=pG;


            pixel pB;
            pB.blue= image.pixmap[i * image.cols + j].blue;
            pB.red=0;
            pB.green =0;
            image_b->pixmap[i * image.cols + j]=pB;
        }
        
    }
    
}

// TODO: convert rgb to grayscale
void rgb_to_gray(ppm_file image, pgm_file *image_gray, float brightness){
    pm_error("PLEASE IMPLEMENT");
}
