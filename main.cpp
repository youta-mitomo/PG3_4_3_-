#include <stdio.h>

class oya
{
public:
	 void Voice() {
		printf("あにまる\n");
	};
};

class kodomoa : public oya
{
	
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class kodomob : public oya
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	oya* animal[2] = { new kodomoa,new kodomob  };



	animal [0]->Voice();
	animal [1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
