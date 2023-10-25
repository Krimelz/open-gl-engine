#define GLFW_INCLUDE_NONE

#include "../headers/app/app.hpp"

int main(int argc, char* argv[])
{
	gle::Window* window = new gle::Window(400, 400, "Game");
	gle::Renderer* renderer = new gle::Renderer(window);
	gle::Input* input = new gle::Input(window);
	gle::App* app = new gle::App(window, renderer, input);

	app->Run();

	delete(app);
	delete(input);
	delete(renderer);
	delete(window);

	return 0;
}
