import sys
import os

if len(sys.argv) < 5:
    print("Usage: splitter.py <source_file> <start_line> <end_line> <dest_file>")
    sys.exit(1)

source_file = sys.argv[1]
start_line = int(sys.argv[2])
end_line = int(sys.argv[3])
dest_file = sys.argv[4]

with open(source_file, 'r', encoding='utf-8') as f:
    lines = f.readlines()

snippet = lines[start_line-1:end_line]

# Check if all lines (that are not empty) start with '//'
non_empty = [l for l in snippet if l.strip()]
all_commented = all(l.strip().startswith('//') for l in non_empty)

processed_lines = []
for line in snippet:
    if all_commented and line.strip().startswith('//'):
        # Remove the first '//' and an optional space
        new_line = line.lstrip()
        if new_line.startswith('// '):
             processed_lines.append(new_line[3:])
        elif new_line.startswith('//'):
             processed_lines.append(new_line[2:])
        else:
             processed_lines.append(line)
    else:
        processed_lines.append(line)

# Ensure the destination directory exists
os.makedirs(os.path.dirname(dest_file), exist_ok=True)

with open(dest_file, 'w', encoding='utf-8') as f:
    f.writelines(processed_lines)

print(f"Extracted {start_line} to {end_line} from {source_file} into {dest_file}")
