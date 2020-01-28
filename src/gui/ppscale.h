#ifdef __cplusplus
extern "C"{
#endif 
int pp_getscale /* calculate integer scales for pixel-perfect magnification */
(	int    win,  int hin,  /* input dimensions               */
	double par,            /* input pixel aspect ratio       */
	int    wout, int hout, /* output  dimensions             */
	double asp,            /* importance of aspect-ratio     */
	int    *sx,  int *sy   /* horisontal and vertical scales */
);  /* returns -1 on error and 0 on success */

int pp_scale
(	char* simg, int spitch, /* source image and pitch           */
	int   *rx,  int *ry,    /* location and                     */
	int   *rw,  int *rh,    /* size of the rectangle to process */
	char* dimg, int dpitch, /* destination image and pitch      */
	int   bypp,             /* bytes per pixel                  */
	int   sx,   int sy      /* horisontal and vertical scales   */
);
#ifdef __cplusplus
}
#endif
