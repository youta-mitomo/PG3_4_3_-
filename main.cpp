#include <stdio.h>

class oya
{
public:
	 void Voice() {
		printf("���ɂ܂�\n");
	};
};

class kodomoa : public oya
{
	
public:
	void Voice() {
		printf("�q��A����\n");
	};
};

class kodomob : public oya
{
public:
	void Voice() {
		printf("�q��B����\n");
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
