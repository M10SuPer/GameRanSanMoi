#include "game.h" 

#ifdef _MSC_VER         /* ch? th? li�n k?t v?i Visual C++ */ 
#   pragma comment (lib,    "sdl2main.lib") 
#   pragma comment (lib,    "sdl2.lib") 
#    pragma comment (linker, "/entry:\"mainCRTStartup\"" ) 
#    pragma comment (linker, "/subsystem:WINDOWS") 
#endif 

int main(int argc, char ** argv)
{
	GAME g;
	gameInit(&g, SDL_FALSE);
	gameLoop(&g);
	gameShutdown(&g);
	return 0;
}