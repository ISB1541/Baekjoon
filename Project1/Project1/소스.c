#include <stdio.h>

main() {
	int i;
	int input[4], cont[4];

	printf("������ �Է� :");
	for (int i = 0; i < 8; i++)
		scanf_s("%d", &input[i]);

	cont[0] = input[0]; //ù��° �׷����ڵ�� ù��° �������� �״�� ����

	for (i = 0; i < 7; i++) {
		if (input[i] == input[i + 1]) {
			cont[i + 1] = 0; //xor����� ������ 0
		}
		else {
			cont[i + 1] = 1; //xor����� �ٸ��� 1

		}
	}
	printf("�׷����ڵ� : ");

	for (int i = 0; i < 8; i++)
		printf("%d ", cont[i]);

	return 0;
}