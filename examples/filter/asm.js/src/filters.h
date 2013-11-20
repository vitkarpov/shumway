
void preMultiplyAlpha(unsigned char *img, int width, int height);
void unpreMultiplyAlpha(unsigned char *img, int width, int height);

void blur(unsigned char *img, int width, int height, int distX, int distY, int quality, unsigned int borderColor);
void blurX(unsigned char *img, int width, int height, int distance, unsigned int borderColor);
void blurY(unsigned char *img, int width, int height, int distance, unsigned int borderColor);
void boxBlur(unsigned int *lineBufferOut, unsigned char *lineBufferIn, int width, int windowLength);

void dropshadow(unsigned char *img, int width, int height, int dx, int dy, unsigned int color, int alpha, int bx, int by, int strength, int quality, unsigned int flags);
void pan(unsigned char *dst, unsigned char *src, int width, int height, int dx, int dy);
void tint(unsigned char *dst, unsigned char *src, int width, int height, unsigned int color, int invertAlpha);
