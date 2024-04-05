#pragma once

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::map;

#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);

	string name;
	string title;
	SpellBook book;
	public:
	Warlock(const string &_name, const string &_title);
	~Warlock();

	const string &getName() const;
	const string &getTitle() const;
	void setTitle(const string &str);
	void introduce() const;

	void learnSpell(ASpell *ptr);
	void forgetSpell(string name);
	void launchSpell(const string name, const ATarget &ptr);
};
