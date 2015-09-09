#ifndef SYSTEM_PARAM_H
#define SYSTEM_PARAM_H

#define SCREEN_XOFFSET 10
#define SCREEN_YOFFSET 10
#define SCREEN_WIDTH 504
#define SCREEN_HEIGHT 387
enum MAP_MODE
{
    MAPMODE_2D_NORTH = 0,
    MAPMODE_2D_CAR,
    MAPMODE_3D_CAR
};

#define NUM_COLOURS          256

#define BITMAP_CACHE_BUFFER_SIZE (512 * 1024)


#endif // SYSTEM_PARAM_H