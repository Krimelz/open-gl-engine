#include "../../headers/window/window.hpp"
#include <iostream>

namespace gle
{
	Window::Window(GLuint width, GLuint height, const char* title)
	{
		if (!glfwInit())
		{
			std::cerr << "glfw init error!" << std::endl;
			return;
		}

		this->window = glfwCreateWindow(width, height, title, nullptr, nullptr);

		if (!this->window)
		{
			std::cerr << "glfw create window error!" << std::endl;
			return;
		}

		glfwMakeContextCurrent(this->window);
	}

	Window::~Window()
	{
		glfwDestroyWindow(this->window);
	}

	GLFWwindow* Window::GetPtr()
	{
		return this->window;
	}
}

