Put the summary of each function into this doc.

## Stack
The stack used stores **value** : the name of the variable, and **labelvalue** : the int value itself. **MARK THIS DIFFERENCE!**

The stack works as a single pointer to push all values, parameters for functions, and intermediate forms of any expression. For any sequence of operands, they are pushed left to right, ie, leftmost operand is the deepest in stack.

## codegen
Builder function to construct intermediate values in simple expressions. Basically used to make all those t1, t2, intermediate variables in expressions. It keeps a running count of all variables, this count is stored into buffer in base 10 by the itoa function call, and then concatenated onto the temp variable. Voila. New tx variable. 

## codegencon
Data not found.

## isunary
Checks if the string passed is a unary ++ or -- operator.

## genunary
Remember how the leftmost is the deepest in the stack? Temp1 is the thing at the top of the stack, temp2 is below it. By checking if temp1 isunary, it checks if the expression with temp1 and temp2 was pre-increment or post-increment. Work it out with x ++ and -- y while explaining. 

We do that three step swap because we need to treat temp1 as the variable being incremented or decremented. 

## codeassign
Simple assignment operation.

