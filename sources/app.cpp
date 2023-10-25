#include "../../headers/app/app.hpp"
#include <iostream>
#include <glad/glad.h>

namespace gle
{
	App::App(Window* window, Renderer* renderer, Input* input)
	{
		this->window = window;
		this->renderer = renderer;
		this->input = input;
	}

	App::~App()
	{
		glfwTerminate();
	}

	void App::Run()
	{
		while (!glfwWindowShouldClose(this->window->GetPtr()))
		{
			renderer->Clear();
			renderer->Draw();
			glfwPollEvents();
		}
	}
}
