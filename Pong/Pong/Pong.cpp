// Pong.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <SDL.h>
#include <SDL_ttf.h>

using namespace std;

#define WIDTH 720
#define HEIGHT 720
#define FONT_SIZE 32
SDL_Renderer* renderer;
SDL_Window* window;
TTF_Font* font;
SDL_Color color;
bool running;

int frameCount, timerFPS, lastFrame, fps;
void update(){}
void input() {
	SDL_Event e;
	const Uint8* keystates = SDL_GetKeyboardState(NULL);
	while (SDL_PollEvent(&e)) if (e.type == SDL_QUIT) running = false;
	if (keystates[SDL_SCANCODE_ESCAPE]) running = false;
	if (keystates[SDL_SCANCODE_UP]);
	if (keystates[SDL_SCANCODE_DOWN]);
}
void render() {
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255);
	SDL_RenderClear(renderer);

	frameCount++;
	timerFPS = SDL_GetTicks() - lastFrame;
	if (timerFPS < 1000 / 60) {
		SDL_Delay((1000 / 60) - timerFPS);
	}
}
int main()
{
	if (SDL_Init(SDL_INIT_EVERYTHING < 0)) cout << "Fail at SDL_Init" << endl;
	if (SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &window, &renderer) < 0) cout << "Fail at SDL_CreateWindowAndRenderer" << endl;
	TTF_Init();
	font = TTF_OpenFont("Peepo.ttf", FONT_SIZE);
	running = 1;
	static int lastTime = 0;
	while (running)
	{
		lastFrame = SDL_GetTicks();
		if (lastTime >= (lastFrame + 1000)) {
			lastTime = lastFrame;
			fps = frameCount;
			frameCount = 0;
		}

	}
	update();
	input();
	render();
	TTF_CloseFont(font);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

}


