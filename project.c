#include<stdio.h>

struct Student {
    int studentID;
    char name[70];
    char major[70];
    char club[70];
};

void printStudent(int studentID, struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].studentID == studentID) {
            printf("이름: %s  전공: %s  동아리: %s\n", students[i].name, students[i].major, students[i].club);
            return;
        }
    }
    printf("4자리 학번을 정확하게 입력 해주세욥!\n");
}

int Daemawiki() {
    struct Student students[] = {
        {0000, "남-승-권-교-장-선-생-님", "principal", "Daedeok_SoftWare_Meister_HighSchool"},
        {1100, "차은정선생님", "WEB Programming", "Teacher"},
        {1101, "권민휘", "?", "?"},
        {1102, "빨간룸메", "BackEnd", "정"},
        {1103, "강민이횽", "Game", "Team. Qss"},
        {1104, "김명진", "BackEnd", "DMS"},
        {1105, "김현성", "Game", "Team. QSS"},
        {1106, "희차니형", "?", "?"},
        {1107, "두재민", "AI", "Modeep"},
        {1108, "부현수", "BackEnd", "INFO"},
        {1109, "오송주", "연준이 룸메", "509호"},
        {1110, "오현규", "league of legend", "woori"},
        {1111, "유하은", "BackEnd", "218호"},
        {1112, "이태규", "?", "?"},
        {1113, "이태윤", "FrontEnd", "Submit"},
        {1114, "220호사는이하윤", "BackEnd", "Submit"},
        {1115, "조영준", "?", "정"},
        {1116, "홍서은", "Android", "정"},
        {1200, "최수장선생님", "C Meister", "Teacher"},
        {1201, "강태양", "BackEnd", "DMS"},
        {1202, "김호선", "FrontEnd", "Dev"},
        {1203, "노승준", "AI", "Modeep"},
        {1204, "파란룸메", "FrontEnd", "Submit"},
        {1205, "서동빈나", "ForntEnd", "Dev"},
        {1206, "안승민", "FrontEnd", "Submit"},
        {1207, "양윤호", "Android", "정"},
        {1208, "유지우", "Flutter", "INFO"},
        {1209, "이강희", "BackEnd", "Submit"},
        {1210, "이Gold규", "Gold", "Woori"},
        {1211, "으지니", "FrontEnd", "RAM"},
        {1212, "이태규", "IOS", "DMS"},
        {1213, "220호사는차은비", "킹 - 갓  정 - 보 - 보 - 안(Web Hacking)", "INFO"},
        {1214, "삐꾸", "Embadded", "NoNamed"},
        {1300, "정은진선생님", "C Meister", "Teacher"},
        {1301, "ZIOS", "BackEnd", "자습"},
        {1302, "김민짜잇", "n/a", "자습"},
        {1303, "기무시여르", "AI", "Modeep"},
        {1304, "ajswldp", "Java", "DLC"},
        {1305, "냄귱윤교", "FrontEnd", "Kodomo"},
        {1306, "으레리", "Android", "DMS"},
        {1307, "웨스트예린", "AI", "Modeep"},
        {1308, "오영재", "undertale", "Dev"},
        {1309, "강은지", "FrontEnd", "민"},
        {1310, "파멸 헤어", "Game", "Team.Qss"},
        {1311, "아기토끼준", "FrontEnd", "Team.Qss"},
        {1312, "이거만든사람", "BackEnd", "NoNamed"},
        {1313, "꽃ㅊ미남이은성", "IOS", "정"},
        {1314, "밴드부유일드럼이은호", "IOS", "INFO"},
        {1315, "컴구 1짱(프론트)", "FrontEnd", "Dev"},
        {1316, "현민조", "Embedded", "NoNamed"}
    };
    int numStudents = sizeof(students) / sizeof(students[0]);

    int studentID;
    printf("학번을 검색해주세욥: ");
    scanf("%d", &studentID);

    printStudent(studentID, students, numStudents);

    return 0;
}

int main(){
    Daemawiki();
    return 0;
}