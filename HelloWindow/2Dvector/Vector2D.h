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

	TT getMagnitude()
	{
		return sqrt(x_ * x_ + y_ * y_);
	}

	// over-loading for speedup
	void getMagnitude(TT& mag)
	{
		mag = sqrt(x_ * x_ + y_ * y_);
	}

	void normalize()
	{
		const TT magnitude = getMagnitude();
		x_ /= magnitude;
		y_ /= magnitude;
	}

	Vector2D<TT> getNormalized()
	{
		const TT magnitude = getMagnitude();
		return Vector2D(x_ / magnitude, y_ / magnitude);
	}

	friend std::ostream& operator << (std::ostream& out, const Vector2D<TT>& vec)
	{
		out << "(" << vec.x_ << ", " << vec.y_ << ")";

		return out;
	}
};