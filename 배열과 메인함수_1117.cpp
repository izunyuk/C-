#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<math.h>
#define SIZE 5
//����ȯ���к� 3�г� ���Կ�&������ C������Ʈ: ���� ��ǥ�� �����ϴ� ���α׷�

struct qgismapprojunctioninformation {
	char mapname[5]; //���� �̸� ���ڿ�char �迭
	int EPSGCODE[5]; //���� ��ǥ�� EPSG �ڵ尪 int �迭
	float projmetadata[5]; //���� ��ǥ ������ ��Ÿ������(�����ġ ��)->flaot �Ǽ� �迭
	char proj[5]; //���� ������ �̸�(������� �޸�ī�丣 ����)-> crs id���ٴ� �̰� �� �������̶� �̸� ���ڿ� char �迭�� ����
} zido[20]; //231117 ���� ���� ������Ʈ-> �����͸� �ε���ó�� �� �� �ְ�, ������ -> ���� �ʿ�


void map_chuga() {} //���� �߰� �Լ�
void findepsg() {} //EPSG �ڵ尪���� ���� ã�� �Լ�
void findmapname() {} //���� �̸����� ���� ��ǥ�� ã�� �Լ�
void findproj() {} //������ �̸� char ã�� �Լ�
void updatemap() {} //���� ������ ������Ʈ�ϴ� �Լ�->ex ���� ��ġ ���� ��
void deletemap() {} //���� ������ �����ϴ� �Լ�
void drawproj() {} //���� ���� ã�� ������ char proj[] ���� ������ �ҷ����� �Ϳ� ����, [x] [y]�� �ƽ�Ű��Ʈ�� �뷫���� ���� ��� �׸��� �Լ�

int main() {
    int choice;
    while (1) {
        printf("������Ʈ ��ǥ�� CRS \n");
        printf("1.���� ���� �߰�\n");
        printf("2. EPSG �ڵ�� ���� ã��\n");
        printf("3. �̸����� ���� ã��\n");
        printf("4. ���������� ���� ã��\n");
        printf("5. EPSG �ڵ�� ���� ������Ʈ�ϱ�\n");
        printf("6. EPSG �ڵ�� ����� ���� ���� �����ϱ�\n");
        printf("7. CRS ������ǥ�� ���� ���α׷� â �ݱ�\n");
        printf("�������� �����Ͻʽÿ�\n");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1:
            map_chuga();
            break;
        case 2:
            findepsg();
            break;
        case 3:
            findmapname();
            break;
        case 4:
            findproj();
            break;
        case 5:
            updatemap();
            break;
        case 6:
            deletemap();
            break;
        case 7:
            exit(0);
            break;
        }
    }
}