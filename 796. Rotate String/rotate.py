def rotate_string(input_string, n):
    if len(input_string) == 0:
        return input_string
    n = n % len(input_string)
    rotated_string = ""
    for i in range(len(input_string)):
        rotated_string += input_string[(i + n) % len(input_string)]
    return rotated_string

# Example usage:
original_string = "Hello, World!"
rotation_amount = 3
result = rotate_string(original_string, rotation_amount)
print(result) 
