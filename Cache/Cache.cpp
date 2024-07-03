#include <iostream>
#include <string>

#include "Storage.cpp"
#include "EvictionPolicy.cpp"

class Cache
{
private:
	const EvictionPolicy eviction_policy;
	const Storage storage;

public:
	Cache(EvictionPolicy p_eviction_policy, Storage p_storage) : eviction_policy(p_eviction_policy), storage(p_storage) {}

	void put(std::string key, std::string value)
	{

	}

	std::string get(std::string key) const
	{

	}
};




