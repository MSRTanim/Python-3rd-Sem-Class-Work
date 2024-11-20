def count_file_contents(filename):
    try:
        with open(filename, 'r') as file:
            lines = file.readlines()
            line_count = len(lines)
            word_count = sum(len(line.split()) for line in lines)
            char_count = sum(len(line) for line in lines)
        
        print("Number of lines:", line_count)
        print("Number of words:", word_count)
        print("Number of characters:", char_count)
    
    except FileNotFoundError:
        print("File not found. Please check the file name and try again.")

# Example usage
filename = input("Enter the file name: ")
count_file_contents(filename)
