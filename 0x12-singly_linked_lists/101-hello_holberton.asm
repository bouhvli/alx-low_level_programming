section .data
    fmt db "Hello, Holberton", 0   ; format string for printf
    nl db 10                      ; new line character

section .text
    global main

extern printf
main:
    ; push the format string onto the stack
    push qword fmt

    ; call printf to print the string
    mov rdi, fmt         ; load format string into rdi
    xor eax, eax         ; clear upper 32 bits of rax
    call printf

    ; push new line character onto the stack
    push qword nl

    ; call printf to print the new line
    mov rdi, nl          ; load new line character into rdi
    xor eax, eax         ; clear upper 32 bits of rax
    call printf

    ; clean up the stack
    add rsp, 16

    ; return 0
    mov eax, 0
    ret

