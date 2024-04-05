#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator()
{
map<string, ATarget *>::iterator begin = arr.begin();
	map<string, ATarget *>::iterator end = arr.end();
	while (begin != end) { delete begin->second; ++begin;}
	arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *ptr)
{
if (ptr)
		arr.insert(std::pair<string, ATarget *>(ptr->getType(), ptr->clone()));
}
void TargetGenerator::forgetTargetType(const string &name)
{
map<string, ATarget *>::iterator it = arr.find(name);
	if (it != arr.end()) delete it->second;
	arr.erase(name);
}
ATarget *TargetGenerator::createTarget(const string &name)
{
map<string, ATarget *>::iterator it = arr.find(name);
	if (it != arr.end()) return arr[name];
	return NULL;
}

