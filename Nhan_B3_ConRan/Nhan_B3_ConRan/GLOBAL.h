#pragma once 
#include <SDL.h> 
#include <stdlib.h> 
#include <time.h> 

#define BOARD_CELL           16  /* kích thu?c c?a 1 ô, nên là luy th?a c?a 2 */ 
#define BOARD_HORZ           48  /* s? lu?ng ô theo chi?u ngang */ 
#define BOARD_VERT           30  /* s? lu?ng ô theo chi?u d?c */ 

/* 18 màu s?c có th? s? d?ng du?c trong trò choi */
#define CR_BLACK         0 
#define CR_BLUE          1 
#define CR_GREEN        2 
#define CR_CYAN         3 
#define CR_RED          4 
#define CR_MAGENTA      5 
#define CR_BROWN        6 
#define CR_GRAY         7 
#define CR_DKGRAY       8 
#define CR_BRBLUE       9 
#define CR_BRGREEN      10 
#define CR_BRCYAN       11 
#define CR_BRRED        12 
#define CR_BRMAGENTA    13 
#define CR_YELLOW       14 
#define CR_WHITE        15 
#define CR_SNAKE_HEAD   16 
#define CR_SNAKE_BODY   17 

/* t?ng s? màu có th? s? d?ng, bao g?m 16 màu EGA chu?n và 2 màu dành cho r?n */
#define CR_MAX_COLORS   18 

/* các hu?ng di chuy?n có th? */
typedef enum direction { DOWN, LEFT, RIGHT, UP } DIRECTION;

/* c?u trúc luu tr? t?a d? 2D */
typedef struct coord {
	int x, y;
} COORD;

/* các bi?n ngo?i biên */
extern SDL_Window * g_window;       /* SDL window */
extern SDL_Renderer * g_renderer;   /* SDL renderer */

									/* b?ng giá tr? các màu s?c có th? s? d?ng du?c */
extern unsigned long GAME_PALETTE[CR_MAX_COLORS];

/* thi?t l?p giá tr? màu hi?n th?i, s? d?ng b?ng màu dã cho */
void setColor(int c);

/* v? m?t hình ch? nh?t */
void rectDraw(int x, int y, int w, int h, unsigned long color);