#pragma once

#include "../window/window.hpp"

namespace gle
{
	class Renderer
	{
	public:
		Renderer(Window*);
		~Renderer();

		void Clear();
		void Draw();

	private:
		Window* window = nullptr;
	};
}
