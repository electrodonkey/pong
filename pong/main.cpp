#include "SDL.h"
#include "Player.h"
#include "Helper.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[])
{
	Player player;
	Helper helper;
	player.playerName = "Test";
	player.printName();
	helper.logError(std::cout, "Program started!");

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		helper.logError(std::cout, "SDL Initialization error");
		helper.logError(std::cout, SDL_GetError());
		return 1;
	}
	SDL_Window *window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_RenderDrawLine(renderer, 0, 240, 640, 240);
	SDL_RenderDrawLine(renderer, 320, 0, 320, 480);
	//SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
	SDL_Delay(3000);

	SDL_Quit();
	return 0;
}