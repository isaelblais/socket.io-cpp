#pragma once

#include "Poco/JSON/Object.h"

using Poco::JSON::Object;

class SIOEventTarget
{
private:
	
public:
	virtual ~SIOEventTarget() {};
	
	typedef void (SIOEventTarget::*callback)(const void*, Object::Ptr&);

	void on(const char *name, callback c);
	
};