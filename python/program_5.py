import os
import sys

print("===== FILE MANAGEMENT UTILITY =====")

# 1. Show current directory
current_dir = os.getcwd()
print("\nCurrent Directory:")
print(current_dir)


# 2. List files and folders
print("\nContents of Current Directory:")

items = os.listdir(current_dir)

for item in items:
    print(item)


# 3. Create a workspace folder
workspace = os.path.join(current_dir, "workspace")

if not os.path.exists(workspace):
    os.mkdir(workspace)
    print("\nWorkspace folder created.")
else:
    print("\nWorkspace folder already exists.")


# 4. Create a logs folder inside workspace
logs_folder = os.path.join(workspace, "logs")

if not os.path.exists(logs_folder):
    os.mkdir(logs_folder)
    print("Logs folder created.")


# 5. List Python files
print("\nPython files in current directory:")

for item in os.listdir(current_dir):

    if item.endswith(".py"):
        print(item)


# 6. Check command-line arguments
if len(sys.argv) < 2:
    print("\nNo log file provided.")
    print("Usage: python program5.py filename.txt")
    sys.exit()


filename = sys.argv[1]

# 7. Create complete path
file_path = os.path.join(logs_folder, filename)


# 8. Create file if it doesn't exist
if not os.path.exists(file_path):

    with open(file_path, "w") as file:
        file.write("Log file created successfully.\n")

    print("\nNew log file created:", file_path)


# 9. Read the file safely
with open(file_path, "r") as file:
    content = file.read()

print("\n===== FILE CONTENT =====")
print(content)


print("\nProgram completed successfully.")