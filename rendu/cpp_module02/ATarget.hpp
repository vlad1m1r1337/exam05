#pragma once

#include "ASpell.hpp"

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::map;

class ASpell;

class ATarget
{
	private:
		string type;

	public:
		ATarget();
		ATarget(const string &_type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		const string &getType() const;
		void getHitBySpell(const ASpell &ref) const;
		virtual ATarget *clone() const = 0;
};
