#include <iostream>
#include <vector>
using namespace std;

class Ability abstract {
public:
	virtual void HeroAbility() = 0;
};

class Levitation : public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << "I'm levitating\n";
	}
};

class SuperStrength: public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << "I'm super strong\n";
	}
};

class SuperSpeed : public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << " I'm sppeding\n" << std::endl;
	}
};

class Cybernetics : public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << "I'm Cyborg\n";
	}
};

class Armor : public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << "I have armor\n";
	}
};

class LaserVision : public Ability {
public:
	virtual void get_name() = 0;
	void HeroAbility() override {
		cout << "I have laser vision\n";
	}
};

class —haracteristic abstract {
public:
	virtual void Heroes—haracteristic() = 0;
};

class Positive : public —haracteristic {
public:
	virtual void get_name() = 0;
	void Heroes—haracteristic() override {
		cout << "I'm positive hero\n";
	}
};

class Negative : public —haracteristic {
public:
	virtual void get_name() = 0;
	void Heroes—haracteristic() override {
		cout << "I'm negative hero\n";
	}
};

class Creature abstract {
public:
	virtual void EssenceOfHeroes() = 0;
};

class Gods : public Creature {
public:
	virtual void get_name() = 0;
	void EssenceOfHeroes() override {
		cout << "I'm God\n";
	}
};

class Human : public Creature {
public:
	virtual void get_name() = 0;
	void EssenceOfHeroes() override {
		cout << "I'm Human\n";
	}
};


class Batman : public SuperStrength, public Armor, public Positive, public Human {
public:
	void get_name() override {
		cout << "I'm Batman\n";
	}
};

class Superman : public SuperStrength, public Levitation, public Positive, public LaserVision, public SuperSpeed, public Human {
public:
	void get_name() override {
		cout << "I'm Superman\n";
	}
};

class Darkside : public SuperStrength, public Levitation, public Negative, public LaserVision, public Gods {
public:
	void get_name() override {
		cout << "I'm  Darkside\n";
	}
};

class Flash : public SuperSpeed, public Positive, public Human {
public:
	void get_name() override {
		cout << "I'm Flash\n";
	}
};

class Cyborg : public SuperStrength, public Levitation, public Cybernetics, public Positive, public Human {
public:
	void get_name() override {
		cout << "I'm Cyborg\n";
	}
};

class Thor : public SuperStrength, public Levitation, public SuperSpeed, public Positive, public Gods {
public:
	void get_name() override {
		cout << "I am Thor\n";
	}
};

class Loki : public SuperStrength, public Levitation, public SuperSpeed, public Negative, public Gods {
public:
	void get_name() override {
		cout << "I am Loki\n";
	}
};

int main()
{
	vector<Levitation*> heroes_levitation;
	heroes_levitation.push_back(new Superman);
	heroes_levitation.push_back(new Darkside);
	heroes_levitation.push_back(new Cyborg);
	heroes_levitation.push_back(new Thor);
	heroes_levitation.push_back(new Loki);

	for (auto& i : heroes_levitation) {
		i->get_name();
		i->HeroAbility();
		cout << "\n\n";
	}

	vector<Positive*> positiv_heroes;
	positiv_heroes.push_back(new Batman);
	positiv_heroes.push_back(new Superman);
	positiv_heroes.push_back(new Flash);
	positiv_heroes.push_back(new Cyborg);
	positiv_heroes.push_back(new Thor);

	for (auto& i : positiv_heroes) {
		i->get_name();
		i->Heroes—haracteristic();
		cout << "\n\n";
	}

	vector<LaserVision*> heroes_laserVisionn;
	heroes_laserVisionn.push_back(new Superman);
	heroes_laserVisionn.push_back(new Darkside);
	

	for (auto& i : heroes_laserVisionn) {
		i->get_name();
		i->HeroAbility();
		cout << "\n\n";
	}

	vector<Gods*> heroes_gods;
	heroes_gods.push_back(new Thor);
	heroes_gods.push_back(new Loki);
	heroes_gods.push_back(new Darkside);

	for (auto& i : heroes_gods) {
		i->get_name();
		i->EssenceOfHeroes();
		cout << "\n\n";
	}
}