import numpy as np
import matplotlib.pyplot as plt

# Generate some random data
x = np.linspace(0, 10, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Create a figure and two subplots
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 6))

# Plot the first subplot
ax1.plot(x, y1, 'r-', label='sin(x)')
ax1.set_xlabel('x')
ax1.set_ylabel('y')
ax1.set_title('Plot of sin(x)')
ax1.legend()

# Plot the second subplot
ax2.plot(x, y2, 'g--', label='cos(x)')
ax2.set_xlabel('x')
ax2.set_ylabel('y')
ax2.set_title('Plot of cos(x)')
ax2.legend()

# Adjust the layout and spacing between subplots
fig.tight_layout()

# Display the plot
plt.show()
