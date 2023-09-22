	extern printf		;the c function to be called

	section .data    ; Data section, initialized variables
msg:    db "Hello, Holberton", 0  ; Define a null-terminated C string with the message
fmt:    db "%s", 10, 0           ; Define a format string for printf ("%s" for string, '\n' f					or newline, and null terminator)
	section .text    ; Code section.
	global main      ; Declare the 'main' function as the entry point

main:
	push    rbp       ; Set up a stack frame (for function call), must be aligned

	mov     rdi, fmt  ; Load the address of the format string into the rdi register
	mov     rsi, msg  ; Load the address of the message string into the rsi register
	mov     rax, 0    ; Clear the rax register (or you can use 'xor rax, rax') - this is 				used for the return value
	call    printf    ; Call the printf function

	pop     rbp       ; Restore the stack frame

	mov     rax, 0    ; Set the return value to 0 (indicating a normal exit)
	ret               ; Return from the main function

