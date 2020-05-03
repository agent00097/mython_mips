	.text
countdown:
	.data
 countdown_RA: .word 0
	.text
		# Prolog
	sw $ra,countdown_RA  # save return address
		# End Prolog

        .data
        .align 2
countdown_n: .word 0 
	.text
	li $t0,10
	sw $t0,countdown_n			# line 3
L0:
	lw $t0,countdown_n
	li $t1,0
	sgt $t0,$t0,$t1
	beqz $t0,L1
	.data
	.align 2
countdown_m: .word 0
	.text
	lw $t1,countdown_n
	sw $t1,countdown_m			# line 5
L2:
	lw $t1,countdown_m
	li $t2,0
	sgt $t1,$t1,$t2
	beqz $t1,L3
	lw $t2,countdown_m
	li $v0,1
	move $a0,$t2
	syscall
	lw $t2,countdown_m
	li $t3,1
	sub $t2,$t2,$t3
	sw $t2,countdown_m			# line 8
	b L2
L3:	lw $t1,countdown_n
	li $t2,2
	sub $t1,$t1,$t2
	sw $t1,countdown_n			# line 10
	b L0
L1:	li $t0,42
	li $v0,1
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
	sw $a0,main_registers  #saving resigers 
	sw $a1,main_registers+4
	sw $a2,main_registers+8
	sw $a3,main_registers+12
        sw $t0,main_registers+16
        sw $t1,main_registers+20
        sw $t2,main_registers+24
        sw $t3,main_registers+28
        sw $t4,main_registers+32
        sw $t5,main_registers+36
        sw $t6,main_registers+40
        sw $t7,main_registers+44

	jal countdown

	lw $a0,main_registers
	lw $a1,main_registers+4
	lw $a2,main_registers+8
	lw $a3,main_registers+12
        lw $t0,main_registers+16
        lw $t1,main_registers+20
        lw $t2,main_registers+24
        lw $t3,main_registers+28
        lw $t4,main_registers+32
        lw $t5,main_registers+36
        lw $t6,main_registers+40
        lw $t7,main_registers+44
        move $t0, $v0        
		# End Procedure call: countdown

	li $v0,10
	syscall
