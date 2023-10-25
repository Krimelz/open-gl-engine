#include "../../headers/renderer/renderer.hpp"
#include <iostream>

namespace gle
{
	Renderer::Renderer(Window* window)
	{
		this->window = window;

		if (!gladLoadGL())
		{
			std::cerr << "glad load error!" << std::endl;
			return;
		}

		glClearColor(0.f, 0.f, 0.f, 1.f);
	}

	Renderer::~Renderer()
	{
	}

	void Renderer::Clear()
	{
		glClear(GL_COLOR_BUFFER_BIT);
	}

	void Renderer::Draw()
	{
		glfwSwapBuffers(this->window->GetPtr());
	}
}

