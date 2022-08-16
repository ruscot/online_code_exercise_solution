#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char MESSAGE[101];
    char m_result[101*100];
    int m_result_index = 0;
    int pre = -1;
    scanf("%[^\n]", MESSAGE);
    for(int i = 0; i < 101 && MESSAGE[i] != '\0'; i++){
        int output[7];
        for (int j = 0; j < 7; ++j) {
            output[j] = (MESSAGE[i] >> j) & 1;
        }
        for(int j = 6; j >= 0; j--){
            if(output[j] != pre){
                if(pre != -1){
                    m_result[m_result_index] = ' ';
                    m_result_index++;
                }
                if(output[j] == 1){
                    m_result[m_result_index] = '0';
                    m_result[m_result_index+1] = ' ';
                    m_result_index+=2;
                } else {
                    m_result[m_result_index] = '0';
                    m_result[m_result_index+1] = '0';
                    m_result[m_result_index+2] = ' ';
                    m_result_index+=3;
                }
                pre = output[j];
            }
            m_result[m_result_index] = '0';
            m_result_index++;
        }
    }
    printf("%s\n", m_result);

    return 0;
}
