#pragma once
#include "Tama.h"
class RiceBall :  public Tama
{
public:
	void EatSomething(std::string TamaName, TamaState& state) {
		printf("\t\t\t\t\t%s��/�� �Ĵ翡�� �ָԹ��� �Խ��ϴ�. + ������ 20  \n", TamaName.c_str());
		state.Money -= 20;
		state.Energy += 20;
		state.Energy = LimitState(state.Energy);
		Sleep(1200);
	}
};

