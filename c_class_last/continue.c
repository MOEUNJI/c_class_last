#include <stdio.h>
int main(void)
{
	// for����  continue�� ����ؼ� Ȧ���� ����ϱ�
	int continueNum;
	for (continueNum = 0;continueNum <= 10; continueNum++) {
		if (continueNum % 2 == 0) {//continueNum�� ¦������ Ȯ����
			continue;//¦����� �Ʒ� �ڵ�(���)�� �ǳʶٰ� �ٽ� �ݺ� ����
		}
		printf("%d \n", continueNum);
	}

	//while���� continue�� ����ؼ� ¦���� ����ϱ�
	int whileContinue = 0;
	while (whileContinue <= 10) {
		whileContinue++; // ���� ���� ������Ų ��
		if (whileContinue % 2 != 0) {//� ���ڸ� 2�� ���� ���� 0�� �ƴ϶��
			// �� Ȧ����� �̶�� ��
			continue; // Ȧ����� ������ �����ߴٸ� �Ʒ� �ڵ带 �ǳʶ�
		}
		printf("%d \n", whileContinue); //¦���� ��µ�
	}
	return 0;
}