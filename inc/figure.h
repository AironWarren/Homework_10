class twoPoint
{
public:
	twoPoint(int _x = 0, int _y = 0) : x(_x), y(_y)
	{
	
	}

	void setX(int _x)
	{
		x = _x;
	}

	void setY(int _x)
	{
		x = _x;
	}

	int getX() const
	{
		return x;
	}

	int getY() const
	{
		return x;
	}
private:
	int x;
	int y;
};

class treePoint : public twoPoint
{
public:
	treePoint(int _x, int _y, int _z) : twoPoint(_x, _y), z(_z)
	{

	}

	int getZ() const
	{
		return z;
	}

private:
	int z;
};
