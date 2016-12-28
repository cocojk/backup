	.arch armv5t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"Helloworld.c"
	.section	.rodata
	.align	2
.LC1:
	.ascii	" %s \000"
	.align	2
.LC0:
	.ascii	"Hello world\000"
	.text
	.align	2
	.global	hello
	.type	hello, %function
hello:
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #24
	ldr	r3, .L4
	ldr	r3, [r3, #0]
	str	r3, [fp, #-8]
	ldr	r2, .L4+4
	sub	r3, fp, #20
	ldmia	r2, {r0, r1, r2}
	stmia	r3, {r0, r1, r2}
	sub	r3, fp, #20
	str	r3, [fp, #-24]
	ldr	r0, .L4+8
	ldr	r1, [fp, #-24]
	bl	printf
	ldr	r3, .L4
	ldr	r2, [fp, #-8]
	ldr	r3, [r3, #0]
	cmp	r2, r3
	beq	.L3
	bl	__stack_chk_fail
.L3:
	sub	sp, fp, #4
	ldmfd	sp!, {fp, pc}
.L5:
	.align	2
.L4:
	.word	__stack_chk_guard
	.word	.LC0
	.word	.LC1
	.size	hello, .-hello
	.ident	"GCC: (Ubuntu/Linaro 4.7.3-12ubuntu1) 4.7.3"
	.section	.note.GNU-stack,"",%progbits
