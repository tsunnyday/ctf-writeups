Basic Decryption - 25

This should be easy.

--------------------------------------------------------------------------------

The text file is in Base32. Decoding (http://emn178.github.io/online-tools/base32_decode.html) gives us 

MmUhbWYxKkFBMCs+WWt0MkU7bTwxRVxQZSs+dSwjMklkamMxYSJcOCs/KmdSME91OltAMz4ge2g0MWZ3YXlfdGgzcmV9

Which is Base64. Decoding gives us

2e!mf1*AA0+>Ykt2E;m<1E\Pe+>u,#2Idjc1a"\8+?*gR0Ou:[@3> {h41fway_th3re}

Which is Base85. Taking out the hint and decoding (https://www.tools4noobs.com/online_tools/ascii85_decode/) gives us 

7b 62 34 35 69 63 5f 66 6c 34 67 7d 0d 

Which is hex. Finally, decoding gives us

{b45ic_fl4g}