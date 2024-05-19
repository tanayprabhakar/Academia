import pickle

def pickle_data():
    data ={'name': 'Prashant','profession': 'SoftwareEngineer','country':'India'}
    filename = 'PersonalInfo'
    outfile = open(filename, 'wb')
    pickle.dump(data, outfile)
    outfile.close()
pickle_data()
def unpickling_data():
    file = open("PersonalInfo", 'rb')
    new_data = pickle.load(file)
    file.close()
    return new_data
print(unpickling_data())