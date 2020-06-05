#pragma once
#include "Vector2D.h"

template<typename TT>
TT dotProduct(const Vector2D<TT>& v0, const Vector2D<TT>& v1)
{
	return v0.x_ * v1.x_ + v0.y_ * v1.y_;
}