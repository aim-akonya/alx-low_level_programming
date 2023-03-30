section .data
    msg db "Hello, Holberton",0
    fmt:    db "%s", 10, 0

section .text
    extern printf
    global main, _start


main:
    mov esi, msg
    mov edi, fmt
    mov eax, 0
    call printf
    
    mov rax, 60
    mov rdi, 0
    syscall