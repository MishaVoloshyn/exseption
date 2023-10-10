#pragma once
#include "exception.h"

class Index : public Exception {
public:
	Index(const char* mes);
	virtual const char* GetMessage() const;
};

