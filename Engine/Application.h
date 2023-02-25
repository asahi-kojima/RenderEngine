#pragma once
#include "EngineSetting.h"
#include "Singleton.h"

class Application
{
SINGLETON(Application)
public:
	u32 entry()
	{
		u32 exitCode = 0;


		if (!start())
		{
			exitCode = 1;
			return exitCode;
		}

		while (true)
		{
			bool isRunningEnd = run();
			if (!isRunningEnd)
			{
				break;
			}
		}


		if (!end())
		{
			exitCode = 1;
			return exitCode;
		}


		return exitCode;
	}

private:
	bool start()
	{


		return true;
	}

	bool run()
	{
		bool isRunningEnd = false;





		return isRunningEnd;
	}


	bool end()
	{

		return true;
	}
};