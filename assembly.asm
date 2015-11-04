section .text
  global _start

section .data
    msg db "Alliance Group",0xA ,"Natsuda Angsakul",0xA ,"Hemhong Artnarong",0xA ,"Kornpassawee Intawong",0xA ,"Passaranan Nakwang", 0xA,"Jarunya Bunya",0xA,"Akkharaphat Chaisri",0xA
    len equ $ - msg
    

_start:  
    ; sys_write
    mov ecx, msg
    mov edx, len
    mov ebx, 1
    mov eax, 4
    int 0x80

    ; sys_exit
    mov ebx, 0
    mov eax, 1
    int 0x80
