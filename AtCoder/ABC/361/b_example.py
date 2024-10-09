import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
import numpy as np

def cuboid_data(o, size=(1,1,1)):
    X = [[[0, 1, 0], [0, 0, 0], [1, 0, 0], [1, 1, 0]],
         [[0, 0, 0], [0, 0, 1], [1, 0, 1], [1, 0, 0]],
         [[1, 0, 1], [1, 0, 0], [1, 1, 0], [1, 1, 1]],
         [[0, 0, 1], [0, 0, 0], [0, 1, 0], [0, 1, 1]],
         [[0, 1, 0], [0, 1, 1], [1, 1, 1], [1, 1, 0]],
         [[0, 1, 1], [0, 0, 1], [1, 0, 1], [1, 1, 1]]]
    X = np.array(X).astype(float)
    for i in range(3):
        X[:,:,i] *= size[i]
    X += np.array(o)
    return X

def plotCubeAt(pos=(0,0,0), size=(1,1,1), ax=None, color='b', alpha=0.1):
    if ax is None:
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')
    X = cuboid_data(pos, size)
    ax.add_collection3d(Poly3DCollection(X, facecolors=color, linewidths=1, edgecolors='r', alpha=alpha))

# 直方体のデータ
cube1 = [5, 1, 4, 9, 10, 5]  # x1, y1, z1, x2, y2, z2
cube2 = [6, 6, 2, 10, 7, 6]  # x1, y1, z1, x2, y2, z2

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# 直方体を描画
plotCubeAt((cube1[0], cube1[1], cube1[2]), (cube1[3]-cube1[0], cube1[4]-cube1[1], cube1[5]-cube1[2]), ax=ax, color='b', alpha=0.1)
plotCubeAt((cube2[0], cube2[1], cube2[2]), (cube2[3]-cube2[0], cube2[4]-cube2[1], cube2[5]-cube2[2]), ax=ax, color='r', alpha=0.1)

# グラフの設定
ax.set_xlim([0, 11])
ax.set_ylim([0, 11])
ax.set_zlim([0, 11])
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

plt.title("Visualization of Two Cuboids")
plt.show()