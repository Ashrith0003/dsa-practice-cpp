import pandas as pd

df = pd.read_csv(r"C:\Users\theeg\OneDrive\Desktop\dsa\python\data.csv")

print("Original Dataset:")
print(df)

print("\nDataset Shape:")
print("Rows:", df.shape[0])
print("Columns:", df.shape[1])

print("\nData Types:")
print(df.dtypes)

print("\nStatistical Summary:")
print(df.describe())

filtered_data = df[df["Marks"] > 50]

print("\nFiltered Data (Marks > 50):")
print(filtered_data)

cleaned_data = filtered_data.dropna()

print("\nCleaned Data:")
print(cleaned_data)

cleaned_data.to_csv("cleaned_data.csv", index=False)

print("\nCleaned data saved as cleaned_data.csv")