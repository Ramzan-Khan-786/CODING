records = {}

def show_records():
    if not records:
        print("No records.")
    else:
        for name, data in records.items():
            print(f"{name}: Grade={data['grade']}, Attendance={data['attendance']}%")

def add_student():
    name = input("Name: ")
    if name in records:
        print("Already exists.")
    else:
        grade = float(input("Grade: "))
        att = float(input("Attendance: "))
        records[name] = {'grade': grade, 'attendance': att}
        print("Student added.")

def update_student():
    
    name = input("Name to update: ")
    if name in records:
        grade = float(input("New Grade: "))
        att = float(input("New Attendance: "))
        records[name] = {'grade': grade, 'attendance': att}
        print("Student updated.")
    else:
        print("Student not found.")

def delete_student():
    name = input("Name to delete: ")
    if name in records:
        del records[name]
        print("Deleted.")
    else:
        print("Student not found.")

def menu():
    while True:
        print("\n1.Show  2.Add  3.Update  4.Delete  5.Exit")
        choice = input("Choose: ")
        if choice == '1':
            show_records()
        elif choice == '2':
            add_student()
        elif choice == '3':
            update_student()
        elif choice == '4':
            delete_student()
        elif choice == '5':
            print("Exiting.")
            break
        else:
            print("Invalid choice.")

menu()
