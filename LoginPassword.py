print("===================================") 
print("           Create Account          ")
print("===================================")

name = input("Enter Username:\n")
password = input("Enter Passowrd:\n")

print("===================================")
print("           Login  Account          ")
print("===================================")

n = input("Enter Username:\n")
p = input("Enter Passowrd:\n")


if n == name and p == password: # Program Logic
    print("Login Sucessfully!")
else:
    print("Invalid Crediantials!")    

file = open("login_saved.txt" , "w") # Use File Handling to saved passwords
file.write("===================================\n")
file.write("            Saved Passwords        \n")
file.write("===================================\n")
file.write("Username:\n"+n+"\n")
file.write("Password:\n"+p+"\n")

file.close()