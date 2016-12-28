static int globalstatic;
int global;

static int staticfunc (void) 
{
    int staticlocal;
    staticlocal++;
}

int globalfunc (void)
{
    int local;
    local++;
}

