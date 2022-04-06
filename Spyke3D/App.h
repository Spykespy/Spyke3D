#pragma once
#include "Window.h"
#include "SpykeTimer.h"

class App
{
public:
	App();
	// master frame loop
	int Go();
private:
	void DoFrame();
private:
	Window wnd;
	SpykeTimer timer;
};