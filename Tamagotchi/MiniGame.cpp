#include "MiniGame.h"
#include "PlayGame.h"
#include "Tama.h"
#include <random>
#include <iostream>
#include <Windows.h>
#include <time.h>

// �̴ϰ��� ��Ƶδ� ��

enum ChamCham {
    Left = 0,
    Right
};

struct GAMEREWARDS {
    const int CharmEnergyLoss = -10;
    const float ChamExpReward = 10.0;
    const int ChamMoneyReward = 10;
    const int ChamHappyReward = 10;
    const int ChamCleanLoss = -10;

    const int TypingEnergyLoss = -15;
    const float TypingExpReward = 20.0;
    const int TypingMoneyReward = 20;
    const int TypingHappyReward = 10;
    const int TypingCleanLoss = -20;

    const int ReactionEnergyLoss = -20;
    const float ReactionExpReward = 40.0;
    const int ReactionMoneyReward = 40;
    const int ReactionHappyReward = 15;
    const int ReactionCleanLoss = -30;
};

void MiniGame::ShowMiniGame(std::string TamaName)
{
    printf("\n\t\t\t\t\t\t\t+------------------------+\n");
    printf("\t\t\t\t\t\t\t|       ���� �޴�        |\n");
    printf("\t\t\t\t\t\t\t+------------------------+\n");
    printf("\t\t\t\t\t\t\t|  ���� ���� Ƚ�� : %d�� |\n",3);
    printf("\t\t\t\t\t\t\t|  1. ������             |\n");
    printf("\t\t\t\t\t\t\t|  2. Ű���� ����ġ��    |\n");
    printf("\t\t\t\t\t\t\t|  3. �ݻ�Ű� �׽�Ʈ    |\n");
    printf("\t\t\t\t\t\t\t|  4. ���� ����          |\n");
    printf("\t\t\t\t\t\t\t+------------------------+\n");
    
    int WhichGame = 0;
    while (WhichGame != 4) {
        printf("\t\t\t\t\t���� ������ �Ͻðھ��? ");
        std::cin >> WhichGame;

        while (!(WhichGame >= 1) && !(WhichGame <= 4)) {
            printf("\t\t\t\t\t�׷� ������ �����! \n");
            printf("\t\t\t\t\t���� ������ �Ͻðھ��? ");
            std::cin >> WhichGame;
        }

        switch (WhichGame) {
        case 1:
        {
            printf("������\n");
            playChamChamCham();
        }
        break;
        case 2:
        {
            printf("Ÿ����\n");
            playTypingChallenge();
        }
        break;
        case 3:
        {
            printf("����\n");
            playReactionTest();
        }
        break;
        default:
            break;
        }
    }
}

//int MiniGame::playChamChamCham(TamaState& state)
int MiniGame::playChamChamCham()
{
    //int PlayTime = 3;
    ////�������� �� 3�� �����ؼ� ���� ����
    //char PlayersHand = 0;
    //int WinCount = 0;

    //state.Energy -= 10; // ���߿� ������ ����
    //printf("�������� �����Ұ�!\n ������ �� %d�� �����̾� \n", PlayTime);
    //printf("�ٸ���ġ�� �� ���� ���� ���߸� �¸���!! \n �����̸� L �������̸� R�� �Է�����!");
    //
    //printf("������~!\n");
    //std::cin >> PlayersHand;

    //while (!(PlayersHand == 'L' || PlayersHand == 'R')) {
    //    printf("�����̸� L �������̸� R�� �Է�����!");
    //    printf("������~!\n");
    //    std::cin >> PlayersHand;
    //}

    //while (PlayTime > 0) {
    //    // ������ �Ӹ� ����
    //    int Direction = rand() % 2;
    //    // 0�̸� ���� 1�̸� ������

    //    if (Direction == 0) {
    //        //������ ���
    //        if (PlayersHand == 'L') {
    //            printf("�ʰ� �����!! \n");
    //            WinCount++;
    //        }
    //        else {
    //            printf("�� �����.. \n");
    //        }
    //    }
    //    else {
    //        //�������� ���
    //        if (PlayersHand == 'R') {
    //            printf("�ʰ� �����!! \n");
    //            WinCount++;
    //        }
    //        else {
    //            printf("�� �����.. \n");
    //        }
    //    }
    //        PlayTime--;
    //}
    //
    //if (WinCount >= 2) {
    //    if (state.Happiness >= 80) {
    //        state.Exp *= 2;
    //    }
    //    else if (state.Happiness >= 50) {
    //        state.Exp *= 1.5;
    //    }

    //    printf("��� ���� �¸���!!! \n");
    //    printf("�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�!\n\n" , state.Exp, state.Money);
    //    state.Exp += 50.0;
    //    state.Money += 50;
    //}
    return 0;
}

int MiniGame::playTypingChallenge()
{
    //state.Energy -= 10; // ���߿� ������ ����
    //printf("���� ������ִ� ���ڿ��� ���� ġ�� �����̾�!n ���ѽð��� 10�� �ٰ�! \n ���ѽð����� �Ȱ��� ���� ���ϸ� ���� �й��!\n");
    //// ���ڿ� ���� ����
    //// �ð����� ����
    ////setTimer �Լ� ����ϱ�
    //
    //// �Է¹ޱ�
    //// ���� ������ ���ڿ��� �Է¹��� ���ڿ� ��
    //// ������ ���� // �����ϸ� �ƹ��͵�

    //if (state.Happiness >= 80) {
    //    state.Exp *= 2;
    //}
    //else if (state.Happiness >= 50) {
    //    state.Exp *= 1.5;
    //}

    //printf("��� ���� �¸���!!! \n");
    //printf("�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�!\n\n", state.Exp, state.Money);
    //state.Exp += 50.0;
    //state.Money += 50;

    return 0;
}

int MiniGame::playReactionTest()
{
    //state.Energy -= 10; // ���߿� ������ ����
    //printf("3~5�� ���� ������ �ð��� ����! �̶�� ���ڰ� �߸� �ƹ� Ű�� ������!\n");
    //// ���� �Լ��� ������ �ð� ����
    //// �ش� �ð��� ������ 
    //// ����! �̶�� ���� ��� �� �ð� ���� ����
    //// �Է°��� ����� �ð� ���� ����
    //// �ð��� 5�� �̳��̸� ���� ����
    //// 
    ////time_t start, finish;
    ////double duration;

    ////start = time(NULL);

    /////*���� �ð��� �����ϰ� ���� �ڵ�*/

    ////finish = time(NULL);

    ////duration = (double)(finish - start);
    ////printf("%f��", duration);


    //if (state.Happiness >= 80) {
    //    state.Exp *= 2;
    //}
    //else if (state.Happiness >= 50) {
    //    state.Exp *= 1.5;
    //}

    //printf("��� ���� �¸���!!! \n");
    //printf("�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�!\n\n", state.Exp, state.Money);
    //state.Exp += 50.0;
    //state.Money += 50;
    return 0;
}
