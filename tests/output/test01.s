	.text
countdown:
	.data
 countdown_RA: .word 0
	.text
		# Prolog
	sw $ra,countdown_RA  # save return address
		# End Prolog
	li $t0,2
	li $v0,1
	move $a0,$t0
	syscall
		# Epilog
	lw $t0,countdown_RA
	jr $t0
		# End Epilog

.globl main
main:
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

	li $v0,10
	syscall
