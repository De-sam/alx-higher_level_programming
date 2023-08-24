section .data
    hello_msg db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    push rdi                  ; Preserve the value of rdi register
    lea rdi, [hello_msg]      ; Load the address of the hello_msg string into rdi
    call printf              ; Call the printf function
    pop rdi                   ; Restore the original value of rdi
    ret
