#pragma once

#include "lve_device.h"
#include "lve_pipeline.h"
#include "lve_swap_chain.h"
#include "v1_window.h"

#include <memory>
#include <vector>

namespace lve {

	class App {
	
		public:

			static constexpr int WIDTH = 500;
			static constexpr int HEIGHT = 500;

			App();
			~App();

			App(const App&) = delete;
			App& operator=(const App&) = delete;

			void run();

		private:

			void createPipelineLayout();
			void createPipeline();
			void createCommandBuffers();
			void drawFrame();

			LveWindow lveWindow{ WIDTH, HEIGHT, "Vulkan_window" };
			LveDevice lveDevice{ lveWindow };
			LveSwapChain lveSwapChain{ lveDevice, lveWindow.getExtent()};
			std::unique_ptr<LvePipeline> lvePipeline;
			VkPipelineLayout pipelineLayout;
			std::vector<VkCommandBuffer> commandBuffers;
	};
}