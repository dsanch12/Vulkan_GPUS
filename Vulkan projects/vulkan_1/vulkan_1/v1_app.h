#pragma once

#include "v1.h"

namespace lve {

	class App {
	
		public:

			static constexpr int WIDTH = 100;
			static constexpr int HEIGHT = 100;

			void run();

		private:

			LveWindow lveWindow{ WIDTH, HEIGHT, "kkkkkkkkkk" };

	};
}