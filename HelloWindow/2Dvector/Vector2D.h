#pragma once

template<typename TT>
class Vector2D
{
public:
	TT x_, y_;

	Vector2D()
		: x_(TT()), y_(TT())
	{}

	Vector2D(const TT& _x, const TT& _y)
		: x_(_x), y_(_y)
	{}

	friend std::ostream& operator << (std::ostream& out, const Vector2D<TT>& vec)
	{
		out << "(" << vec.x_ << ", " << vec.y_ << ")";

		return out;
	}
};