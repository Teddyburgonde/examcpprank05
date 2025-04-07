#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget 
{
	public:
		BrickWall();
		~BrickWall();
		BrickWall(BrickWall const &cpy);
		BrickWall &operator=(BrickWall const &rhs);
		ATarget* clone() const;
};