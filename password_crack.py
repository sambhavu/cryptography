import hashlib 

pass_found = 0

input_hash = input("Enter hash password: ")
file_location = input("Enter file Location including root/home/")

try: 
    password_file = open(file_location, 'r')

except: 
    print("Error: File could not be opened")
    exit(1)
    
password_found = False 

for word in password_file: 
    encrpyt = world.encode('utf-8')
    hash_word = hashlib.md5(encrpt.strip())
    digest = hash_word.hexidigest()
    
    if digest == input_hash: 
        print("Password Found. password is ", word)
        password_found = True
        break
    
    
if password_found  == False 
    print("Password could not be found")


print("\n\nend")

    
