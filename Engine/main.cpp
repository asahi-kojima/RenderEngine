#include <iostream>
#include "EngineSetting.h"
#include "Application.h"

int main()
{
	u32 exitCode = Application::getInstance().ignition();
	return exitCode;
}