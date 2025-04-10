#pragma once


#include "player/Entity.h"
class c_minecraft : public c_jobject
{
public:
	c_minecraft(jobject object_in);

	static c_minecraft get_minecraft();
	c_entity get_local_player();
	c_server getServerData();



	void setRightClickDelay(int value);
};