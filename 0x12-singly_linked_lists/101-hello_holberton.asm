section .data
hello db "Hello, Holberton", 10, 0
format db "%s", 0

section .text
global main

extern printf

main:
mov rdi, format
mov rsi, hello
call printf

mov rax, 60
xor rdi, rdi
syscall
