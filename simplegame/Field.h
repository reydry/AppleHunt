#pragma once
#include "GameIni.h"
#include "Coordinate.h"

class Field
{
public:
	Field()
	{

	}

	virtual void printImage() noexcept = 0;
	virtual Coordinate getCoord() = 0;

	virtual ~Field()
	{

	}

private:
	Coordinate _coord;
};

