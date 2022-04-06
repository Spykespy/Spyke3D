#include "App.h"

App::App()
	:
	wnd(1920, 1080, "Spyke3D Engine")
{};

int App::Go()
{
	while (true)
	{
		// process all messages pending, but to not block for new messages
		if (const auto ecode = Window::ProcessMessages())
		{
			// if return optional has value, means we're quitting so return exit code
			return *ecode;
		}
		DoFrame();
	}
}

void App::DoFrame()
{
	const float t = timer.Peek();
	std::ostringstream oss;
	oss << "Time elapsed: " << std::setprecision(2) << std::fixed << t << "s";
	wnd.SetTitle(oss.str());
		
}