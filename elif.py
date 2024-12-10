num1 =float(input("Enter first number"))
num2 =float(input("Enter second number"))
operation=input("Choose an opeation add,subtract,multiply,divide").strip().lower()


if operation == "add ":
    result= num1+num2
elif operation == "subtract ":
    result= num1-num2
elif operation == "multiply ":
    result= num1*num2
elif operation == "divide ":
    if num2!=0:
        result= num1/num2
    else:
        result= "error cannot be divided "

else:
    result ="invalid operation"
print(f"The result is{result}")
