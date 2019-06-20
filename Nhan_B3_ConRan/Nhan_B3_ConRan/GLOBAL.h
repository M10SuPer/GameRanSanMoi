#pragma once 
#include <SDL.h> 
#include <stdlib.h> 
#include <time.h> 

#define BOARD_CELL           16  /* k�ch thu?c c?a 1 �, n�n l� luy th?a c?a 2 */ 
#define BOARD_HORZ           48  /* s? lu?ng � theo chi?u ngang */ 
#define BOARD_VERT           30  /* s? lu?ng � theo chi?u d?c */ 

/* 18 m�u s?c c� th? s? d?ng du?c trong tr� choi */
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

/* t?ng s? m�u c� th? s? d?ng, bao g?m 16 m�u EGA chu?n v� 2 m�u d�nh cho r?n */
#define CR_MAX_COLORS   18 

/* c�c hu?ng di chuy?n c� th? */
typedef enum direction { DOWN, LEFT, RIGHT, UP } DIRECTION;

/* c?u tr�c luu tr? t?a d? 2D */
typedef struct coord {
	int x, y;
} COORD;

/* c�c bi?n ngo?i bi�n */
extern SDL_Window * g_window;       /* SDL window */
extern SDL_Renderer * g_renderer;   /* SDL renderer */

									/* b?ng gi� tr? c�c m�u s?c c� th? s? d?ng du?c */
extern unsigned long GAME_PALETTE[CR_MAX_COLORS];

/* thi?t l?p gi� tr? m�u hi?n th?i, s? d?ng b?ng m�u d� cho */
void setColor(int c);

/* v? m?t h�nh ch? nh?t */
void rectDraw(int x, int y, int w, int h, unsigned long color);