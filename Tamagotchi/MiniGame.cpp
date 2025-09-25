#include "MiniGame.h"
#include "PlayGame.h"
#include <random>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "Display.h"
#include "Tama.h"
#include <cstdio>
#include <string>

// �̴ϰ��� ��Ƶδ� ��
Display d;
MiniGame miniGame;
Tama tama;

enum ChamCham {
    Left = 0,
    Right
};

struct GAMEREWARDS {
    const int CharmEnergyLoss = 10;
    const float ChamExpReward = 10.0;
    const int ChamMoneyReward = 10;
    const int ChamHappyReward = 5;
    const int ChamCleanLoss = 10;

    const int TypingEnergyLoss = 15;
    const float TypingExpReward = 20.0;
    const int TypingMoneyReward = 20;
    const int TypingHappyReward = 5;
    const int TypingCleanLoss = 20;

    //const int ReactionEnergyLoss = 20;
    //const float ReactionExpReward = 40.0;
    //const int ReactionMoneyReward = 40;
    //const int ReactionHappyReward = 5;
    //const int ReactionCleanLoss = 30;      

    const int TreasureEnergyLoss = 30;

    const int FailReward = 5;
};
GAMEREWARDS reward;

    char WhichGame = ' '; // int �� �ߴ��� �Է¹��� �� ���ڰ� �ԷµǸ� ���ѷ����� ������ char�� ��ħ

