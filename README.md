
** CUDA 2.3 compatible NVOPENCC compiler with extended intrinsics support **

The compiler supports the following new intrinsics:
<ul>
<li>__mul24hi / __umul24hi: returns 32 MSB bits of 48-bit product of 24-bit integer operands. Signed and unsigned versions respectively.</li>
<li>__mad24hi / __umad24hi: 24-bit integer multiply-add (returns 32 MSB bits after multiplication). Signed and unsigned versions respectively.</li>
<li>__addo / __uaddo: signed and unsigned 32-bit addition with carry flag set.
Used with subsequent __addc / __uaddc operations.</li>
<li>__addc / __uaddc: signed and unsigned addition-with-carry. Carry flag after addition is set automatically.</li>
</ul>

Original compiler sources are available at: <a href="ftp://download.nvidia.com/CUDAOpen64">nvopencc compiler</a>.
Modified sources: <a href="compiler.diff">diff</a>.

**Installation instructions:**
<a href="INSTRUCTIONS.txt">TXT</a>

Header file with intrinsics declaration:<a href="ext_intrinsics.h">header</a>

Compiler binaries built for 32-bit Linux platform: <a href="compiler_binaries.zip">ZIP</a> (~ 5.0 Mb)

