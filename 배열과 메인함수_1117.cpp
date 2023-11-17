#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<math.h>
#define SIZE 5
//공간환경학부 3학년 나규원&이준혁 C프로젝트: 지도 좌표계 관리하는 프로그램

struct qgismapprojunctioninformation {
	char mapname[5]; //지도 이름 문자열char 배열
	int EPSGCODE[5]; //지도 좌표계 EPSG 코드값 int 배열
	float projmetadata[5]; //지도 좌표 투영법 메타데이터(가산수치 등)->flaot 실수 배열
	char proj[5]; //지도 투영법 이름(예를들면 메르카토르 도법)-> crs id보다는 이게 더 직관적이라 이름 문자열 char 배열로 구성
} zido[20]; //231117 수업 내용 업데이트-> 포인터를 인덱스처럼 쓸 수 있고, 빠르다 -> 연결 필요


void map_chuga() {} //지도 추가 함수
void findepsg() {} //EPSG 코드값으로 지도 찾는 함수
void findmapname() {} //지도 이름으로 지도 좌표계 찾는 함수
void findproj() {} //투영법 이름 char 찾는 함수
void updatemap() {} //지도 투영법 업데이트하는 함수->ex 가산 수치 변경 등
void deletemap() {} //지도 투영법 삭제하는 함수
void drawproj() {} //지도 정보 찾은 다음에 char proj[] 에서 데이터 불러오는 것에 따라, [x] [y]로 아스키아트로 대략적인 지도 모습 그리는 함수

int main() {
    int choice;
    while (1) {
        printf("프로젝트 좌표계 CRS \n");
        printf("1.지도 정보 추가\n");
        printf("2. EPSG 코드로 지도 찾기\n");
        printf("3. 이름으로 지도 찾기\n");
        printf("4. 투영법으로 지도 찾기\n");
        printf("5. EPSG 코드로 지도 업데이트하기\n");
        printf("6. EPSG 코드로 사용자 지정 지도 삭제하기\n");
        printf("7. CRS 지도좌표계 관리 프로그램 창 닫기\n");
        printf("선택지를 선택하십시오\n");
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