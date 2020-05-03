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

	li $t0,3
	li $t1,2
	mul $t0,$t0,$t1
	li $t1,3
	add $t0,$t0,$t1
	li $t1,4
	li $t2,2
	div $t1,$t1,$t2
	sub $t0,$t0,$t1

	li $v0,1
	move $a0,$t0
	syscall

	li $v0,10
	syscall
