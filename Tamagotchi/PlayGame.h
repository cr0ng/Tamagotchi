#pragma once
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
	void showStatus(int Energy, int Happiness, float Exp, int Clean, int Money);
};

