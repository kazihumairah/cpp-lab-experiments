# Read two numbers from user
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
# Addition
sum_result = num1 + num2
# Subtraction
diff_result = num1 - num2
# Multiplication
prod_result = num1 * num2
# Division
if num2 != 0:
 div_result = num1 / num2
 mod_result = num1 % num2
else:
 div_result = None
 mod_result = None
 print("Warning: Division by zero is not allowed!")
# Display results
print("\n--- Arithmetic Operations ---")
print("Addition :", sum_result)
print("Subtraction :", diff_result)
print("Multiplication :", prod_result)
if div_result is not None:
 print("Division :", div_result)
 print("Modulus :", mod_result)
