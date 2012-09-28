#ifndef STATE_MAN
	#include "cStateManager.h"
#endif
#pragma once

namespace Kore{
	class MainMenuState
		:public BaseState{
	public:
		MainMenuState(void){};
		~MainMenuState(void){};

		virtual void Init();
		virtual void Run();
		virtual void Stop();		
	};
}

