#include <stdio.h>
 
int main( )		//��%������ȥ��ǰ���������/������ȥ��������� 
{
    long ge,shi,qian,wan,x;
    printf("������ 5 λ���֣�");
    scanf("%ld",&x);
    wan=x/10000;        /*�ֽ����λ*/
    qian=x%10000/1000;  /*�ֽ��ǧλ*/
    shi=x%100/10;       /*�ֽ��ʮλ*/
    ge=x%10;            /*�ֽ����λ*/
    if (ge==wan&&shi==qian) { /*��λ������λ����ʮλ����ǧλ*/
        printf("���ǻ�����\n");
    } else {
        printf("�ⲻ�ǻ�����\n");
    }
}
