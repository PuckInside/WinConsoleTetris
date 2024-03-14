#pragma once

#include "IInput.h"
#include "IFrame.h"

class IGame
{
public:
	virtual void Update() = 0;
	virtual IFrame GetFrame() = 0;
	virtual void SetInputs(IInput input) = 0;
};