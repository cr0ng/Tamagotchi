#include "PlayGame.h"
#include <stdio.h>
#include "Tama.h"
#include "MiniGame.h"
#include "Display.h"
#include <string>
#include <iostream>
#include <windows.h>


// �ΰ� �޴�â, �ٸ���ġ ����â�� ����ϴ� ��

PlayGame::PlayGame()
{

}
std::string TamaName;
int PlayGame::PlayTamagotchi()
{

    TamaState state;

    //printf("�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�\n");
    ////printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    ////printf("�����������������������������������������������������������������������\n");
    //printf("�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�\n");

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
  
        // ����� �Է��Ҷ����� - ���ǹ� �����ϱ�
        printf("\n\t\t\t\t\t\t\t\tYES OR NO ? ");
        std::cin >> StartORNo;
        
    }
    if (StartORNo == "No" || StartORNo == "N" || StartORNo == "n" || StartORNo == "NO" || StartORNo == "no") {
        printf("\n\t\t\t\t\t\t\t  �ٸ���ġ�� �����մϴ�.\n\n");
        return 0;
    }
    else if (StartORNo == "Yes" || StartORNo == "YES" || StartORNo == "Y" || StartORNo == "y" || StartORNo == "yes") {
        printf("\n\t\t\t\t\t\t\t   �̸��� �����ּ���!  ");
        std::cin >> TamaName;
    }
    system("cls");
    display.ShowTamaEgg();

    while (state.Level != 5) {
        system("cls");
        showStatus(state);
        ShowMenu(state);
    }
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

        int ChooseMenu;
        printf("\t\t\t\t\t\t\t������ �Ͻðھ��? ");
        std::cin >> ChooseMenu;

        system("cls"); // �ܼ�â ����� ��µǵ��� �ϱ�
   
        showStatus(state);

        switch (ChooseMenu)
        {
        case 1:
            display.ShowEatingTama();
            tama.Eating(TamaName);
       
            break;
        case 2:
            break;
        case 3:
            
            tama.Restaurant(TamaName);
            break;
        case 4:
            display.BathTama();
            tama.TakeBath(TamaName);
            break;
        case 5:
            tama.Sleeping(TamaName);
            break; 
        default:
            printf("�޴� ���� �� ������ �߻��߽��ϴ�. \n");
            break;
        }
 

}

void PlayGame::showStatus(TamaState& state)
{
    printf("\n");
    display.ShowUsual();
    printf("\n\t\t\t   =================================================================================================\n");
    printf("\t\t\t\t\t\t\t   �ڴٸ���ġ ���¡�\n\t\t\t\t\t\t\t      �ٸ���ġ �̸� : %s\n", TamaName.c_str());
    printf("\t\t\t\t      ������ : %d\t�ູ�� : %d\t����ġ : %.1f\tû�ᵵ : %d\t�� : %d\n", state.Energy, state.Happiness,state.Exp, state.Clean, state.Money);
    //printf ( "\t\t\t\t\t\t\t������     :     %d\n" , Energy );
    //printf ( "\t\t\t\t\t\t\t�ູ��     :     %d\n" ,Happiness );
    //printf ( "\t\t\t\t\t\t\t����ġ     :     %.1f\n",Exp );
    //printf ( "\t\t\t\t\t\t\tû�ᵵ     :     %d\n",Clean);
    //printf("\t\t\t\t\t\t\t========================\n");
    printf("\t\t\t   =================================================================================================\n\n");
}


