#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
  int count = 0;
  for (int i = 0; param_1[i] != '\0'; i++)
  {
    count = 0;
    for (int j = 0; param_2[j] != '\0'; j++)
    {
      if (param_1[i+j] == param_2[j])
      {
        count++;
      }    
    }
    if (count == strlen(param_2))
    {
        return &param_1[i];
    }
    
  }
  
  return 0;
}

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "world";
    
    char* result = my_strstr(str1, str2);
    
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str1);
    } else {
        printf("Substring not found\n");
    }
    
    return 0;
}