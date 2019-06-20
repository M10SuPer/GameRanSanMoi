#pragma once 
#include "stdafx.h"
#include "global.h" 

#define SNAKE_MAXLEN    100 /* chi?u d�i t?i da c?a r?n */ 
#define SNAKE_INITLEN   2   /* chi?u d�i ban d?u c?a r?n */ 

typedef struct snake {
	COORD   coords[SNAKE_MAXLEN];   /* r?n l� m?t danh s�ch c�c t?a d? 2D */
	int     len;                    /* d? d�i hi?n th?i c?a r?n */
} SNAKE;

typedef struct fruit {
	COORD   loc;                    /* v? tr� c?a m?i */
	Uint32  color;                  /* m�u s?c */
} FRUIT;

/* v? m?t � c?a th�n r?n ho?c d?u r?n */
void snakeCell(COORD c, SDL_bool head);

/* kh?i t?o r?n */
void snakeInit(SNAKE * s);

/* v? r?n */
void snakeDraw(const SNAKE * s);

/* c?p nh?t tr?ng th�i c?a r?n */
void snakeUpdate(SNAKE * s);

/* ph�t sinh m?i */
void fruitGen(FRUIT * f, const SNAKE * s);
void fruitDraw(const FRUIT * f);