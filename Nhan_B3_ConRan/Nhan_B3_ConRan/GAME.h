#pragma once 
#include "stdafx.h" 
#include "GLOBAL.h" 
#include "GAME.h" 
#include "Entities.h"

#define GAME_MAX_FPS        12  /* gi?i h?n t?c d? khung d?n 12fps */ 
#define GAME_FRAME_TIME     (1000 / GAME_MAX_FPS) 

typedef struct game         /* c?u tr�c tr� choi bao g?m */
{
	FRUIT f;                /* m?i */
	SNAKE s;                /* r?n */
	DIRECTION dir;          /* hu?ng di chuy?n c?a r? n*/
	SDL_bool running;       /* c? tr?ng th�i ho?t d?ng */
} GAME;

/* kh?i t?o tr� choi */
void gameInit(GAME * g, SDL_bool fullscreen);

/* k?t th�c tr� choi */
void gameShutdown(GAME * g);

/* v�ng l?p tr� choi */
void gameLoop(GAME * g);

/* c?p nh?t tr?ng th�i tr� choi */
void gameUpdate(GAME * g);

/* d?ng h�nh cho 1 frame */
void gameDraw(GAME * g);

/* x? l� input */
void gameInput(GAME * g);
