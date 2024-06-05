try:
  with open("testi.txt", "w") as fi:  # Open file with correct name and mode
    fi.write("This is a test for exception handling!!")
  print("Writing into file successful")
except FileNotFoundError:  # Use the correct exception type
  print("Error: File not found")
