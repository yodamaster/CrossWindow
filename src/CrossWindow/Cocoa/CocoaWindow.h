#pragma once

#include "../Common/WindowDesc.h"
#include "../Common/Init.h"
#include "../Common/EventQueue.h"

#include <vector>

namespace xwin
{
	class Window;

	class MacWindow
	{
	public:
		MacWindow();
		
		~MacWindow();
		
		bool create(const WindowDesc& desc, EventQueue& eventQueue, Window* parent);
		
		void close();
		
		bool eventLoop();
		
	protected:
		//NSString*
		void* mTitle;

		//XWinWindow*
		void* mWindow;
		
		//XWinView*
		void* mView;

		/**
		 * MacOS Keycodes: 
		 * https://stackoverflow.com/questions/3202629/where-can-i-find-a-list-of-mac-virtual-key-codes
		 */
  typedef Key MacKeycodeToDigitalInputMap[1 << (8 * sizeof(unsigned char))];


	};
	
	typedef MacWindow WindowDelegate;
}

