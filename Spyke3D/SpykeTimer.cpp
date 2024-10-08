#include "SpykeTimer.h"

using namespace std::chrono;

SpykeTimer::SpykeTimer()
{
	last = steady_clock::now();
}

float SpykeTimer::Mark() {
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float SpykeTimer::Peek() const
{
	return duration<float>(steady_clock::now() - last).count();
}