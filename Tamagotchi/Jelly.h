#pragma once
#include "Tama.h"
class Jelly : public Tama
{
public:
	void EatSomething(std::string TamaName, TamaState& state) {
		printf("\t\t\t\t\t%s��/�� �Ĵ翡�� ����� ������ �Խ��ϴ�. + �ູ�� 15  \n", TamaName.c_str());
		state.Money -= 5;
		state.Happiness += 15;
		state.Happiness = LimitState(state.Happiness);
		Sleep(1200);
	}
};

