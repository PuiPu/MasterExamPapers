/* caller & callee */
void fun(int a) {} // callee

int main() {
    fun(3); // caller
}


/* function translate to MIPS using stack pointer(TEXTBOOK p.98) */
int leaf_example(int g, int h, int i, int j) {
    int f;
    f = (g+h) - (i+j);
    return f;
}

// MIPS
// (g,h,i,j) = ($a0, $a1, $a2, $a3)
// (f)       = ($s0)

leaf_example:
    addi sp, sp, -12  # adjust space for stack
    sw $t1, 8($sp)
    sw $t0, 4($sp)
    sw $s0, 0($sp)

    add $t0, $a0, $a1  # g+h
    add $t1, $a2, $a3  # i+j
    sub $s0, $t0, $t1  # f = (g+h) - (i+j)

    add $v0, $s0, $zero  # copy to return value register

    lw $s0, 0($sp)  # restore register $s0 for caller
    lw $s1, 4($sp)  # restore register $s1 for caller
    lw $s2, 8($sp)  # restore register $s2 for caller
    addi $sp, $sp, 12  # adjust stack to delete 3 items

    jr $ra  # jump back to calling routine


