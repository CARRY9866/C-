
cat input1 | ./a.exe > o1
cat input2 | ./a.exe > o2
cat input3 | ./a.exe > o3
cat input4 | ./a.exe > o4

vim diff o1 output1
vim diff o2 output2
vim diff o3 output3
vim diff o4 output4

exit 0
