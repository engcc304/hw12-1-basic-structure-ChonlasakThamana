/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/#include <stdio.h>

struct Person {
    char Name[50];
    int Age;
    char Sex;
    float Score;
};

void inputPersonInfo(struct Person* person, char personName) {
    printf("--| Person %c Information |--\n", personName);
    printf("Name : ");
    scanf("%s", person->Name);
    printf("Age : ");
    scanf("%d", &person->Age);
    printf("Sex (M/F) : ");
    scanf(" %c", &person->Sex);
    printf("Score : ");
    scanf("%f", &person->Score);
}

void printPersonInfo(const struct Person* person, char personName) {
    printf("--| Person %c Information |--\n", personName);
    printf("Name : %s (%c)\n", person->Name, person->Sex);
    printf("Age : %d years old\n", person->Age);
    printf("Score : %.2f points", person->Score);
}

int main() {
    struct Person A, B;

    for (char personName = 'A'; personName <= 'B'; personName++) {
        inputPersonInfo(personName == 'A' ? &A : &B, personName);
        printf("\n");
    }

    printPersonInfo(&A, 'A');
    printf("\n");
    printPersonInfo(&B, 'B');

    return 0;
}
