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
	int frames;
private:
	Window wnd;
	SpykeTimer timer;
};