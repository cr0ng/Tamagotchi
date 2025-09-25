#pragma once
#include "Tama.h"
#include "Display.h"

class MiniGame
{	// ����ֱ�
public:
	MiniGame() = default;
	//~MiniGame();

	// �̴ϰ��� ����â �����ֱ�
	void ShowMiniGame(TamaState& state);

	// 1. ������
	int playChamChamCham(TamaState& state);

	// 2. Ű���� ����ġ��
	int playTypingChallenge(TamaState& state);
	
	// 3. �ݻ�Ű� �׽�Ʈ
	//int playReactionTest(TamaState& state);

	// 4. ����ã��
	int playTreasureHunt(TamaState& state);
};

