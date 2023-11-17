section .data
    hello db "Hello, Holberton", 0  ; Null-terminated string for printf

section .text
    global main
    extern printf

main:
    sub rsp, 8     ; Align the stack to a multiple of 16 (required by the x86_64 ABI)
    mov rdi, hello ; First parameter: format string
    call printf    ; Call printf
    add rsp, 8     ; Restore the stack pointer

    ; Exit the program
    mov rax, 60    ; syscall: exit
    xor rdi, rdi   ; status: 0
    syscall
