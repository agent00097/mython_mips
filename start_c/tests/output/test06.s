	.text
countdown:
	.data
	.align 2  # NOTE: alignemt 2^2 = 4
 countdown_RA: .word 0
	.text
		# Prolog
	sw $ra,countdown_RA  # save return address
		# End Prolog

	.data
	.align 2
countdown_a: .word 0 
my_string0:	.asciiz	"this::"
	.text
	la $t0,my_string0
	sw $t0,countdown_a

	.data
	.align 2
countdown_more: .word 0
my_string1:	.asciiz	"string**"
	.text
	la $t0,my_string1
	sw $t0,countdown_more

	lw $t0,countdown_a
	li $v0,4
	move $a0,$t0
	syscall

	.data
 my_string2:	.asciiz	" 2 "
	.text
	la $t0,my_string2
	li $v0,4
	move $a0,$t0
	syscall

	lw $t0,countdown_more
	li $v0,4
	move $a0,$t0
	syscall

		# Epilog
	lw $t0,countdown_RA
	jr $t0
		# End Epilog
	.globl main
	.data
	.align 2
main_registers: .space 48
	.text
main:

		# Procedure call: countdown
	sw $a0,main_registers  #saving resigers (optional for this program)
	sw $a1,main_registers+4
	sw $a2,main_registers+8
	sw $a3,main_registers+12
	jal countdown
	lw $a0,main_registers
	lw $a1,main_registers+4
	lw $a2,main_registers+8
	lw $a3,main_registers+12
		# End Procedure call: countdown

	li $v0,10
	syscall
