#pragma once
#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();
		BrickWall* clone() const;
};