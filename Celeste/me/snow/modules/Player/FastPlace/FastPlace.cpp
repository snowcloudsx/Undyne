#include "FastPlace.h"
#include "../../../sdk/minecraft/Minecraft.h"

FastPlace::FastPlace() : Module("FastPlace", PLAYER, "Makes you place blocks fast")
{

}



void FastPlace::onEnable()
{

}


void FastPlace::onDisable()
{
}


void FastPlace::onClientTick()
{
	if (FastPlace::toggled) {
		c_minecraft::get_minecraft().setRightClickDelay(FastPlace::delay);
	}

}