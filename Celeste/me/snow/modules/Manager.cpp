#include "Manager.h"
#include "Player/FastPlace/FastPlace.h"

ModuleManager::ModuleManager()
{
	this->mods = VectorList<Module*>();
	this->activeModules = VectorList<Module*>();
	this->Player = VectorList<Module*>();
	this->Combat = VectorList<Module*>();
	this->Render = VectorList<Module*>();
	this->Client = VectorList<Module*>();
	this->categories = VectorList<Module::Categories>();

	this->categories.add(Module::Categories::CLIENT);
	this->categories.add(Module::Categories::COMBAT);
	this->categories.add(Module::Categories::PLAYER);
	this->categories.add(Module::Categories::RENDER);

	this->mods.add(new FastPlace());

	for (Module* mod : mods.getVector())
	{
		switch (mod->cate)
		{
		case Module::Categories::CLIENT:
			this->Client.add(mod);
			break;


		case Module::Categories::PLAYER:
			this->Player.add(mod);
			break;


		case Module::Categories::RENDER:
			this->Render.add(mod);
			break;


		case Module::Categories::COMBAT:
			this->Combat.add(mod);
			break;

		default:
			break;
		}
	}
}

VectorList<Module*> ModuleManager::getMods()
{
	return ModuleManager::mods;
}

VectorList<Module*> ModuleManager::getModsByCategory(Module::Categories cate)
{
	switch (cate)
	{
	case Module::Categories::CLIENT:
		return this->Client;

	case Module::Categories::PLAYER:
		return this->Player;

	case Module::Categories::RENDER:
		return this->Render;

	case Module::Categories::COMBAT:
		return this->Combat;

	}
}


void ModuleManager::panic() {
	for (Module* mod : mods) {
		mod->onDisable();
	}
}

//but look

void ModuleManager::tick()
{
	for (Module* mod : mods) {
		if (mod->toggled) {
			mod->onClientTick();
		}
	}
}


Module* ModuleManager::getModByName(std::string name)
{
	for (Module* mod : mods) {
		if (mod->moduleName == name) {
			return mod;
		}
	}
	return nullptr;
}

VectorList<Module::Categories> ModuleManager::getCategories()
{
	return this->categories;
}

