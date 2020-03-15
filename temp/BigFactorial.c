#include <stdio.h>
#include <string.h>
int main()
{
    int fact[20001]; // 存储每次的阶乘值Factorial，（倒序，从左到右：个位->最高位）
    int factSum[20001];  // 存储阶乘和，（倒序，从左到右：个位->最高位）
    memset(fact, 0, sizeof(fact));  // 整个数组置零
    memset(factSum, 0, sizeof(factSum));

    //temp每次算阶乘时每一位的乘积值，digit每次阶乘的位数，sumdigit每次阶乘和的位数
    int temp, digit, sumdigit;
    int n, i, j, k;

    scanf("%d", &n);  // 读入求和尾部
    fact[0] = 1;  // 从1开始乘
    factSum[0] = 1;  //从1开始累加
    digit = 1;  // 位数从第一位开始
    sumdigit = 1;

    printf("本次阶乘i | 本次阶乘值 | 本次阶乘和\n");

    // 遍历阶乘值并求和
    for (i = 2; i <= n; i++){
        printf("i=%d | ", i);
        /* 此处计算一次的阶乘
         * 在上一次的基础上乘即可得到
         * 比如 3！= 2！* 3
         */
        int carry = 0;  // 进位
        for (j = 0; j < digit; j++){
            temp = fact[j] * i + carry; //将一个数的每一位数都分别乘以i，
            fact[j] = temp % 10;        //将一个数的每一位数利用数组进行储存
            carry = temp / 10;
        }
        // 如果有进位，继续存进位
        while (carry){ //判断退出循环后，carry的值是否为0
            fact[digit] = carry % 10; //继续储存
            carry = carry / 10;
            digit++;
        }
        // 输出这次阶乘的值，因为是倒序存的，所以要倒着输出
        for (j = digit - 1; j >= 0; j--){
            printf("%d", fact[j]);
        }

        /* 此处计算阶乘和
         * =(上一次的阶乘和)+(这次的阶乘值)
         */
        if(digit > sumdigit){  // 判断相加后的最大位数
            sumdigit = digit;
        }
        // 逐位相加
        for(k = 0; k < sumdigit; k++){
            temp = factSum[k] + fact[k] + carry;
            factSum[k] = temp % 10;
            carry = temp / 10;
        }
        // 有进位要继续进位
        if(carry){
            factSum[digit] = carry;
            sumdigit++;
        }
        // 输出这次阶乘和的值，因为是倒序存的，所以要倒着输出
        printf(" | ");
        for (j = sumdigit - 1; j >= 0; j--){
            printf("%d", factSum[j]);
        }
        printf("\n");        
    }

    // 输出最终值
    printf("最终结果为：");
    for (i = sumdigit - 1; i >= 0; i--){
        printf("%d", factSum[i]);
    }
    printf("\n");
    return 0;
}