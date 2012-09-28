#include "cProcessManager.h"
#include "cStateManager.h"
#include "Singleton.h"
#include "MainMenuState.h"
#include <conio.h>

int main(char* argc, int nargs){
	Kore::StateManager* st = Kore::Singleton<Kore::StateManager>::GetSingletonPtr();
	Kore::MainMenuState* menuState = new Kore::MainMenuState();
	st->Push(menuState);

	_getch();

	return 0;
}
