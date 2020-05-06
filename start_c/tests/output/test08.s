	.text
absolute:
	.data
 absolute_RA: .word 0
	.text
		# Prolog
	sw $ra,absolute_RA  # save return address
		# End Prolog

        .data
        .align 2
absolute_x: .word 0 
	.text
	li $v0,5
	syscall
	sw $v0,absolute_x			# line 2

	lw $t0,absolute_x
	li $t1,0
	slt $t0,$t0,$t1
	beqz $t0,L0
	lw $t0,absolute_x
	neg $t0,$t0
	li $v0,1
	move $a0,$t0
	syscall
	b L1
L0:
	lw $t0,absolute_x
	li $v0,1
	move $a0,$t0
	syscall
L1:
		# Epilog
	lw $t0,absolute_RA
	jr $t0
		# End Epilog
	.globl main
	.data
	.align 2
main_registers: .space 48
	.text
main:

		# Procedure call: absolute
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

	jal absolute

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
		# End Procedure call: absolute

        .data
STR0:   .asciiz "\n"
        .text
        li $v0,4
        la $a0,STR0
        syscall

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
                
        jal absolute
        
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

	li $v0,10
	syscall