void MiniGame::ShowMiniGame(TamaState& state)
{    
    WhichGame = ' ';
    system("cls");
    d.ShowUsual();
    while (WhichGame != '4') {
        printf("\n\t\t\t\t\t\t+----------------------------------+\n");
        printf("\t\t\t\t\t\t|             ���� �޴�            |\n");
        printf("\t\t\t\t\t\t+----------------------------------+\n");
        printf("\t\t\t\t\t\t|      ���� ���� Ƚ�� : %d��        |\n", state.GameLimit);
        printf("\t\t\t\t\t\t|  1. ������ (-10 ������)          |\n");
        printf("\t\t\t\t\t\t|  2. Ű���� ����ġ�� (-15 ������) |\n");
        printf("\t\t\t\t\t\t|  3. ���� ã�� (-30 ������)       |\n");
        printf("\t\t\t\t\t\t|  4. ���� ����                    |\n");
        printf("\t\t\t\t\t\t+----------------------------------+\n");
        printf("\t\t\t\t\t���� ������ �Ͻðھ��? ");
        std::cin >> WhichGame;

        while (!(WhichGame == '1' || WhichGame == '2' || WhichGame == '3' || WhichGame == '4')) {
            printf("\t\t\t\t\t�׷� ������ �����! \n");
            printf("\t\t\t\t\t���� ������ �Ͻðھ��? ");
            std::cin >> WhichGame;
        }

        switch (WhichGame) {
        case '1':
        {
            if (state.GameLimit > 0) {
                if (state.Energy >= reward.CharmEnergyLoss) {
                    state.GameLimit--;
                    playChamChamCham(state);
                }
                else {
                    printf("\t\t\t\t�������� �����ؼ� ������ �� �� ����..!\n");
                }
            }
            else
            {
                printf("\t\t\t\t���� Ƚ���� ��� �����ؼ� ����� �� ����...\n\t\t\t\t�ٸ���ġ�� ���� ���� Ƚ���� �ʱ�ȭ ��!\n");
            }
        }
        break;
        case '2':
        {
            if (state.GameLimit > 0) {
                if (state.Energy >= reward.TypingEnergyLoss) {
                    state.GameLimit--;
                    playTypingChallenge(state);
                }
                else {
                    printf("\t\t\t\t�������� �����ؼ� ������ �� �� ����..!\n");
                }
            }
            else
            {
                printf("\t\t\t\t���� Ƚ���� ��� �����ؼ� ����� �� ����...\n\t\t\t\t�ٸ���ġ�� ���� ���� Ƚ���� �ʱ�ȭ ��!\n");
            }
        }
        break;
        case '3':
        {
            if (state.GameLimit > 0) {
                if (state.Energy >= reward.TreasureEnergyLoss) {
                    state.GameLimit--;
                    playTreasureHunt(state);
                }
                else {
                    printf("\t\t\t\t�������� �����ؼ� ������ �� �� ����..!\n");
                }
            }
            else
            {
                printf("\t\t\t\t���� Ƚ���� ��� �����ؼ� ����� �� ����...\n\t\t\t\t�ٸ���ġ�� ���� ���� Ƚ���� �ʱ�ȭ ��!\n");
            }
        }
        break;
        default:
            break;
        }
    }
    
}
void WhenLevelUp(TamaState& state) {
    // ����ġ ������� ��������Ű��
    if (state.Exp >= 50.0f && state.Level == 1) {
        system("cls");
        d.LevelUp();
        printf("\t\t\t\t\t�ٸ���ġ�� 2������ �Ǿ����!!!\n");
        Sleep(1000);
        state.Level++;
        state.Exp = 0;
        state.Energy += 20;
        state.Money += 20;

        WhichGame = '4';
    }
    else if (state.Exp >= 80.0f && state.Level == 2)
    {
        system("cls");
        d.LevelUp();
        printf("\t\t\t\t\t�ٸ���ġ�� 3������ �Ǿ����!!!\n");
        Sleep(1000);
        state.Level++;
        state.Exp = 0;
        state.Energy += 20;
        state.Money += 30;
        //miniGame.ShowMiniGame(state);

        WhichGame = '4';
        
    }
    else if (state.Exp >= 120.0f && state.Level == 3)
    {
        system("cls");
        d.LevelUp();
        printf("\t\t\t\t\t�ٸ���ġ�� 4������ �Ǿ����!!!\n");
        Sleep(1000);
        state.Level++;
        state.Exp = 0;
        state.Energy += 20;
        state.Money += 40;

        WhichGame = '4';

    }
    else if (state.Exp >= 150.0f && state.Level == 4)
    {
        system("cls");
        d.LevelUp();
        printf("\t\t\t\t\t�ٸ���ġ�� 5������ �Ǿ����!!!\n");
        d.EvolutionShow(); // �ٸ���ġ�� 5������ �Ǿ� ���� ����

        WhichGame = '4';

    }

}
float RewardExp = 0.0f;
int MiniGame::playChamChamCham(TamaState& state)
{

    int PlayTime = 3;
    //�������� �� 3�� �����ؼ� ���� ����
    std::string PlayersHand;
    int WinCount = 0;

    state.Energy -= reward.CharmEnergyLoss; 
    state.Energy = tama.LimitState(state.Energy);
    state.Happiness += reward.ChamHappyReward;
    state.Happiness = tama.LimitState(state.Happiness);
    state.Clean -= reward.ChamCleanLoss;
    state.Clean = tama.LimitState(state.Clean);

    system("cls");
    d.ShowUsual();
    printf("\n\t\t\t\t\t�������� �����Ұ�!\n\n\t\t\t\t\t������ �� %d�� �����̾� \n", PlayTime);
    printf("\t\t\t\t\t�ٸ���ġ�� �� ���� ���� ���߸� �¸���!! \n\t\t\t\t\t�����̸� L �������̸� R�� �Է�����!\n");
    printf("\t\t\t\t\t������~! ");
    std::cin >> PlayersHand;

    while (!(PlayersHand == "L" || PlayersHand == "l" || PlayersHand == "R" || PlayersHand == "r")) {
        printf("\t\t\t\t\t�����̸� L �������̸� R�� �Է�����!\n");
        printf("\t\t\t\t\t������~! ");
        std::cin >> PlayersHand;
    }

    while (PlayTime > 0) {

        // ������ �Ӹ� ����
        int Direction = rand() % 2;
        // 0�̸� ���� 1�̸� ������
      
        if (Direction == 0) {
            //������ ���
            system("cls");
            d.ChamChamChamLeft();
            if (PlayersHand == "L" || PlayersHand == "l") {
                printf("\n\t\t\t\t\t\t\t�ʰ� �����!! \n");
                WinCount++;
            }
            else {
                printf("\n\t\t\t\t\t\t\t�� �����.. \n");
            }
        }
        else {
            //�������� ���
            system("cls");
            d.ChamChamChamRight();
            if (PlayersHand == "R" || PlayersHand == "r") {
                printf("\n\t\t\t\t\t\t\t�ʰ� �����!! \n");
                WinCount++;
            }
            else {
                printf("\n\t\t\t\t\t\t\t�� �����.. \n");
            }
        }
            PlayTime--;
            if (PlayTime > 0) {
                printf("\t\t\t\t\t\t\t������~! ");
                std::cin >> PlayersHand;
            }
    }
    
    if (WinCount >= 2) {
      
        printf("\n\t\t\t\t\t��� �ʰ� �� ���� ���缭 ���� �¸���!!! \n");
        if (state.Happiness >= 80) {
            RewardExp = (reward.ChamExpReward * 2);
        }
        else if (state.Happiness >= 50) {
            RewardExp += (reward.ChamExpReward * 1.5);
        }
        else {
            RewardExp = reward.ChamExpReward;
        }
        printf("\t\t\t\t\t�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�!\n\n" , RewardExp, reward.ChamMoneyReward);
        //state.Exp += 50; // �׽�Ʈ�� ����
        state.Exp += RewardExp; 
        state.Money += reward.ChamMoneyReward;
        Sleep(1000);
        WhenLevelUp(state);
        
    }
    else {
        printf("\n\t\t\t\t\t������ ���� �� ���缭 ���� �й�ߤ̤̤� \n");
        printf("\t\t\t\t\t�׷��� ��������� %d��ŭ�� ���� �ٰ�!\n\n", reward.FailReward);
        state.Money += reward.FailReward;
    }
   
    return 0;
}

