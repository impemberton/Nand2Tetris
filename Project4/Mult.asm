// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)
// The algorithm is based on repetitive addition.

// sum = 0
// for (i = 1, i++, i < R1) {
//      sum += R0   
// }
// R2 = sum

@R2
M=0

(LOOP)
@R2
D=M
@R0
D=D+M
@R2
M=D
@R1
M=M-1
D=M
@LOOP
D;JGT

(END)
@END
0;JMP



