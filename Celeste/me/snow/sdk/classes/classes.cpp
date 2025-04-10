#include "classes.h"

#include <jvm.h>


void classes::loadLunar()
{
    jvm::AssignClass("net.minecraft.client.Minecraft", classes::minecraft_class);
    jvm::AssignClass("net.minecraft.client.multiplayer.ServerData", classes::ServerData);

}


void classes::load1_24() {

    jvm::AssignClass("net.minecraft.client.Minecraft", classes::minecraft_class);


}


void classes::load()
{

    minecraft_class = jvm::isForge() ? jvm::ForgeFindClass("net.minecraft.client.Minecraft") : jvm::env->FindClass("ave");

	//minecraft_class = jvm::isForge() ? jvm::ForgeFindClass("net.minecraft.client.Minecraft") : jvm::env->FindClass("ave");

}
