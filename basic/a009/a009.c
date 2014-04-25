/**********************************************************************************/
/*  Problem: a009 "解碼器" from ACM 458                                        */
/*  Language: C (409 Bytes)                                                       */
/*  Result: AC(0ms, 260KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-12-07 11:38:58                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int main()
{
    char input[512];
    int k = '1' - '*';
    int length = 0;
    int i = 0;
    
    memset(input, 0, 512);
    
    while (scanf("%s", input) != EOF)
    {
        length = strlen(input);
        
        for (i = 0; i < length; i++)
        {
            input[i] -= k;
        }
        
        printf("%s\n", input);
    }
    
    return 0;
}
