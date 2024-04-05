#pragma once

#include "ATarget.hpp"

class TargetGenerator
{

	map<string, ATarget *> arr;
	TargetGenerator(const TargetGenerator &other);
	TargetGenerator &operator=(const TargetGenerator &other);
	public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *ptr);
	void forgetTargetType(const string &name);
	ATarget *createTarget(const string &name);
};
