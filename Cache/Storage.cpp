#pragma once

#include <iostream>
#include <string>
#include <map>

class Storage
{
private:
	const int capacity;

public:
	std::map<std::string, std::string> storage;

	Storage(int p_capacity) : capacity(p_capacity) {}

	void add(std::string key, std::string value)
	{
		if (storage.size() == capacity)
		{
			std::cout << "Capacity is full" << std::endl;
		}
		else
		{
			storage[key] = value;
		}
	}

	void remove(std::string key)
	{
		if (storage.find(key) == storage.end())
		{
			return;
		}
		storage.erase(key);
	}

	std::string get(std::string key) const
	{
		return storage.at(key);
	}
};