from sklearn.ensemble import RandomForestClassifier
from sys import stdin
import pickle




if __name__ == '__main__':

    clf = pickle.load(open('low_latency', 'rb'))
    x_i = [-0.00967914, -0.00025598,  0.00580748, -0.02447787, -0.02175432]


    # print('alive')
    # print(stdin)
    for line in stdin:
        # print(repr(line))
        if line == '' or line =='\n': 
            break
        d=[float(x) for x in line.split(',')]
        
        # print(d)
        for i in range(len(d)):

        # for arg in sys.argv[1:]:
            x_i[0:4] = x_i[1:5]
            x_i[4] = float(d[i])
            print(clf.predict([x_i]))
    
    # print(sys.argv[1:])
    # print('Hello World!')
