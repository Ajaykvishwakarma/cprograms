1. Write and ruin a program using 8086 assembl
-- Add two numbers stored in two consecutive bytes in the memory.
-- result in AL register
-- carry stored in AH


.MODEL SMALL
.STACK 100H

.DATA
    num1 DB 10H
    num2 DB 25H

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    MOV AL, num1 ; Load first number into AL
    ADD AL, num2 ; Add second number to AL

    JC CARRY_SET ; Jump to CARRy_SET label if carry flag is set

    ; if no Carry, clear AH
    MOV AH, 00H
    JMP END_PROGRAM

CARRY_SET:

    MOV AH, 01H


END_PROGRAM:
    MOV AH, 4CH
    INT 21H

MAIN ENDP 
END MAIN



2. Wtite and ruun 8086
-- Sum of odd placed values out of 10 consecutive bytes values, in Array


.MODEL SMALL
.STACK 100h


.DATA
    arr DB 12h AAh, 13h, ABh, 14h, ACh, 15h, ADh, 16h, AEh
    suim DB 0


.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    MOV SI, 0
    MOV AL, 0

    MOV CX, 5

START_SUM:
    MOV BL, arr[SI]
    ADD AL,BL
    ADD SI, 2
    LOOP START_SUM

    MOV sum, AL 

    MOV AH, 4Ch
    INT 21h 

MAIN ENDP 
END MAIN


