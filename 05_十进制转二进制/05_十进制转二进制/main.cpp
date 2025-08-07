#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS. 1
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    // ������
    if (decimal < 0) {
        printf("-");
        decimal = -decimal;
    }

    // ��ʮ����ת��Ϊ������
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // �����������
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("������һ��ʮ������: ");
    scanf("%d", &num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}