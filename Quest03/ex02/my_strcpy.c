#include <stdio.h>

int my_strcmp(char* param_1, char* param_2){
  for (int i = 0; i < param_1[i]; i++) {
    if (param_1[i] != param_2[i]) {
      return param_1[i] - param_2[i];
    }
  }
  return 0;
}

int main() {
    
    char str1[] = "hello";
    char str2[] = "world";
    
    int result = my_strcmp(str1, str2);
    
    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }
    
    return 0;
}
