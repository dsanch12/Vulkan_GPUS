#include "v1_app.h"

namespace lve {

	void App::run() {
	
		while (!lveWindow.shouldClose()) {
		
			glfwPollEvents();
		}
	}
}