#include "Warlock.hpp"


Warlock::Warlock(const string &_name, const string &_title) {name = _name; title = _title; cout << name << ": This looks like another boring day." << endl;}
Warlock::~Warlock()
{
	cout << name << ": My job here is done!" << endl;
	map<string, ASpell *>::iterator begin = arr.begin();
	map<string, ASpell *>::iterator end = arr.end();
	while (begin != end) { delete begin->second; ++begin;}
	arr.clear();
}

const string &Warlock::getName() const {return name;}
const string &Warlock::getTitle() const {return title;}
void Warlock::setTitle(const string &str) {title = str;}
void Warlock::introduce() const { cout << name << ": I am " << name << ", " << title << "!" << endl; }


void Warlock::learnSpell(ASpell *ptr)
{
	if (ptr)
		arr.insert(std::pair<string, ASpell *>(ptr->getName(), ptr->clone()));
}

void Warlock::forgetSpell(string name)
{
	map<string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end()) delete it->second;
	arr.erase(name);
}

void Warlock::launchSpell(const string name, const ATarget &ptr)
{
	ASpell *spell = arr[name];
	if (spell)
		spell->launch(ptr);
}
