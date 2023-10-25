#pragma once
#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace gle
{
	class Window
	{
	public:
		Window(GLuint, GLuint, const char*);
		~Window();

		GLFWwindow* GetPtr();

	private:
		GLFWwindow* window = nullptr;
	};
}
