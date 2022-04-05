#include "SpykeExceptions.h"
#include <sstream>

SpykeException::SpykeException (int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* SpykeException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* SpykeException::GetType() const noexcept
{
	return "Spyke Exception";
}

int SpykeException::GetLine() const noexcept
{
	return line;
}

const std::string& SpykeException::GetFile() const noexcept
{
	return file;
}

std::string SpykeException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;

	return oss.str();
}