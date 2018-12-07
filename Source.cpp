#include <iostream>
#include "Player.h"
#include <SDL.h>
int main(int argc, char* argv[]) {
	SDL_Window* win = NULL;
	SDL_Renderer *renderer = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);

	win = SDL_CreateWindow("We the Tormented", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	renderer = SDL_CreateRenderer(win, -1, 0);


	Player p = Player();

	while (1) {
		SDL_Event e;
		if (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				break;
			}
		}

		SDL_RenderClear(renderer);
		p.render(renderer);
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);

	SDL_Quit();

	return 0;

}