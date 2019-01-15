#include "background.h"
#define MAX_FG (MAX_SPRITE - MAX_BG)
#define MAX_CLIP_COUNT	8
#define ANIM_FPS	12

typedef struct
{
	Sprite 		 sprite;
	SDL_Rect 	 srcRect;
	SDL_Rect	 dstRect;
	byte_t 		 clipCount, clipMax;
	SDL_Rect	 srcClip[MAX_CLIP_COUNT];
}Foreground;

Foreground foreground_Load(const char* pszFilePath);
void foreground_copyToRender(Foreground* fg);
//TODO : il y a une vitesse d'animation du sprite décorrelé de sa vitesse de déplacement.
Foreground foreground_nextClip(Foreground fg);
