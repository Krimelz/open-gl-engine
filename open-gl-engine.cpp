#include "open-gl-engine.h"

int main()
{
	if (!glfwInit())
	{
		std::cerr << "glfw init error!" << std::endl;
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(640, 480, "Open GL Engine", nullptr, nullptr);

	if (!window)
	{
		std::cerr << "glfw create window error!" << std::endl;
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGL())
	{
		std::cerr << "glad load error!" << std::endl;
		return -1;
	}

	glClearColor(1.0, 1.0, 0.2, 1.0);

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}