int MiniGame::playTypingChallenge(TamaState& state)
{
    state.Energy -= reward.TypingEnergyLoss;
    state.Energy = tama.LimitState(state.Energy);
    state.Happiness += reward.TypingHappyReward;
    state.Happiness = tama.LimitState(state.Happiness);
    state.Clean -= reward.TypingCleanLoss;
    state.Clean = tama.LimitState(state.Clean);

    system("cls");
    d.TypingTama();

    bool PlayerWin = true; 

    const int StringSize = 10; 
    char RandomString[StringSize+1]; // ���� ���ڿ��� ���� �迭 // 10���������� ������ \0�� ����
    char InputTyping[StringSize+1];

    // �ʹ� ������� 10�� ���� ���ٷ� �̤̤�
    //printf("\t\t\t\t\t���� ������ִ� ���ڿ��� ���� ġ�� �����̾�!n ���ѽð��� 10�� �ٰ�! \n\t\t\t\t\t���ѽð����� �Ȱ��� ���� ���ϸ� ���� �й��!\n"); 
    // �ð����� ����
    //setTimer �Լ� ����ϱ�

    printf("\n\t\t\t\t\tŰ���� ����ġ�⸦ �����Ұ�!\n\n");
    printf("\t\t\t\t\t\t���� ������ִ� ���ڿ��� ���� ġ�� �����̾�!\n\t\t\t\t\t�Ȱ��� ���� ���ϸ� ���� �й��!\n");
    printf("\n\t\t\t\t\t\t���� : ");
    for (int i = 0; i < StringSize;i++) {
        RandomString[i] = rand() % 25 + 65; // �빮�ڸ� ������ ���� ���ڿ� ����
        printf("%c", RandomString[i]);
    }
    RandomString[StringSize] = '\0';

    printf("\n\n");

    // �Է¹ޱ�
    printf("\t\t\t\t\t\t���� ��!! : ");
    std::cin >> InputTyping;
 
    // ���� ������ ���ڿ��� �Է¹��� ���ڿ� ��
    for (int n = 0; n < StringSize; n++) {
            if (RandomString[n] != InputTyping[n])
            {
                PlayerWin = false;
                break;
            }
    }
    
    if (PlayerWin) {

        printf("\n\n\t\t\t\t\t\t�Ȱ��� ������! ���� �¸���!!!! \n");
        if (state.Happiness >= 80) {
            RewardExp = (reward.TypingExpReward * 2);
        }
        else if (state.Happiness >= 50) {
            RewardExp += (reward.TypingExpReward * 1.5);
        }
        else {
            RewardExp = reward.TypingExpReward;
        }
        printf("\t\t\t\t\t\t�������� �ʿ��� %.1f��ŭ�� ����ġ�� %d��ŭ�� ���� �ٰ�!\n\n", RewardExp, reward.TypingMoneyReward);
        //state.Exp += 50; // �׽�Ʈ�� ����
        state.Exp += RewardExp;
        state.Money += reward.TypingMoneyReward;
        Sleep(1000);
        WhenLevelUp(state);

    }
    else {
        printf("\n\n\t\t\t\t\t\t�Ȱ��� �� �Ἥ ���� �й�ߤ̤̤� \n");
        printf("\t\t\t\t\t\t�׷��� ��������� %d��ŭ�� ���� �ٰ�!\n\n", reward.FailReward);
        state.Money += reward.FailReward;
    }

    return 0;
}

