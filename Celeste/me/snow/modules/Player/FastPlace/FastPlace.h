#pragma once
#include "../../Manager.h"


class FastPlace : public Module
{
public:

	FastPlace();
	void onEnable() override;
	void onDisable() override;
	void onClientTick() override;

	int delay = 0;


};