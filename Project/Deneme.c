#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
		char uName[20];
    char pasWord[20];
    char ch;
    char search_string[100];
    int i= 0;
    	printf(" \t  \t  \t \t WElCOME TO CANKAYA UNIVERSITY STUDENT GRADING SYSTEM\n");
	    printf("Please enter your username:\n");
				printf("\t  USERNAME:");
				scanf("%s",&search_string);


    FILE *file;
    int count = 1;
    const char file_name[50] = "students.txt";

    file = fopen(file_name, "r");

    if (file == NULL)
    {
        printf("\nUnable to read the file: %s", file_name);
        return -1;
    }

    char line[100];
    char *token = NULL;
    char split[2] = " ";


    while (fgets(line, sizeof(line), file))
    {
        token = strtok(line, split);

        while (token != NULL)
        {
            if (strcmp(token, search_string) == 0)
            {
                printf("Found '%s' in Line-%d", search_string, count);
            }
            token = strtok(NULL, split);
        }
        count++;
    }

    fclose(file);

/*id determineLetterGrades(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        for (int j = 0; j < MAX_GRADES; ++j) {
            if (students[i].grades[j] >= 90) {
                printf("AA ");
            } else if (students[i].grades[j] >= 80) {
                printf("BB ");
            } else if (students[i].grades[j] >= 70) {
                printf("CB ");
            } else if (students[i].grades[j] >= 60) {
                printf("DC ");
            } else if (students[i].grades[j] >= 50) {
                printf("FD ");
            } else {
                printf("FF ");
            }
        }
        printf("\n");
    }
}*/






    }







