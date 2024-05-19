import pandas as pd
import numpy as np
data = {'A': [1, 2, np.nan, '', 5],'B': [np.nan, 'hello', 3, 4, ''],'C': ['hello', np.nan, 'world', '', 'war']}
df = pd.DataFrame(data)
print("Original DataFrame:")
print(df)
df.loc[(df['A'] == '') | (df['A'].isnull()), 'A'] = "No Data"
df.loc[(df['B'] == '') | (df['B'].isnull()), 'B'] = "No Data"
print("\nDataFrame after replacing missing values:")
print(df)