def append_line_to_file(filename, line):
    try:
        with open(filename, 'a') as file:
            file.write(line + "\n")
        print("Line appended to the file successfully.")
    
    except FileNotFoundError:
        print("File not found. Please check the file name and try again.")

# Example usage
filename = input("Enter the file name: ")
line = input("Enter the line to append: ")
append_line_to_file(filename, line)
