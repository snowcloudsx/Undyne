#pragma once
#include <string>



class Module
{
public:
	enum Categories
	{
		PLAYER,
		COMBAT,
		CLIENT,
		RENDER
	};
	std::string moduleName;
	std::string description;
	bool toggled;
	Categories cate;
	

	virtual void onEnable() {};
	virtual void onDisable() {};
	virtual void onClientTick() {};

	inline void toggle()
	{
		toggled = !toggled;
	}

	Module(std::string name, Categories category, std::string description)
	{
		this->moduleName = name;
		this->cate = category;
		this->description = description;
		toggled = false;
	}

};



