#pragma once

#include "../window/window.hpp"

namespace gle
{
	class Input
	{
	public:
		Input(Window*);
		~Input();

	private:
		Window* window = nullptr;

		static void KeyCallback(GLFWwindow*, int, int, int, int);
	};
}
