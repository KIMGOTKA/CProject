#include <stdio.h>
//string: ���ڿ�(char���� �ٿ�����)
#include<string.h>
//include<string.h>: ���ڿ� ���� �Լ�/��ɵ��� ����
//include <stdio.h>: �Է� �� ��°��� ��ɵ��� ����
int main2() {
	char good[] = "good!";  //6ĭ
	char* bad = "bad!";     //5ĭ

	printf("1: %s %s\n", good, bad);  //good!bad!

	//�迭�θ��� ���ڿ�
	good[0] = 'H';
	//good = "New good!";  //������ ����(�迭���ڿ��� �ϰ����� �Ұ���)


	//�����ͷ� ���� ���ڿ�
	bad = "New Bad!";
	//bad[0] = 's';  //�����͹��ڿ� �������� �Ұ���
	//�̰� ������ ��µǳ� ���� �ù�?
	
	printf("2: %s %s\n", good, bad); //��� �����ϰ� ����:Hood!New Bad!
	//��� �־Ȥ����� �ù�

	//����205
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50] = { 0 };
	char str4[50] = { 0 };
	
	//���ڿ� ���� ���ϱ�
	int str1_len = strlen(str1); //str1�� ���� ������ �˷���
	int str2_len = strlen(str2); //str1�� ���� ������ �˷���(������ null/\0����)

	printf("str1�� ����: %d, str2�� ����:%d\n", str1_len, str2_len);

	//���ڿ� ����
	strcpy(str3, str1);  //strcpy(������, �ҽ�);
	printf("%s\n", str3);
    // ���ϴ� ������ ����
	strncpy(str4, str1, 5);//strcpy(������, �ҽ�, ����);
	printf("%s\n", str4);
	
	//sprintf:printf ���·� ����
	sprintf(str4, "���� ���ϴ� ���ڿ�: %s", str1);
	// = sprintf(str4, " %s", str1);
	printf("%s\n", str4);

	char str5[50]="Michael";
	char str6[50]="Michael";

	//���ڿ� �̾���̱� strcat
	strcat(str5,"Bolton"); //������ �ڿ� �ܾ����
	printf(" %s\n", str5);

	strncat(str6, "Jackson Five", 7);
	printf(" %s\n", str6);

	//strcmp: �� ���ڿ��� ��/���ڿ��� ==�� �ȵ�. ���ٸ� 0�̶�� �˷���
	if (strcmp("�ȳ�", "�ȳ�3") == 0) {
		printf("����");
	}
	else {
		printf("�ٸ���\n");
	}
	//str5, str6��
	printf("�񱳰��: %d\n", strcmp(str5, str6));//�ٸ���
	
	//str5, str6�� 7���ڸ� ��
	printf("�񱳰��: %d\n", strncmp(str5, str6,7));//����


	printf("str6�� �Է�>>");
	scanf("%[^\n]s", str6);  //scanf�� ������� �Է�
	printf("�񱳰��: %d\n", strcmp(str5, str6));

	return 0;
}