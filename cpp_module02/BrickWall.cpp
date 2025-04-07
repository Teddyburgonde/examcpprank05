#include "BrickWall.hpp"


BrickWall::BrickWall():ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::BrickWall(BrickWall const &cpy):ATarget(cpy)
{

}

BrickWall::~BrickWall(){}


BrickWall &BrickWall::operator=(BrickWall const &rhs)
{
	if (this != &rhs)
		ATarget::operator=(rhs);
	return (*this);
}


ATarget* BrickWall::clone() const
{
	return new BrickWall(*this);
}
