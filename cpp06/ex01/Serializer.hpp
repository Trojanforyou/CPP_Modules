#pragma once

#include <iostream>
#include <string>
#include <cstdint>

class Data
{
	public:
		int num;
};
class Serializer
{
	private:
        Serializer() = delete;
        Serializer(const Serializer &other) = delete;
        Serializer& operator=(const Serializer& other) = delete;
        ~Serializer() = delete;
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};