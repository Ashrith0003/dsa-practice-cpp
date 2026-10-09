# Program 10: In-Memory Inventory Tracker with Dictionary Merging

# Inventory of different stores
store1 = {
    "Laptop": 10,
    "Mouse": 25,
    "Keyboard": 15
}

store2 = {
    "Laptop": 5,
    "Mouse": 10,
    "Monitor": 8
}

store3 = {
    "Laptop": 3,
    "Keyboard": 7,
    "Monitor": 4
}

# Display inventories
print("Store 1 Inventory:", store1)
print("Store 2 Inventory:", store2)
print("Store 3 Inventory:", store3)

# Merge inventory using dictionary comprehension
all_stores = [store1, store2, store3]

total_inventory = {
    item: sum(store.get(item, 0) for store in all_stores)
    for item in set().union(*all_stores)
}

print("\nCombined Inventory:", total_inventory)

# Check whether an item exists
item = input("\nEnter item to search: ")

if item in total_inventory:
    print(item, "is available.")
    print("Total quantity:", total_inventory[item])
else:
    print(item, "is not available in inventory.")

# Safely access stock using get()
print("\nLaptop stock:", total_inventory.get("Laptop", 0))
print("Phone stock:", total_inventory.get("Phone", 0))

# Update inventory using update()
new_stock = {
    "Laptop": 2,
    "Phone": 12
}

total_inventory.update({
    item: total_inventory.get(item, 0) + quantity
    for item, quantity in new_stock.items()
})

print("\nInventory after adding new stock:")
print(total_inventory)

# Display items with stock greater than 10
high_stock = {
    item: quantity
    for item, quantity in total_inventory.items()
    if quantity > 10
}

print("\nItems with stock greater than 10:")
print(high_stock)