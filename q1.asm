; 1. Write and run a program using 8086 assembly language which finds the highest of four bytes values stored in memory. 
The highest value should be left in AL register.



.MODEL SMALL 
.STACK 100H

.DATA
    num1 DB 10H
    num2 DB 24H
    num3 DB 5H
    num4 DB 30H

.CODE 
MAIN PROC
    MOV AX, @DATA
    MOVE DS, AX

    MOV AL, num1 ; initialize AL with the first value

    ; Compare AL woth other values and update if necessary
    CMP AL, num2
    JAE SKIP_NUM2 ; (Jump if above or Equal)
    MOVE AL, num2

SKIP_NUM2:
    CMP AL, num3
    JAE SKIP_NUM3 ; (Jump if above or Equal)
    MOV AL, num3

SKIP_NUM3:
    CMP AL, num4
    JAE END_PROGRAM ; (Jump if above or Equal)
    MOV AL, num4

END_PROGRAM:
    ; THe highest value is now in AL

    MOV AH, 4CH ; Exit to DOS (Disk operating system)
    INT 21H

MAIN ENDP
END MAIN







; 2. Write and run a near procedure in 8086 assembly language (using appropriate calling program) that checks, 
if the input parameter has a value zero or not, if the value is Zero, the subrouting terminates the program else return a value 1 in AL register.

.MODEL SMALL
.STACK 100H

.DATA 
    inputValue DB 0

.CODE PROC 
    MOV AX, @DATA
    MOV DS, AX
    
    MOV AL, inputValue

    CALL CheckZero

    MOV AH, 4CH
    INT 21H

MAIN ENDP

CheckZero  PROC NEAR

    CMP AL, 0
    JE Terminate 

    MOV AL, 1
    RET 

Terminate: 
    MOV AH, 4CH
    INT 21H

CheckZero ENDP
END MAIN




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


END_PROGRAM:
    MOV AH, 4CH
    INT 21H

MAIN ENDP 
END MAIN