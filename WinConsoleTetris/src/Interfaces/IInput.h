#pragma once

class IInput
{
public:
	virtual int GetHorizontalAxis() = 0;
	virtual int GetVerticalAxis() = 0;
	virtual int GetActionButton() = 0;
	virtual int GetExitButton() = 0;
};