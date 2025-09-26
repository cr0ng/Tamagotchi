#include "PlayGame.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <windows.h>

const int MAXLEVEL = 5;

// �ΰ� �޴�â, �ٸ���ġ ����â�� ����ϴ� ��

PlayGame::PlayGame()
{

}
std::string TamaName;
int PlayGame::PlayTamagotchi()
{

    TamaState state;

    printf("\n\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");
    printf("\t\t\t\t\t   ����������������������������\n");



    std::string StartORNo;
   
    printf("\n\n\t\t\t\t\t\t\tPlay Tamagotchi Yes or No??  ");
    std::cin >> StartORNo;

    while (!(StartORNo == "No" || StartORNo == "N" || StartORNo == "n" || StartORNo == "NO" || StartORNo == "no" || StartORNo == "Yes" || StartORNo == "YES" || StartORNo == "Y" || StartORNo == "y" || StartORNo == "yes")) {
  
        // ����� �Է��Ҷ�����
        printf("\n\t\t\t\t\t\t\t\tYES OR NO ? ");
        std::cin >> StartORNo;
        
    }
    if (StartORNo == "No" || StartORNo == "N" || StartORNo == "n" || StartORNo == "NO" || StartORNo == "no") {
        printf("\n\t\t\t\t\t\t\t  �ٸ���ġ�� �����մϴ�.\n\n\n\n\n\n\n\n\n\n");
        return 0;
    }
    else if (StartORNo == "Yes" || StartORNo == "YES" || StartORNo == "Y" || StartORNo == "y" || StartORNo == "yes") {
        printf("\n\t\t\t\t\t\t\t   �̸��� �����ּ���! ");
        std::cin >> TamaName;
    }

    if (TamaName == "0125" || TamaName == "980125" || TamaName == "yujin") {
        printf("\t\t\t\t\t�ڡڡڰ����ڸ� �ƴ� ���-��\nt\t\t\t\t�ູ�� �����ְԽ��ڡڡ�");
        Sleep(1500);
        display.EvolutionShow();
    }

    system("cls");
    display.ShowTamaEgg();

    if (state.Level == MAXLEVEL) {
        display.EvolutionShow(); // �ٸ���ġ�� 5������ �Ǿ� ���� ����
    }

    while (state.Level != MAXLEVEL) {
            system("cls");          // �ִ뷹���� �ƴϸ� ����ؼ� �޴�ȭ��� ����â�� �ߴ� ����ȭ���� �����ֵ���
            showStatus(state);
            ShowMenu(state);
    }

    return 0;
}

void PlayGame::ShowMenu(TamaState& state)
{
        printf("\n\t\t\t\t\t\t\t+----------------------+\n");
        printf("\t\t\t\t\t\t\t|      ���� �޴�       |\n");
        printf("\t\t\t\t\t\t\t+----------------------+\n");
        printf("\t\t\t\t\t\t\t|  1.��Ա�            |\n");
        printf("\t\t\t\t\t\t\t|  2.����ֱ�          |\n");
        printf("\t\t\t\t\t\t\t|  3.�Ĵ�              |\n");
        printf("\t\t\t\t\t\t\t|  4.����ϱ�          |\n");
        printf("\t\t\t\t\t\t\t|  5.���ڱ�            |\n");
        //printf("\t\t\t\t\t\t\t|  6.��������          |\n");
        printf("\t\t\t\t\t\t\t+----------------------+\n");

        std::string InputMenu;
        int ChooseMenu;
        while (true) {

            printf("\t\t\t\t\t\t\t������ �Ͻðھ��? (���� : 1) ");
            std::cin >> InputMenu;
            //showStatus(state);

            if (InputMenu.length() == 1) {  // �� ���ڸ� �Էµǵ���
                ChooseMenu = InputMenu[0]-'0'; // -'0' �ϸ� ������ ��ȯ�ȴ�
                if (ChooseMenu >= 1 && ChooseMenu <= 5) {
                    break;
                }
            }
        }

        switch (ChooseMenu)
        {
        case 1:
            system("cls");
            display.ShowEatingTama();
            tama.Eating(TamaName,state.Energy);
            break;
        case 2:
            system("cls");
            display.ShowUsual();
            minigame.ShowMiniGame(state);
            break;
        case 3:
            system("cls");
            display.ShowUsual();
            tama.Restaurant(TamaName,state);
            break;
        case 4:
            system("cls");
            display.BathTama();
            tama.TakeBath(TamaName,state.Clean);
            break;
        case 5:
            if (state.Energy <=20) {
                printf("\n\t\t\t\t\t\t�������� 20 ������ �� �ڸ� �ٸ���ġ�� �ǰ��ؿ�...\n");
                Sleep(800);
            }
            system("cls");
            display.SleepingTama();
            tama.Sleeping(TamaName,state);
            break; 
        default:
            printf("\t\t\t\t�޴� ���� �� ������ �߻��߽��ϴ�. \n");
            break;
        }
}

void PlayGame::showStatus(TamaState& state)
{
    printf("\n");
    if (state.Clean >= 50) {
        display.ShowUsual();
    }
    else {
        display.DirtyTama();
    }
    printf("\n\t\t\t=================================================================================================\n");
    printf("\t\t\t\t\t\t\t     �ڴٸ���ġ ���¡�");
    printf("\n\t\t\t-------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t�ٸ���ġ �̸�: %6s \t\tLV.%d\t\tDAY %3d\n", TamaName.c_str(),state.Level,state.Day);
    if (state.Clean >= 80) {
        printf("\t\t\t  ������ : %3d/100\t�ູ�� : %3d/100\t����ġ : %3.1f\tû�ᵵ : ������    �� : %4d\n", state.Energy, state.Happiness, state.Exp, state.Money);
    }
    else if (state.Clean >= 50) {
        printf("\t\t\t  ������ : %3d/100\t�ູ�� : %3d/100\t����ġ : %3.1f\tû�ᵵ : ������    �� : %4d\n", state.Energy, state.Happiness, state.Exp, state.Money);
    }
    else {
        printf("\t\t\t  ������ : %3d/100\t�ູ�� : %3d/100\t����ġ : %3.1f\tû�ᵵ : ������    �� : %4d\n", state.Energy, state.Happiness, state.Exp, state.Money);
    }
    printf("\t\t\t=================================================================================================\n\n");
}

