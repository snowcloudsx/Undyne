#pragma once

#include "Modules.h"
#include <VectorList.h>


class ModuleManager {
public:
	ModuleManager();


	VectorList<Module*> mods;
	VectorList<Module*> activeModules;
	VectorList<Module::Categories> categories;
	VectorList<Module*> getMods();
	VectorList<Module*> getModsByCategory(Module::Categories cate);


	void panic();
	void tick();
	Module* getModByName(std::string name); //is this right?
	VectorList<Module::Categories> getCategories();


	//cat vectors
	VectorList<Module*> Player;
	VectorList<Module*> Combat;
	VectorList<Module*> Render;
	VectorList<Module*> Client;



	




};

