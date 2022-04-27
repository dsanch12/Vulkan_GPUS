#pragma once

#include "v1.h"
#include "lve_pipeline.h"

namespace lve {

	class App {
	
		public:

			static constexpr int WIDTH = 500;
			static constexpr int HEIGHT = 500;

			void run();

		private:

			LveWindow lveWindow{ WIDTH, HEIGHT, "Vulkan_window" };

			LvePipeline lvePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv" };

	};
}