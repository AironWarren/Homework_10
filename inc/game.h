#include <string>


class Person
{
public:
	Person() : experience(std::rand()), skillPoints(std::rand()), life(std::rand()), damage(std::rand())
	{

	}

	void setName(std::string _name)
	{
		name = _name;
	}

	virtual void infoPerson(void) const = 0;

protected:
	std::string name;
	int experience;
	int skillPoints;
	int life;
	int damage;
};

class Golum : public Person
{
public:
	Golum() : Person(), goblinPower(std::rand())
	{

	}

	void infoPerson(void) const override 
	{
		std::cout << name << ", " << experience << " ex, " << skillPoints << " sp, " << life << " hp, " << damage << " dmg, " << goblinPower <<" gpower.\n";
	}

protected:
	int goblinPower;
};

class Fairy : public Person
{
public:
	Fairy() : Person(), fairyPower(std::rand())
	{

	}

	void infoPerson(void) const override
	{
		std::cout << name << ", " << experience << " ex, " << skillPoints << " sp, " << life << " hp, " << damage << " dmg, " << fairyPower << " fpower.\n";
	}

protected:
	int fairyPower;

};

class ForestFairy : public Fairy
{
public:
	ForestFairy() : Fairy(), fairyForestPower(std::rand())
	{

	}

	void infoPerson(void) const override
	{
		std::cout << name << ", " << experience << " ex, " << skillPoints << " sp, " << life << " hp, " << damage << " dmg, " << fairyPower << " fpower, " << fairyForestPower <<" ffpower.\n";
	}
private:
	int fairyForestPower;
};

class StoneMan : public Person
{
public:
	StoneMan() : Person(), stonePower(std::rand())
	{

	}

	void infoPerson(void) const override
	{
		std::cout << name << ", " << experience << " ex, " << skillPoints << " sp, " << life << " hp, " << damage << " dmg, " << stonePower << " spower.\n";
	}
protected:
	int stonePower;
};

class StoneManVer2 : public StoneMan
{
public:
	StoneManVer2() : StoneMan(), stoneFirePower(std::rand())
	{

	}

	void infoPerson(void) const override
	{
		std::cout << name << ", " << experience << " ex, " << skillPoints << " sp, " << life << " hp, " << damage << " dmg, " << stonePower << " spower, " << stoneFirePower << " sfpower.\n";
	}
protected:
	int stoneFirePower;
};