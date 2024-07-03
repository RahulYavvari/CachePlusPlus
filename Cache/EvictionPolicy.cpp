#pragma once

#include<string>
#include <list>

class EvictionPolicy
{
private:

public:
	virtual void evict(std::string key) = 0;
};
