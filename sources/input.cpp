#include "../../headers/input/input.hpp"

namespace gle
{
	Input::Input(Window* window)
	{
		this->window = window;

		glfwSetKeyCallback(this->window->GetPtr(), KeyCallback);
	}

	Input::~Input()
	{

	}

	void Input::KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		{
			glfwSetWindowShouldClose(window, GL_TRUE);
		}
	}
}

