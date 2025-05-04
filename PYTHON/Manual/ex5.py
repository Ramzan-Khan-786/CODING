records={}

def show_records():
    if not records:
        print("no records")

    else:
        for name,data in records.items():
            print(f'Name:{name}\n 1-->attendance:{data['attendance']} \n 2-->marks:{data['marks']}')

def add_record():
    name=input("Name:")
    if name in records:
        print(f'{name} already exists.')
    else:
        marks=input('marks:')
        att=input('attendance')
        records[name]={'marks':marks,'attendance':att}
        print("added")

def update_record():
    name=input('name:')
    if name not in records:
        print(f'{name} not found')
    else:
        marks=input('marks:')
        att=input('attendance')
        records[name]={'marks':marks,'attendance':att}
        print("updated")

def  delete_record():
    name=input('name:')
    if name in records:
        del records[name]
        print("deleted")
    else:
        print("not found!")
def menu():
    while(True):
        print("1.show  2.add  3.update  4.delete  5.exit")
        choice=input("Choose:")

        if choice=='1':
            show_records()
        elif choice=='2':
            add_record()
        elif choice=='3':
            update_record()
        elif choice=='4':
            delete_record()
        elif choice=='5':
            print('successful Exit')
            break
        else:
            print("invalid choice")

menu()
        