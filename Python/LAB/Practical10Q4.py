import pandas as pd
import numpy as np
data = {'X': [78, 85, 96, 80, 86],'Y': [84, 94, 89, 83, 86],'Z': [86, 97, 96, 72, 83]}
df = pd.DataFrame(data)
print(df)
powers = np.array([2, 3, 4])
result = pd.DataFrame(np.power(df.values, powers), columns=df.columns)
print(result)
