#include "MiniGame.h"
#include "PlayGame.h"
#include "Tama.h"
#include <random>
#include <iostream>

// �̴ϰ��� ��Ƶδ� ��

enum ChamCham {
    Left = 0,
    Right
};

int MiniGame::playChamChamCham(TamaState& state)
{
    int PlayTime = 3;
    //�������� �� 3�� �����ؼ� ���� ����
    char PlayersHand = 0;
    int WinCount = 0;

    printf("�������� �����Ұ�!\n ������ �� %d�� �����̾� \n", PlayTime);
    printf("�ٸ���ġ�� �� ���� ���� ���߸� �¸���!! \n �����̸� L �������̸� R�� �Է�����!");
    
    printf("������~!\n");
    std::cin >> PlayersHand;

    while (!(PlayersHand == 'L' || PlayersHand == 'R')) {
        printf("�����̸� L �������̸� R�� �Է�����!");
        printf("������~!\n");
        std::cin >> PlayersHand;
    }

    while (PlayTime > 0) {
        // ������ �Ӹ� ����
        int Direction = rand() % 2;
        // 0�̸� ���� 1�̸� ������

        if (Direction == 0) {
            //������ ���
            if (PlayersHand == 'L') {
                printf("�ʰ� �����!! \n");
                WinCount++;
            }
            else {
                printf("�� �����.. \n");
            }
        }
        else {
            //�������� ���
            if (PlayersHand == 'R') {
                printf("�ʰ� �����!! \n");
                WinCount++;
            }
            else {
                printf("�� �����.. \n");
            }
        }
            PlayTime--;
    }
    
    if (WinCount >= 2) {
        printf("��� ���� �¸���!!! \n");
        printf("�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�..!\n\n" ,state.Exp, state.Money);
    }
    return 0;
}

int MiniGame::playTypingChallenge()
{
    return 0;
}

int MiniGame::playReactionTest()
{
    return 0;
}
