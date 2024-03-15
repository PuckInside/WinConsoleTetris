#pragma once

#include "IFrame.h"

class IDraw
{
public:
	virtual IFrame GetFrame() = 0;
	virtual void SetFrame(IFrame* frame) = 0;
	virtual void Draw() = 0;
};