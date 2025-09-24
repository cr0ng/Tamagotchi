#pragma once
#include "Tama.h"
#include "Display.h"



class PlayGame
{
public:
	PlayGame();
	// ó�� ���۽� �ٸ���ġ �ΰ� ���, ���� ������������
	int PlayTamagotchi();
	// �޴� �����ֱ�
	void ShowMenu(TamaState& state);

	// �ٸ���ġ ����ǥ �����ֱ�
	void showStatus(TamaState& state);

	void Evolution();
private:
	
	

	Tama tama;
	Display display;
	TamaState state;

};

