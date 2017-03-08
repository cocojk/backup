#include <stdio.h>

#define to_cpumask(bitmap) ((struct cpumask*)(bitmap))
#define cpumask_bits(maskp) ((maskp)->bits)
#define BITS_PER_LONG 8
#define BIT_MASK(nr)		(1UL << ((nr) % BITS_PER_LONG))
#define BIT_WORD(nr)		((nr) / BITS_PER_LONG)

typedef struct cpumask {unsigned long bits [1];} cpumask_t;

static unsigned long cpu_possible_bits [1];

const struct cpumask* const cpu_possible_mask = to_cpumask(cpu_possible_bits);

static inline void set_bit (int nr, volatile unsigned long *addr)
{
	unsigned long mask = BIT_MASK(nr);
	unsigned long *p = ((unsigned long *)addr) + BIT_WORD(nr);
	unsigned long flags;

	*p  |= mask;
}
    

static inline void cpumask_set_cpu (unsigned int cpu, struct cpumask* dstp)
{
    set_bit(cpu,cpumask_bits(dstp));
}

int main (void)
{
    printf("cpu_possible_bits = %x\n",cpu_possible_bits[0]);
    printf("cpu_possible_mask = %x\n",cpu_possible_mask->bits[0]);

    cpumask_set_cpu(0,to_cpumask(cpu_possible_bits));

    *(unsigned long*)(cpu_possible_mask) |= 2;
    printf("cpu_possible_bits = %x\n",cpu_possible_bits[0]);
    printf("cpu_possible_mask = %x\n",cpu_possible_mask->bits[0]);
}

