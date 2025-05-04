import tkinter as tk
from tkinter import messagebox

# Function to display the entered info
def submit_info():
    name = entry_name.get()
    branch = entry_branch.get()
    game = entry_game.get()
    
    if name and branch and game:
        msg = f"Name: {name}\nBranch: {branch}\nFavorite Game: {game}"
        messagebox.showinfo("Submitted Info", msg)
    else:
        messagebox.showwarning("Missing Info", "Please fill all the fields.")

# GUI Window
root = tk.Tk()
root.title("College Admission Form")
root.geometry("350x250")

# Labels and Entry Fields
tk.Label(root, text="Name:").grid(row=0, column=0, padx=10, pady=10, sticky='w')
entry_name = tk.Entry(root, width=25)
entry_name.grid(row=0, column=1)

tk.Label(root, text="Branch:").grid(row=1, column=0, padx=10, pady=10, sticky='w')
entry_branch = tk.Entry(root, width=25)
entry_branch.grid(row=1, column=1)

tk.Label(root, text="Favorite Game:").grid(row=2, column=0, padx=10, pady=10, sticky='w')
entry_game = tk.Entry(root, width=25)
entry_game.grid(row=2, column=1)

# Submit Button
submit_btn = tk.Button(root, text="Submit", command=submit_info)
submit_btn.grid(row=3, column=0, columnspan=2, pady=20)

# Run the GUI
root.mainloop()