int MiniGame::playTreasureHunt(TamaState& state)
{
    system("cls");
    d.TresureHunt();
    state.Energy -= reward.TreasureEnergyLoss;
    state.Energy = tama.LimitState(state.Energy);

    int LimitMove = rand() & 4 + 2; // ������ ����ã�� ��ġ 2 ~ 6
    int PlayerMove = 0; // �÷��̾ �̵��� Ƚ��
    int RandomEvent = -1; // �̵� �� �߻��ϴ� ���� �ִ� ���� ������ �̺�Ʈ
    int RandomEvent2 = -1; // ���� ������ Ȯ���غ������� ������ �̺�Ʈ
    int RandomTreasureEvent = 0; // �������� ����
    int PlayerSelect = -1; // �̵��ϱ�, �׸��α� �ൿ
    int PlayerSelect2 = -1; // ���𰡸� �����, �׸��α� �ൿ

    printf("\n\t\t\t\t\t\t����ã�� �ð�~!!!\n");
    while (LimitMove > PlayerMove || PlayerSelect!= 0) {
        printf("\t\t\t\t\t\t�̵��Ϸ��� 1, �׸��η��� 0�� �Է����� ");
        std::cin >> PlayerSelect;

        while (PlayerSelect != 1 && PlayerSelect != 0) {
            printf("\t\t\t\t\t\t�̵��Ϸ��� 1, �׸��η��� 0�� �Է����� ");
            std::cin >> PlayerSelect;
        }
       
        RandomTreasureEvent = rand() % 3 + 1;
        int RandomReward = rand() % 40 + 10; // �������ڸ� �������� 10~50 ������ ����ġ �Ǵ� ���� �� ����

       if (PlayerSelect == 1) {
            printf("\t\t\t\t\t\t�ٸ���ġ�� �̵����̾�..!\n");
            PlayerMove++;
            if (PlayerMove == LimitMove) {
                // ������ �ִ� ��ġ
                printf("\t\t\t\t\t\t���� ���ڸ� �߰��߾�!!!!\n");
                printf("\t\t\t\t\t\t���� ���ڸ� ����� ");
                switch (RandomTreasureEvent) {
                case 1:
                {
                    printf("%d�� ����ġ�� ���Ծ�!!!!\n", RandomReward);
                    state.Exp += RandomReward;
                    Sleep(1000);
                    return 0;
                }
                break;
                case 2:
                {
                    printf("%d�� ���� ���Ծ�!!!!\n", RandomReward);
                    state.Money += RandomReward;
                    Sleep(1000);
                    return 0;
                }
                    break;
                case 3:
                {
                    printf("�ƹ��͵� ����.....!\n\t\t\t\t\t\t���� ��ȸ�� �������...!\n");
                    Sleep(1000);
                    return 0;
                }
                    break;
                default:
                    break;
                }
            }
            else {
                // ���� ��
                RandomEvent = rand() % 2 + 1;
                int SmallReward = rand() % 5 + 5; // 5~10 ������ �濡�� �ݴ� �ڱ׸��� ����
                switch (RandomEvent) {
                case 1:
                {
                    printf("\t\t\t\t\t\t�ƹ��͵� ����..!\n");
                }
                break;
                case 2:
                {
                    RandomEvent2 = rand() % 7 + 1;
                    printf("\t\t\t\t\t\t���𰡰� �ִ�..!\n");
                    printf("\t\t\t\t\t\t������� 1��, �����Ϸ��� 2�� : ");
                    std::cin >> PlayerSelect2;
                   
                    if (PlayerSelect2 == 1) {
                        switch (RandomEvent2) {
                        case 1:
                        { 
                            printf("\t\t\t\t\t\t��ֹ� ���� �ֿ���!!!!..! + �� %d\n", SmallReward);
                            state.Money += SmallReward;
                        }
                        break;
                        case 2:
                        {
                            printf("\t\t\t\t\t\t�Ϳ��� ����̸� ���Ҵ�!! + �ູ %d \n", SmallReward);
                            state.Happiness += SmallReward;
                        }
                        break;
                        case 3:
                        {
                            printf("\t\t\t\t\t\t�ÿ��� ȣ���� ���Ҵ� �����غ���?! + û�ᵵ %d \n", SmallReward);
                            state.Clean += SmallReward;
                        }
                        break;
                        case 4:
                        {
                            printf("\t\t\t\t\t\t��.. ���̾��ݾ�.....  - û�ᵵ %d \n", SmallReward);
                            state.Clean -= SmallReward;
                            if (state.Clean < 0) {
                                state.Clean = 0;
                            }
                        }
                        break;
                        case 5:
                        {
                            printf("\t\t\t\t\t\t�ϼ����� ���� ��Ʈ�Ⱦ�... - �� %d \n", SmallReward);
                            state.Money -= SmallReward;
                            if (state.Money < 0) {
                                state.Money = 0;
                            }
                        }
                        break;
                        case 6:
                        {
                            printf("\t\t\t\t\t\t������ ���Ҿ�... ��� ���� - �ູ %d \n", SmallReward);
                            state.Happiness -= SmallReward;
                            if (state.Happiness < 0) {
                                state.Happiness = 0;
                            }
                        }
                        break;
                        case 7:
                        {
                            printf("\t\t\t\t\t\t�ڼ��� ���� �ƹ��͵� ������.. \n");
                        }
                        break;
                        default:
                            break;
                        }
                    }
                    else if (PlayerSelect2 == 0) {
                        break;
                    }
                }
                    break;
                default:
                    break;
                }
            }
           
           
        }
        else if (PlayerSelect == 0)
        {
            break;
        }
    }


    return 0;
}

//int MiniGame::playReactionTest(TamaState& state)
//{
//    //state.Energy -= 10; // ���߿� ������ ����
//    //printf("3~5�� ���� ������ �ð��� ����! �̶�� ���ڰ� �߸� �ƹ� Ű�� ������!\n");
//    // ���� �Լ��� ������ �ð� ����
//    // �ش� �ð��� ������ 
//    // ����! �̶�� ���� ��� �� �ð� ���� ����
//    // �Է°��� ����� �ð� ���� ����
//    // �ð��� 5�� �̳��̸� ���� ����
//
//    ///*���� �ð��� �����ϰ� ���� �ڵ�*/
//
//    return 0;
//}
