#pragma once
#include <jni.h>
#include <vector>
#include <map>

namespace classes
{
	void load();

	void loadLunar();


	void load1_24();
	//classes
	inline jclass ServerData = nullptr;
	inline jclass minecraft_class = nullptr;
	inline jclass LaunchWrapperClassLoaderClass = nullptr;
	inline jclass LaunchClass = nullptr;
	inline jclass snifferClassUwU = nullptr;


	//methods 

	inline jmethodID FindClassMethodID = nullptr;


	std::map<const char*, jclass> classes;
	std::map<const char*, jfieldID> fields;
	std::map<const char*, jmethodID> methods;


	//fields

	inline jfieldID ClassLoaderFieldID = nullptr;
	inline jfieldID fiel = nullptr;


	//objects

	inline jobject ClassLoaderObject = nullptr;




}