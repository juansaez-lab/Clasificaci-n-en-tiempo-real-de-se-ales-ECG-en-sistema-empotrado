/* dsk6416.cmd — archivo de linker básico */
MEMORY
{
   IRAM    : origin = 0x00000000 length = 0x00040000
   SDRAM   : origin = 0x80000000 length = 0x01000000
}

SECTIONS
{
   .text    > IRAM
   .stack   > IRAM
   .bss     > IRAM
   .cinit   > IRAM
   .const   > IRAM
   .data    > IRAM
   .switch  > IRAM
   .sysmem  > IRAM
   .far     > IRAM
   .ecgsignal > SDRAM
}
