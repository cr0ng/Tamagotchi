#pragma once
#include <string>
struct TamaState
{
	int Energy = 50;
	int Happiness = 50;
	float Exp = 50.0f;
	int Clean = 50;
	int Money = 20;

	TamaState() = default;
};

class Tama
{
public:
	Tama();


	// ��Ա�
	void Eating(std::string TamaName);

	// ����
	void Restaurant(std::string TamaName);

	// ���
	void TakeBath(std::string TamaName);

	// ���ڱ�
	void Sleeping(std::string TamaName);
private:
};

