#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    puts("please enter the string : ");
    gets(str);
    int vowel[5] = {0,0,0,0,0};
    //now calculate the size of the string
    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        ++size;
        ++i;
    }
    //printf("%d",size);

    for (int j = 0; j<size;j++){
        char ch = str[j];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            switch (ch)
            {
            case 'a' :
                vowel[0]++;
                break;
            case 'e' :
                vowel[1]++;
                break;
            case 'i' :
                vowel[2]++;
                break;
            case 'o' :
                vowel[3]++;
                break;
            case 'u' :
                vowel[4]++;
                break;
            default:
                break;
            }
        }
        }
        printf("The occurance of each vowel is : \n");
        printf("a : %d\n",vowel[0]);
        printf("e : %d\n",vowel[1]);
        printf("i : %d\n",vowel[2]);
        printf("o : %d\n",vowel[3]);
        printf("u : %d\n",vowel[4]);

        return 0;
    }
    