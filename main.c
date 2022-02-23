#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const int COPY_CYCLE = 5000000;


void test_mov(char* addr_a, char* addr_b, int const count)
{
        asm(
            "mov eax, %[len]\n\t"
            "mov rcx, %[addr_a]\n\t"
            "mov rdx, %[addr_b]\n\t"
            :
            :[len] "r" (count), [addr_a] "rm" (addr_a), [addr_b] "rm" (addr_b)
            :"cc", "memory"
        );
        mov_loop:
        asm goto(
            "mov r8, [rcx]\n\t"
            "mov [rdx], r8\n\t"
            "lea rcx, [rcx+1]\n\t"
            "lea rdx, [rdx+1]\n\t"
            "sub eax, 0x01\n\t"
            "jnz %l[mov_loop]"
            :
            :
            :"cc","memory"
            :mov_loop
        );
}

void test_movs(char* addr_a, char* addr_b, int const count)
{
    asm(
        "mov eax, %[len]\n\t"
        "mov rsi, %[addr_a]\n\t"
        "mov rdi, %[addr_b]\n\t"
        :
        :[len] "r" (count), [addr_a] "rm" (addr_a), [addr_b] "rm" (addr_b)
        :"cc", "memory"
    );
    movs_loop:
    asm goto(
        "movsb [rdi], [rsi]\n\t"
        //"movsb esi, edi\n\t"
        "sub eax, 0x01\n\t"
        "jnz %l[movs_loop]"
        :
        :
        :"cc", "memory"
        :movs_loop
    );
}

int main()
{
    
    for (int j = 0; j < 1; j++)
    {
        printf("Group %d:\n", j+1);
    
        
        clock_t before;
        
        char *a = "hello world, here is a experiment to test the memory copy speed."
                    "this experiment want to test the variable of time consuming "
                    "with different length of string. So we are changing the string "
                    "length manually to check if some strange thing will happen.";
        //char *a = "Farewell!--God knows when we shall meet again. I have a faint cold fear thrills through my veins\
                    That almost freezes up the heat of life: I'll call them back again to comfort me;--Nurse!--What\
                    should she do here? My dismal scene I needs must act alone.--Come, vial.--What if this mixture\
                    do not work at all? Shall I be married, then, to-morrow morning?--No, No!--this shall forbid it\
                    :--lie thou there.--What if it be a poison, which the friar Subtly hath minister'd to have me \
                    dead, Lest in this marriage he should be dishonour'd, Because he married me before to Romeo?I \
                    fear it is: and yet methinks it should not, For he hath still been tried a holy man:--I will not\
                    entertain so bad a thought.--How if, when I am laid into the tomb, I wake before the time that \
                    Romeo Come to redeem me? there's a fearful point! Shall I not then be stifled in the vault, To \
                    whose foul mouth no healthsome air breathes in, And there die strangled ere my Romeo comes? Or, \
                    if I live, is it not very like The horrible conceit of death and night, Together with the terror\
                    of the place,--As in a vault, an ancient receptacle, Where, for this many hundred years, the bones\
                    Of all my buried ancestors are pack'd; Where bloody Tybalt, yet but green in earth, Lies festering \
                    in his shroud; where, as they say, At some hours in the night spirits resort;-- Alack, alack, is it \
                    not like that I, So early waking,--what with loathsome smells, And shrieks like mandrakes torn out \
                    of the earth, That living mortals, hearing them, run mad;--O, if I wake, shall I not be distraught,\
                    Environed with all these hideous fears? And madly play with my forefathers' joints? And pluck the \
                    mangled Tybalt from his shroud? And, in this rage, with some great kinsman's bone, As with a club, \
                    dash out my desperate brains?--O, look! methinks I see my cousin's ghost Seeking out Romeo, that did\
                    spit his body Upon a rapier's point:--stay, Tybalt, stay!-- Romeo, I come! this do I drink to thee.";
        
        int n = strlen(a);
                
        // begin with MOVS
        char *b = (char*)malloc(n);
        printf("Time consuming MOVS:");
        before = clock();
        for (int i = 0; i < COPY_CYCLE; i++)
        {
            test_movs(a, b, n);
        }
        printf("%f\n", (float)(clock() - before) / (float)CLOCKS_PER_SEC);

        // begin with MOV
        char *c = (char*)malloc(n);
        printf("Time consuming MOV:");
        before = clock();
        for (int i = 0; i < COPY_CYCLE; i++)
        {

            test_mov(a, c, n);
        }
        printf("%f\n", (float)(clock() - before) / (float)CLOCKS_PER_SEC);
        
        printf("length of string: %d\n", n);
        //printf("%s\n", c);
    }
    return 0;
}
