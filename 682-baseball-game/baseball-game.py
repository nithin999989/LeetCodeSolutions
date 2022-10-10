def calPoints(ops):
    result = 0
    length = len(ops)
    stack = []
    
    for i in range(length):
        if ops[i] == '+':
            num1 = stack[-1]
            num2 = stack[-2]
            stack.append(num1 + num2)
        elif ops[i] == 'D':
            stack.append(stack[-1] * 2)
        elif ops[i] == 'C':
            stack.pop()
        else:
            stack.append(int(ops[i]))
            
    return sum(stack)