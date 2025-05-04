tasks = []

def menu():
    while True:
        print("\n1.Show 2.Add 3.Remove 4.Update 5.Sort 6.Exit")
        ch = input("Choice: ")

        if ch == '1':
            for i, t in enumerate(tasks, 1):
                print(f"{i}. {t}")
        elif ch == '2':
            tasks.append(input("New task: "))
            print("Added.")
        elif ch == '3':
            i = int(input("Task no to remove: ")) - 1
            if 0 <= i < len(tasks):
                tasks.pop(i)
                print("Removed.")
            else:
                print("Invalid number.")
        elif ch == '4':
            i = int(input("Task no to update: ")) - 1
            if 0 <= i < len(tasks):
                tasks[i] = input("New task: ")
                print("Updated.")
            else:
                print("Invalid number.")
        elif ch == '5':
            tasks.sort()
            print("Sorted.")
        elif ch == '6':
            print("Bye!")
            break
        else:
            print("Wrong choice.")

menu()

