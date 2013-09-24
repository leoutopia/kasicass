#include "UxComponent.hpp"

namespace Ux {

Component::Component() : hWnd_(0), visible_(true), x_(0), y_(0)
{
}

Component::~Component()
{
}

bool Component::visible() const
{
	return visible_;
}

void Component::visible(bool v)
{
	visible_ = v;
}

int Component::x() const
{
	return x_;
}

int Component::y() const
{
	return y_;
}

void Component::x(int x)
{
	x_ = x;
}

void Component::y(int y)
{
	y_ = y;
}

}