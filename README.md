# Brainfuck Interpreter

A rudimentary interpreter for the [Brainfuck](https://en.wikipedia.org/wiki/Brainfuck) programming language.

Still in-development, do not expect usability.

## Instructions

Below is a table that shows each Brainfuck instruction and describes what it does.

| Instruction | C equivalent      | Description |
| :---------: | :---------------: | ----------- |
| `>`         | `++ptr;`          | Increment data pointer (to point to the next cell in the right). |
| `>`         | `--ptr;`          | Decrement data pointer (to pont to the next cell to the left). |
| `-`         | `--*ptr;`         | Decrement the byte at the data pointer. |
| `+`         | `++*ptr;`         | Increment the byte at the data pointer. |
| `.`         | `putchar(*ptr);`  | Output the byte at the data pointer. |
| `,`         | `*ptr=getchar();` | Accept one byte of input, storing its value in the byte at the data pointer. |
| `[`         | `while(*ptr){`    | If the byte at the data pointer is zero, jump it forward to the command after the matching `]`. |
| `]`         | `}`               | If the byte at the data pointer is non-zero, jump it back to the command after the matching `[`. |

## License

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>
