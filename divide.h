#pragma once
#include "exception.h"
class Divide : public Exception {
public:
	Divide(const char* mes);
	virtual const char* GetMessage() const;
};