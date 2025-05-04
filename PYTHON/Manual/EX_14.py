import numpy as np

arr1d = np.array([10, 20, 30, 40, 50])
print("1D Array:")
print(arr1d)

print("First element:", arr1d[0])
print("Slice from index 1 to 3:", arr1d[1:4])


arr2d = np.array([[1, 2, 3], [4, 5, 6]])
print("\n2D Array:")
print(arr2d)

print("Element at (1, 2):", arr2d[1, 2])
print("First row:", arr2d[0])
print("Second column:", arr2d[:, 1])

arr3d = np.array([
    [[1, 2], [3, 4]],
    [[5, 6], [7, 8]]
])
print("\n3D Array:")
print(arr3d)

print("Element at [1, 0, 1]:", arr3d[1, 0, 1])

reshaped = arr1d.reshape((5,1))
print("\nReshaped 1D to 2D (5x1):")
print(reshaped)
