tasks = []

while True:
    print("\n===== TASK SCHEDULER =====")
    print("1. Add Task")
    print("2. View Tasks")
    print("3. Run Tasks")
    print("4. Exit")

    choice = input("Enter your choice: ")

    # Exit condition
    if choice == "4":
        print("Exiting Task Scheduler...")
        break

    # Add a task
    elif choice == "1":
        task_name = input("Enter task name: ")
        priority = input("Enter priority (high/medium/low): ").lower()
        condition = input("Should this task run? (yes/no): ").lower()

        tasks.append({
            "name": task_name,
            "priority": priority,
            "condition": condition
        })

        print("Task added successfully.")

    # View tasks
    elif choice == "2":
        if not tasks:
            print("No tasks available.")
        else:
            print("\n--- Scheduled Tasks ---")

            for i, task in enumerate(tasks, 1):
                print(
                    i,
                    task["name"],
                    "| Priority:", task["priority"],
                    "| Condition:", task["condition"]
                )

    # Run tasks
    elif choice == "3":
        if not tasks:
            print("No tasks to run.")
        else:
            print("\n--- Running Tasks ---")

            for task in tasks:

                # Boolean logic and short-circuit evaluation
                if (task["condition"] == "yes"
                        and (task["priority"] == "high"
                             or task["priority"] == "medium")):

                    print("Running:", task["name"])

                elif not (task["condition"] == "yes"):
                    print("Skipping:", task["name"], "- condition is false")

                else:
                    print("Skipping:", task["name"], "- low priority")

    else:
        print("Invalid choice. Please try again.")
