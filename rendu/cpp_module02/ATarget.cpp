#include "ATarget.hpp"


ATarget::ATarget() {}
ATarget::ATarget(const string &_type) {type = _type;}
ATarget::ATarget(const ATarget &other) {*this = other;}
ATarget &ATarget::operator=(const ATarget &other) {type = other.type; return *this;}
ATarget::~ATarget() {}

const string &ATarget::getType() const {return type;}
void ATarget::getHitBySpell(const ASpell &ref) const
{
	cout << type << " has been " << ref.getEffects() << "!" << endl;
}
