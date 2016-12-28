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
	.file	"test.c"
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	ldr	r3, [fp, #-8]
	mov	r2, #1
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #2
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #3
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #4
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #5
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #6
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #7
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #8
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #9
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	mov	r2, #10
	str	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #0]
	mov	r0, r3
	add	sp, fp, #0
	ldmfd	sp!, {fp}
	bx	lr
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.7.3-12ubuntu1) 4.7.3"
	.section	.note.GNU-stack,"",%progbits
