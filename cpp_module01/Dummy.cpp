#include "Dummy.hpp"


Dummy::Dummy():ATarget("Target Practice Dummy")
{

}

Dummy& Dummy::operator=(Dummy const& rhs)
{
	if (this != &rhs)
	{
		ATarget::operator=(rhs);
	}
	return (*this);
}

Dummy::Dummy(Dummy const &cpy):ATarget(cpy)
{

}

Dummy::~Dummy(){}

ATarget * Dummy::clone() const
{
	return new Dummy(*this);
}

