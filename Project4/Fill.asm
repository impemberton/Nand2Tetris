// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.

// Runs an infinite loop that listens to the keyboard input. 
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel. When no key is pressed, 
// the screen should be cleared.

//  While (True) {
//      if(Keyboard != 0) {
//          for (Pixel in Screen):
//              Pixel = 1     
//
//      }
//      else {
//          for (Pixel in Screen):
//              Pixel = 0  
//      }
//  }

(LOOP)
    @8192
    D=A
    @R0
    M=D

    @KBD
    D=M
    @BLANK
    D;JEQ

    (FILL)
        @R0
        D=M
        M=M-1
        
        @SCREEN
        A=D+A
        D=0
        D=D-1
        M=D
        @R0
        D=M
        @FILL
        D;JGE

        @LOOP
        0;JMP

    (BLANK)
        @R0
        D=M
        M=M-1
        
        @SCREEN
        A=D+A
        D=0
        M=D
        @R0
        D=M
        @BLANK
        D;JGE
        
        @LOOP
        0;JMP


@LOOP
0;JMP
