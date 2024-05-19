import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0, 10, 100)
y1 = np.sin(x)
y2 = np.cos(x)
categories = ['A', 'B', 'C', 'D']
values = [20, 35, 30, 15]
fig, axs = plt.subplots(1, 2, figsize=(10, 5))
axs[0].plot(x, y1, label='sin(x)')
axs[0].plot(x, y2, label='cos(x)')
axs[0].set_title('Line Plot')
axs[0].legend()
axs[1].bar(categories, values)
axs[1].set_title('Bar Plot')
plt.tight_layout()
plt.show()