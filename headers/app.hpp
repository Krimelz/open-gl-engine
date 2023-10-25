#pragma once

#include "../renderer/renderer.hpp"
#include "../input/input.hpp"

namespace gle
{
	class App
	{
	public:
		App(Window*, Renderer*, Input*);
		~App();

		void Run();

	private:
		Window* window = nullptr;
		Renderer* renderer = nullptr;
		Input* input = nullptr;
	};
}
