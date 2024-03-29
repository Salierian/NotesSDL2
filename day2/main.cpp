#include "SDL.h"

int main(int argc, char *argv[])
{

	//Inicialización de subsistemas
	SDL_Init(SDL_INIT_EVERYTHING);

	//Instanciando una ventana, rellenando los valores de título, posición, tamaño y hace que la ventana sea visible.
	SDL_Window *window = SDL_CreateWindow(
			"title", 
			SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED, 
			600, 
			400, 
			SDL_WINDOW_SHOWN);

	//Referenciado a ventana
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	//Instrucciones para renderer rellenado de color
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); //Rojo
	
	//Remueve el contenido
	SDL_RenderClear(renderer);

	//Rellena el contenido
	SDL_RenderPresent(renderer);

	//Timer de 5 segundos
	SDL_Delay(5000);

	return 0;

}
