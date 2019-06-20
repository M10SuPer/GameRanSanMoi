#pragma once 
#include "stdafx.h"
#include "global.h" 

#define SNAKE_MAXLEN    100 /* chi?u dài t?i da c?a r?n */ 
#define SNAKE_INITLEN   2   /* chi?u dài ban d?u c?a r?n */ 

typedef struct snake {
	COORD   coords[SNAKE_MAXLEN];   /* r?n là m?t danh sách các t?a d? 2D */
	int     len;                    /* d? dài hi?n th?i c?a r?n */
} SNAKE;

typedef struct fruit {
	COORD   loc;                    /* v? trí c?a m?i */
	Uint32  color;                  /* màu s?c */
} FRUIT;

/* v? m?t ô c?a thân r?n ho?c d?u r?n */
void snakeCell(COORD c, SDL_bool head);

/* kh?i t?o r?n */
void snakeInit(SNAKE * s);

/* v? r?n */
void snakeDraw(const SNAKE * s);

/* c?p nh?t tr?ng thái c?a r?n */
void snakeUpdate(SNAKE * s);

/* phát sinh m?i */
void fruitGen(FRUIT * f, const SNAKE * s);
void fruitDraw(const FRUIT * f);