#pragma once
#include <chrono>

class SpykeTimer
{
public:
	SpykeTimer();
	float Mark();
	float Peek() const;
private:
	std::chrono::steady_clock::time_point last;
};