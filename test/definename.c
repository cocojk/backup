#include <stdio.h>

typedef struct {
    int voltage;
    const char name [20];
} node;

/* char 변수 parameter로 설정 */
#define DEFINE_NODE(x) node x = __CREATE_NODE(x)
#define __CREATE_NODE(x) (node) { .name = #x, .voltage = 1}

/* 변수 이름 지정 */
#define DEFINE_VAR(x) static int _var_##x

static DEFINE_NODE (node1);
DEFINE_VAR(hi);


int main (void)
{
    _var_hi++;

    printf("%s %d\n",node1.name,_var_hi);

}
