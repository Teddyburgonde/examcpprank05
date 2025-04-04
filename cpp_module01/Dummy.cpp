#include "Dummy.hpp"

Dummy::Dummy() :ATarget("Target Practice Dummy")
{}
Dummy::Dummy(Dummy const &cpy) : ATarget(cpy)
{

}

Dummy &Dummy::operator=(Dummy const &rhs)
{
	if (this != &rhs)
	{
		ATarget::operator=(rhs);
	}
	return (*this);
}

ATarget* Dummy::clone() const 
{
	return new Dummy(*this);
}