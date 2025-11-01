#include <stdio.h>
#include <string.h>
//feature / mission + first half commit
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
	// conflict 발생.. (아래 2줄) -> 합치는 걸로 수정)
	// feature/mission _ first commit
        printf("hello i'm master");
    }
}

int main() {
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    reverse(text);
    printf("Reversed: %s\n", text);

    return 0;
}
