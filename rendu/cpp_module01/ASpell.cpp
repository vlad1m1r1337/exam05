#include "ASpell.hpp"


ASpell::ASpell() {}
ASpell::ASpell(const string &_name, const string &_effects) {name = _name; effects = _effects;}
ASpell::ASpell(const ASpell &other) {*this = other;}
ASpell &ASpell::operator=(const ASpell &other) {name = other.name; effects = other.effects; return *this;}
ASpell::~ASpell() {}

const string &ASpell::getName() const {return name;}
const string &ASpell::getEffects() const {return effects;}
void ASpell::launch(const ATarget &ref) const
{
	ref.getHitBySpell((*this));
}
