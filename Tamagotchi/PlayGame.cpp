#include "PlayGame.h"
#include <stdio.h>
#include "Tama.h"
#include "MiniGame.h"
#include <string>
#include <iostream>

PlayGame::PlayGame()
{

}

int PlayGame::PlayTamagotchi()
{
    printf("�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�\n");
    //printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    printf("�����������������������������������������������������������������������\n");
    //printf("�����������������������������������������������������������������������\n");
    printf("�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�\n");

    std::string StartORNo;
    std::string TamaName;
    printf("\n\n\t\t\t\t\t\t\tPlay Tamagotchi Yes or No??  ");
    std::cin >> StartORNo;

    while (!(StartORNo == "No" || StartORNo == "N" || StartORNo == "n" || StartORNo == "NO" || StartORNo == "Yes" || StartORNo == "YES" || StartORNo == "Y" || StartORNo == "y")) {
  
        // ����� �Է��Ҷ����� - ���ǹ� �����ϱ�
        printf("\n\n\t\t\t\t\t\t\tCHOOSE ONLY YES OR NO!!!");
        std::cin >> StartORNo;
        
    }
    if (StartORNo == "No" || StartORNo == "N" || StartORNo == "n" || StartORNo == "NO") {
        printf("\n\t\t\t\t\t\t\t\t�ٸ���ġ�� �����մϴ�.\n\n");
        return 0;
    }
    else if (StartORNo == "Yes" || StartORNo == "YES" || StartORNo == "Y" || StartORNo == "y") {
        printf("\t\t\t\t\t\t\t   �̸��� �����ּ���!  ");
        std::cin >> TamaName;
    }

    showStatus(100, 100, 90.0, 100, 20);
    ShowMenu();
}

void PlayGame::ShowMenu()
{
    printf("\t\t\t\t\t\t\t+----------------------+\n");
    printf("\t\t\t\t\t\t\t|      ���� �޴�       |\n");
    printf("\t\t\t\t\t\t\t+----------------------+\n");
    printf("\t\t\t\t\t\t\t|  1.��Ա�            |\n");
    printf("\t\t\t\t\t\t\t|  2.����ֱ�          |\n");
    printf("\t\t\t\t\t\t\t|  3.����              |\n");
    printf("\t\t\t\t\t\t\t|  4.����ϱ�          |\n");
    printf("\t\t\t\t\t\t\t|  5.���ڱ�            |\n");
    //printf("\t\t\t\t\t\t\t|  6.��������          |\n");
    printf("\t\t\t\t\t\t\t+----------------------+\n");

}

void PlayGame::showStatus(int Energy, int Happiness, float Exp, int Clean, int Money)
{
    printf("\n\t\t   =================================================================================================\n");
    printf("\t\t\t\t\t\t\t   �ڴٸ���ġ ���¡�\n\t\t\t\t      ������ : %d\t�ູ�� : %d\t����ġ : %.1f\tû�ᵵ : %d\t�� : %d\n", Energy, Happiness, Exp, Clean, Money);
    //printf ( "\t\t\t\t\t\t\t������     :     %d\n" , Energy );
    //printf ( "\t\t\t\t\t\t\t�ູ��     :     %d\n" ,Happiness );
    //printf ( "\t\t\t\t\t\t\t����ġ     :     %.1f\n",Exp );
    //printf ( "\t\t\t\t\t\t\tû�ᵵ     :     %d\n",Clean);
    //printf("\t\t\t\t\t\t\t========================\n");
    printf("\t\t   =================================================================================================\n\n");
}
