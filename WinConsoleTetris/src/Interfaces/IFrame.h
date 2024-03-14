#pragma once

class IFrame
{
public:
	virtual int GetWidth() = 0;
	virtual int GetHeight() = 0;
	virtual char* GetBuffer() = 0;
};