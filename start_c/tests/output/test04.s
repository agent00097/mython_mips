	.text
countdown:
	.data
 countdown_RA: .word 0
	.text
		# Prolog
	sw $ra,countdown_RA  # save return address
		# End Prolog

	li $t0,1  
	li $v0,1
	move $a0,$t0
	syscall
	li $t0,2
	li $v0,1
	move $a0,$t0
	syscall
	li $t0,3
	li $v0,1
	move $a0,$t0
	syscall
	li $t0,4
	li $v0,1
	move $a0,$t0
	syscall
	li $t0,5
	li $v0,1
	move $a0,$t0
	syscall

		# Epilog
	lw $t0,countdown_RA
	jr $t0
		# End Epilog
	.globl main
	.data
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
