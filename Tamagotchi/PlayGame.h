#pragma once
#include "Tama.h"



class PlayGame
{
public:
	PlayGame();
	// ó�� ���۽� �ٸ���ġ �ΰ� ���, ���� ������������
	int PlayTamagotchi();

private:
	// �޴� �����ֱ�
	void ShowMenu();

	// �ٸ���ġ ����ǥ �����ֱ�
	void showStatus(TamaState& state);

	Tama tama;
};

