_This project has been created as part of the 42 curriculum by ldubau_
# Description

The goal of the push_swap project is to implement a sorting algorithm with specific constraints.<br>
The program must work with command-line arguments or an array of numbers and, in both cases, verify that:<br>

all values are valid integers<br>

there are no duplicate numbers<br>

values are within the INT_MIN and INT_MAX range<br>
If any of these conditions are not met, the program must output Error.<br>

<br>

I chose to implement the K-distribution algorithm.<br>
The algorithm uses two stacks to sort numbers and can only use the following instructions:<br>
<br>
sa (swap a): If there are at least 2 numbers, swap the first two elements at the top of stack A.<br>
sb (swap b): If there are at least 2 numbers, swap the first two elements at the top of stack B.<br>
ss: sa and sb at the same time.<br>
<br>
pa (push a): Take the first element from the top of stack B and push it onto stack A (if B is not empty).<br>
pb (push b): Take the first element from the top of stack A and push it onto stack B (if A is not empty).<br>
<br>
ra (rotate a): Shift all elements of stack A up by one position. The first element becomes the last.<br>
rb (rotate b): Shift all elements of stack B up by one position. The first element becomes the last.<br>
rr: ra and rb at the same time.<br>
<br>
rra (reverse rotate a): Shift all elements of stack A down by one position. The last element becomes the first.<br>
rrb (reverse rotate b): Shift all elements of stack B down by one position. The last element becomes the first.<br>
rrr: rra and rrb at the same time.<br>
<br>
The program must also respect operation count constraints depending on the evaluation level:<br>
<br>
◦ 100 numbers in under 1100 operations and 500 numbers in under 8500 operations<br>
◦ 100 numbers in under 700 operations and 500 numbers in under 11500 operations<br>
◦ 100 numbers in under 1300 operations and 500 numbers in under 5500 operations<br>
<br>
For maximum project validation:<br>
◦ 100 random numbers in fewer than 700 operations<br>
◦ 500 random numbers in fewer than 5500 operations<br>
<br>
My program sorts:<br>
100 numbers in about 550–600 operations<br>
500 numbers in about 4800–5100 operations<br>
<br>

# Instructions

To run the project, clone the repository to your laptop<br>
and run <make> in your terminal.<br>
The executable will be created.<br>
Then run ./push_swap with the numbers you want to sort as arguments.<br>
The output is the list of operations performed during the sorting process.<br>
<br>

# Resources

https://42-cursus.gitbook.io/guide/2-rank-02/push_swap/building-the-thing
<br>
https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376
<br>
<br>
I used AI tools to research a performant sorting algorithm for this project,<br>
to better understand how the K-distribution algorithm handles the B-to-A phase,<br>
and to help correct this README.<br>
