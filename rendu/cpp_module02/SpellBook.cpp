#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook()
{
map<string, ASpell *>::iterator begin = arr.begin();
	map<string, ASpell *>::iterator end = arr.end();
	while (begin != end) { delete begin->second; ++begin;}
	arr.clear();
}

void SpellBook::learnSpell(ASpell *ptr)
{
if (ptr)
		arr.insert(std::pair<string, ASpell *>(ptr->getName(), ptr->clone()));
}
void SpellBook::forgetSpell(const string &name)
{
map<string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end()) delete it->second;
	arr.erase(name);
}
ASpell *SpellBook::createSpell(const string &name)
{
map<string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end()) return arr[name];
	return NULL;
}

