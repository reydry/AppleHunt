#pragma once
class Coordinate
{
public:

	Coordinate();
	Coordinate(unsigned, unsigned);
	
	void setCoord(Coordinate);
	unsigned getX() noexcept;
	unsigned getY() noexcept;
	void setCoord(unsigned, unsigned) noexcept;
	Coordinate getCoord() noexcept;

	virtual ~Coordinate();

private:
	unsigned _x;
	unsigned _y;
};

