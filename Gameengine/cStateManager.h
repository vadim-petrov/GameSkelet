/*
 *  cStateManager.h
 *  Kore-Engine
 *
 *  Created by Sean Chapel on 11/15/05.
 *  Copyright 2005 Seoushi Games. All rights reserved.
 *
 */
	
#ifndef STATE_MAN
#define STATE_MAN
	
#include "globals.h"
#include "ePurpose.h"
	
namespace Kore{
	struct sState
	{
		sState* Prev;
		void (*Function)(void* CallerPtr, Purpose Purp);
	
		sState(){
			Prev = NULL;
			Function = NULL;
		}
	
		~sState(){
			delete Prev;
		}
	};
	
	/*
	 * deprecated
	 */
	class cStateManager{
		public:
			cStateManager();
			~cStateManager();
			bool Push( void (*Function)(void* CallerPtr, Purpose Purp),  void* CallerPtr = NULL);
			bool Pop( void* CallerPtr = NULL);
			bool PopAll( void* CallerPtr = NULL);
			bool Process( void* CallerPtr = NULL);
	
		private:
			sState* m_CurrentState;
	};

	class BaseState{
	public:
		BaseState(){};
		~BaseState(){};
		virtual void Init(){};
		virtual void Run(){};
		virtual void Stop(){};
	};

	class StateManager{
	public:
		StateManager(){};
		~StateManager(){};
		bool Push(BaseState* st);
		BaseState* Pop();
		bool PopAll();
		bool Process();

		BaseState* Current();

	private:
		std::stack<BaseState*> states;
	};
}

#endif
