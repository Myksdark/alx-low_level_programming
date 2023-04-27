section .data
    msg db "Hello, Holberton", 0Ah 

section .text
    global main

    extern puts 

main:
    mov rdi, msg 
    call puts 
    mov rax, 0 
    ret 
