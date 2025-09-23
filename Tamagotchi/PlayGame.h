#pragma once
#include "Tama.h"
#include "Display.h"



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
	Display display;
};

