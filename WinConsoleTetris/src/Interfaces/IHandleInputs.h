#pragma once

#include "IInput.h"

class IHandleInputs
{
public:
	virtual void Update() = 0;
	virtual IInput* GetInputs() = 0;
};