#pragma once
#include "Tama.h"

class MiniGame
{	// ����ֱ�
public:
	// �̴ϰ��� ����â �����ֱ�
	void ShowMiniGame(std::string TamaName);

	// 1. ������
	//int playChamChamCham(TamaState& state);
	int playChamChamCham();

	// 2. Ű���� ����ġ��
	int playTypingChallenge();
	
	// 3. �ݻ�Ű� �׽�Ʈ
	int playReactionTest();
};

