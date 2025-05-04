import tkinter as tk
from tkinter import messagebox

def submit():
    name = name_entry.get()
    branch = branch_entry.get()
    game = game_entry.get()
    
    info = f"Name: {name}\nBranch: {branch}\nFavorite Game: {game}"
    messagebox.showinfo("Your Information", info)


root = tk.Tk()
root.title("Admission Form")


tk.Label(root, text="Name").pack()
name_entry = tk.Entry(root)
name_entry.pack()

tk.Label(root, text="Branch").pack()
branch_entry = tk.Entry(root)
branch_entry.pack()

tk.Label(root, text="Favorite Game").pack()
game_entry = tk.Entry(root)
game_entry.pack()


tk.Button(root, text="Submit", command=submit).pack(pady=10)

root.mainloop()
