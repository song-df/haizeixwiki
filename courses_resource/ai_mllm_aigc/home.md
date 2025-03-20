---
title: 【船说】深度学习先导课（原《从0到1快速入门AI大模型》部分课程资源）
description: 
published: true
date: 2025-03-20T02:55:43.645Z
tags: 
editor: markdown
dateCreated: 2024-11-13T17:16:29.511Z
---

> :one: 本课程属于船说系列课程之一，[💰单课购买点这里](https://www.bilibili.com/cheese/play/ss3380){target="_blank"}
> :two: 你也可以选择购买『船说系列课程-年度会员』产品『船票』，畅享期内无限制学习已上线的所有船说系列课程：
[💰 船票1年期购买入口](https://b23.tv/uCOhTk2){target="_blank"}
[💰 船票4年期购买入口](https://b23.tv/vU6TsQU){target="_blank"}
优惠券可以找Bili姐👩‍💻领取。姐的二维码：
![新bili姐.png](/images/新bili姐.png =100x)
{.is-success}


# 程序源码
 
[环境依赖venv_arm.txt](ai_mllm_aigc/resource/venv_arm.txt)

1.4.py
```python
import numpy as np


# ================= 创建 =================
# 从列表创建
arr_from_list = np.array([1, 2, 3, 4])
print("从列表创建:\n", arr_from_list)

# 创建全零数组
zeros_array = np.zeros((2, 3))
print("全零数组:\n", zeros_array)

# 创建全一数组
ones_array = np.ones((3, 2))
print("全一数组:\n", ones_array)

# 创建随机数组
random_array = np.random.rand(2, 2)
print("随机数组:\n", random_array)


# ================= 基本属性 =================
arr = np.array([[1, 2, 3], [4, 5, 6]])

print("数组形状:", arr.shape)
print("数据类型:", arr.dtype)
print("数组大小:", arr.size)
print("数组维度:", arr.ndim)


# ================= 索引 =================
arr = np.array([10, 20, 30, 40, 50])

# 获取单个元素
print("获取第二个元素:", arr[1])

# 获取子数组
print("获取第2到第4个元素:", arr[1:4])

# 多维索引
arr_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print("获取第二行第三列的元素:", arr_2d[1, 2])
print("获取第一列的所有元素:", arr_2d[:, 0])


# ================= 基本运算 =================
arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])

# 加法运算
print("加法:", arr1 + arr2)  # 输出 [5 7 9]

# 乘法运算
print("乘法:", arr1 * arr2)  # 输出 [4 10 18]

# 标量运算
print("乘以标量:", arr1 * 2)  # 输出 [2 4 6]

# 广播机制
arr3 = np.array([[1, 2, 3], [4, 5, 6]])
print("广播加法:\n", arr3 + np.array([1, 2, 3]))  # 每行分别加上 [1, 2, 3]


# ================= 改变形状 =================
arr = np.array([[1, 2, 3], [4, 5, 6]])

# 重塑数组
reshaped_arr = arr.reshape(3, 2)
print("重塑后的数组:\n", reshaped_arr)

print("转为列向量:\n", arr.reshape(-1, 1))

# 展平数组
flattened_arr = arr.flatten()
print("展平后的数组:", flattened_arr)


# ================= 统计 =================
arr = np.array([[1, 2, 3], [4, 5, 6]])

print("总和:", np.sum(arr))
print("按列求和:", np.sum(arr, axis=0))
print("均值:", np.mean(arr))
print("标准差:", np.std(arr))
print("最大值:", np.max(arr))
print("最小值:", np.min(arr))


# ================= 与 list 对比 =================
import time

# 使用NumPy计算
arr_np = np.arange(int(1e8))
start = time.time()
arr_np_sum = np.sum(arr_np)
print("NumPy求和时间:", time.time() - start)

# 使用Python列表计算
arr_list = list(range(int(1e8)))
start = time.time()
arr_list_sum = sum(arr_list)
print("Python列表求和时间:", time.time() - start)

```
 1.5.py
 ```
 import torch
import numpy as np


# ================ 创建 ================
# 手动创建
tensor_manual = torch.tensor([[1, 2], [3, 4]])
print("手动创建tensor:\n", tensor_manual)

# 全零、全一和随机tensor
tensor_zeros = torch.zeros((2, 3))
tensor_ones = torch.ones((2, 3))
tensor_rand = torch.rand((2, 3))
print("全零tensor:\n", tensor_zeros)
print("全一tensor:\n", tensor_ones)
print("随机tensor:\n", tensor_rand)


# ================ 基础属性 ================
tensor = torch.tensor([[1.0, 2.0], [3.0, 4.0]], dtype=torch.float32)

print("形状:", tensor.shape)
print("数据类型:", tensor.dtype)
print("设备:", tensor.device)


# ================ 运算 ================
# 基本加法运算
tensor1 = torch.tensor([1.0, 2.0, 3.0])
tensor2 = torch.tensor([4.0, 5.0, 6.0])
print("加法:", tensor1 + tensor2)

# 广播机制
tensor3 = torch.tensor([[1, 2], [3, 4]])
tensor_broadcast = tensor3 + torch.tensor([1, 2])
print("广播加法:\n", tensor_broadcast)

# 将tensor移动到GPU
if torch.cuda.is_available():
    tensor_gpu = tensor1.to("cuda")
    print("在GPU上的tensor:", tensor_gpu)


# ================ 改变形状 ================
tensor = torch.tensor([[1, 2, 3], [4, 5, 6]])

# 重塑
reshaped_tensor = tensor.reshape(3, 2)
print("重塑后的tensor:\n", reshaped_tensor)

# 转置
transposed_tensor = tensor.transpose(0, 1)
print("转置后的tensor:\n", transposed_tensor)


# ================ 自动微分 ================
# 创建需要梯度的tensor
x = torch.tensor([2.0, 3.0], requires_grad=True)
y = x * x  # 操作
y_sum = y.sum()  # 求和
y_sum.backward()  # 计算梯度，只能对标量调用backward()
print("x的梯度:", x.grad)  # 输出 tensor([4., 6.])


# ================ 与 ndarray 的转换 ================
# 从ndarray转换为tensor
numpy_array = np.array([1, 2, 3])
tensor_from_numpy = torch.from_numpy(numpy_array)
print("从ndarray转换为tensor:", tensor_from_numpy)

# 从tensor转换为ndarray
tensor = torch.tensor([4.0, 5.0, 6.0])
numpy_from_tensor = tensor.numpy()
print("从tensor转换为ndarray:", numpy_from_tensor)

 ```
 1.6.py
 ```
 import torch
import torch.nn as nn
import torch.optim as optim
import matplotlib.pyplot as plt


# ===================== 1. 构建人工数据集 =====================
# 假设真实的关系是 y = 3x + 2，并加入一些随机噪声

# 生成从0到10的100个点
X = torch.linspace(0, 10, 100)
# X.shape = (100)

X = X.unsqueeze(1)
# X.shape = (100, 1)

# 生成 y，加入随机噪声
y = 3 * X + 2 + torch.randn(100, 1)
# y.shape = (100, 1)

# 画出示例数据
plt.scatter(X.numpy(), y.numpy())
plt.show()


# ===================== 2. 定义线性回归模型 =====================
class LinearRegressionModel(nn.Module):
    def __init__(self):
        super(LinearRegressionModel, self).__init__()
        
        # y = wx + b，输出输出都是 1 维
        self.linear = nn.Linear(1, 1)

    def forward(self, x):
        return self.linear(x)

# 实例化模型
model = LinearRegressionModel()


# ===================== 3. 定义损失函数和优化器 =====================
# 均方误差作为损失函数
criterion = nn.MSELoss()

# 随机梯度下降 (SGD) 作为优化器
optimizer = optim.SGD(model.parameters(), lr=0.01)  # 学习率 0.01


# ===================== 4. 训练模型 =====================
epochs = 1000  # 训练回合数
for epoch in range(epochs):
    # 使用模型预测输出
    predictions = model(X)
    
    # 计算损失
    loss = criterion(predictions, y)
    
    # 梯度清零，防止累积
    optimizer.zero_grad()
    
    # 计算梯度
    loss.backward()
    
    # 更新参数
    optimizer.step()

    # 打印训练过程中的损失值
    if (epoch + 1) % 20 == 0:
        print(f'Epoch [{epoch + 1}/{epochs}], Loss: {loss.item():.4f}')


# ===================== 5. 可视化结果 =====================
# 使用训练好的模型预测
predicted = model(X)

# 原始数据
plt.scatter(X.numpy(), y.numpy(), label='Original Data')

# 预测数据
plt.plot(X.numpy(), predicted.detach().numpy(), color='red', label='Fitted Line')

plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()

 ```
 1.9.py
 ```
 import torch
import torch.nn as nn
import torch.optim as optim
import matplotlib.pyplot as plt
import torch.nn.functional as F


# ===================== 1. 构建人工数据集 =====================
# 创建两个类别的数据集，使用正态分布生成两组数据

# 类别 0 的数据，均值为 (2, 2)
x0 = torch.randn(50, 2) + torch.tensor([2, 2])
# x0.shape = (50, 2)

# 类别 1 的数据，均值为 (7, 7)
x1 = torch.randn(50, 2) + torch.tensor([7, 7])

# 标签为 0、1
y0 = torch.zeros(50, dtype=torch.long)
y1 = torch.ones(50, dtype=torch.long)  
# y0.shape = (50,)


# 合并数据
X = torch.cat([x0, x1], dim=0)
# X.shape = (100, 2)

y = torch.cat([y0, y1], dim=0)
# y.shape = (100,)

# 可视化数据
plt.scatter(X[:, 0].numpy(), X[:, 1].numpy(), c=y.numpy())
plt.xlabel('Feature 1')
plt.ylabel('Feature 2')
plt.title('Training Data')
plt.show()


# ===================== 2. 定义Softmax分类模型 =====================
class SoftmaxClassifier(nn.Module):
    def __init__(self):
        super(SoftmaxClassifier, self).__init__()
        
        # 两个特征输入，两个类别输出
        self.linear = nn.Linear(2, 2)  # 输入2维，输出2维

    def forward(self, x):
        return self.linear(x)

# 实例化模型
model = SoftmaxClassifier()


# ===================== 3. 定义损失函数和优化器 =====================
# 交叉熵损失，内部包含了 softmax
criterion = nn.CrossEntropyLoss()

# 随机梯度下降 (SGD) 作为优化器
optimizer = optim.SGD(model.parameters(), lr=0.01)  # 学习率 0.01


# ===================== 4. 训练模型 =====================
epochs = 1000  # 训练回合数
for epoch in range(epochs):
    # 使用模型预测输出
    predictions = model(X)
    # predictions.shape = (100, 2)
    
    # 计算损失
    loss = criterion(predictions, y)
    
    # 梯度清零，防止累积
    optimizer.zero_grad()
    
    # 计算梯度
    loss.backward()
    
    # 更新参数
    optimizer.step()

    # 打印训练过程中的损失值
    if (epoch + 1) % 100 == 0:
        print(f'Epoch [{epoch + 1}/{epochs}], Loss: {loss.item():.4f}')


# ===================== 5. 可视化结果 =====================
# 使用训练好的模型在同一数据上进行预测
with torch.no_grad():
    predicted_labels = torch.argmax(model(X), dim=1)  # 取出每个样本的最高分对应的类别
    # predicted_labels.shape = (100,)

# 可视化真值与预测结果对比
plt.scatter(X[:, 0].numpy(), X[:, 1].numpy(), c=y.numpy(), marker='o', label='True Labels')
plt.scatter(X[:, 0].numpy(), X[:, 1].numpy(), c=predicted_labels.numpy(), marker='x', label='Predicted Labels')
plt.xlabel('Feature 1')
plt.ylabel('Feature 2')
plt.title('True Labels vs Predicted Labels')
plt.legend(['True Labels (circles)', 'Predicted Labels (crosses)'])
plt.show()

 ```
 2.5.py
 ```
 import torch
import torch.nn as nn
import torch.optim as optim
import matplotlib.pyplot as plt


# ===================== 1. 构建人工数据集 =====================
# 假设真实的关系是 y = sin(2x) + log(abs(x) + 1) - 0.05x^3，并加入一些随机噪声

# 生成从-4到4的500个点
X = torch.linspace(-4, 4, 500)
# X.shape = (500)

X = X.unsqueeze(1)
# X.shape = (500, 1)

# 生成 y，加入随机噪声
y = torch.sin(2 * X) + torch.log(torch.abs(X) + 1) - 0.05 * X**3 + torch.randn(500, 1) * 0.2
# y.shape = (500, 1)

# 画出示例数据
plt.scatter(X.numpy(), y.numpy(), s=10)
plt.title("Complex Nonlinear Dataset")
plt.show()


# ===================== 2. 定义 MLP 模型 =====================
class MLPModel(nn.Module):
    def __init__(self):
        super(MLPModel, self).__init__()
        
        # 多层感知机，包含两层隐藏层
        self.mlp = nn.Sequential(
            nn.Linear(1, 64),  # 输入维度为1，隐藏层维度为64
            nn.ReLU(),         # 激活函数 ReLU
            nn.Linear(64, 64), # 隐藏层维度为64
            nn.ReLU(),         # 激活函数 ReLU
            nn.Linear(64, 1),  # 输出维度为1
        )

    def forward(self, x):
        return self.mlp(x)

# 实例化模型
model = MLPModel()


# ===================== 3. 定义损失函数和优化器 =====================
# 均方误差作为损失函数
criterion = nn.MSELoss()

# Adam 作为优化器
optimizer = optim.Adam(model.parameters(), lr=0.01)  # 学习率 0.01


# ===================== 4. 训练模型 =====================
epochs = 1000  # 训练回合数
for epoch in range(epochs):
    # 使用模型预测输出
    predictions = model(X)
    
    # 计算损失
    loss = criterion(predictions, y)
    
    # 梯度清零，防止累积
    optimizer.zero_grad()
    
    # 计算梯度
    loss.backward()
    
    # 更新参数
    optimizer.step()

    # 打印训练过程中的损失值
    if (epoch + 1) % 100 == 0:
        print(f'Epoch [{epoch + 1}/{epochs}], Loss: {loss.item():.4f}')


# ===================== 5. 可视化结果 =====================
# 使用训练好的模型预测
predicted = model(X)

# 原始数据
plt.scatter(X.numpy(), y.numpy(), label='Original Data', s=10)

# 预测数据
plt.plot(X.numpy(), predicted.detach().numpy(), color='red', label='Fitted Curve')

plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.title("Fitted Curve by MLP")
plt.show()

 ```
 2.6.py
 ```
 import torch
import torch.nn as nn
import torch.optim as optim
from torch.utils.data import Dataset, DataLoader
import matplotlib.pyplot as plt


# ===================== 1. 构建人工数据集 =====================
# 自定义数据集类
class NonlinearDataset(Dataset):
    def __init__(self, num_samples=5000):
        super(NonlinearDataset, self).__init__()
        
        # 生成数据
        self.X = torch.linspace(-4, 4, num_samples).unsqueeze(1)  # (num_samples, 1)
        self.y = (
            torch.sin(2 * self.X)
            + torch.log(torch.abs(self.X) + 1)
            - 0.05 * self.X**3
            + torch.randn(num_samples, 1) * 0.2
        )  # (num_samples, 1)

    def __len__(self):
        return len(self.X)

    def __getitem__(self, idx):
        return self.X[idx], self.y[idx]

# 实例化数据集
dataset = NonlinearDataset(num_samples=5000000)

# 创建 DataLoader，指定批量大小和是否打乱数据
batch_size = 1000000
dataloader = DataLoader(dataset, batch_size=batch_size, shuffle=True)


# ===================== 2. 定义 MLP 模型 =====================
class MLPModel(nn.Module):
    def __init__(self):
        super(MLPModel, self).__init__()
        
        # 多层感知机，包含两层隐藏层
        self.mlp = nn.Sequential(
            nn.Linear(1, 64),  # 输入维度为1，隐藏层维度为64
            nn.ReLU(),         # 激活函数 ReLU
            nn.Linear(64, 64), # 隐藏层维度为64
            nn.ReLU(),         # 激活函数 ReLU
            nn.Linear(64, 1),  # 输出维度为1
        )

    def forward(self, x):
        return self.mlp(x)

# 实例化模型
model = MLPModel()


# ===================== 3. 定义损失函数和优化器 =====================
# 均方误差作为损失函数
criterion = nn.MSELoss()

# Adam 作为优化器
optimizer = optim.Adam(model.parameters(), lr=0.01)  # 学习率 0.01


# ===================== 4. 训练模型 =====================
epochs = 20  # 训练回合数
for epoch in range(epochs):
    for X_batch, y_batch in dataloader:
        # 使用模型预测输出
        predictions = model(X_batch)
        
        # 计算损失
        loss = criterion(predictions, y_batch)
        
        # 梯度清零，防止累积
        optimizer.zero_grad()
        
        # 计算梯度
        loss.backward()
        
        # 更新参数
        optimizer.step()

    # 打印训练过程中的损失值
    print(f'Epoch [{epoch + 1}/{epochs}], Loss: {loss.item():.4f}')


# ===================== 5. 可视化结果 =====================
# 使用训练好的模型预测
with torch.no_grad():
    predictions = model(dataset.X)

# 原始数据
plt.scatter(dataset.X.numpy(), dataset.y.numpy(), label='Original Data', s=10)

# 预测数据
plt.plot(dataset.X.numpy(), predictions.numpy(), color='red', label='Fitted Curve')

plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.title("Fitted Curve by MLP with Batches")
plt.show()

 ```
 2.11
 [下载压缩包2.11.zip](/courses_resource/ai_mllm_aigc/resource/src/2.11.zip)
 3.1.py
 ```
 #  PIL 是 Python Imaging Library 的缩写，是 Python 官方的图像处理库
from PIL import Image
import numpy as np
import torch

# 1. 读取图片，将此路径替换为你的图片路径
image = Image.open('./data/img.png')

# 2. 将图片转换为numpy的ndarray格式
image_array = np.array(image)
print("Numpy ndarray格式的图片数据：")
print("数据类型：", image_array.dtype)
print("形状：", image_array.shape)

# 3. 将numpy的ndarray转换为PyTorch的tensor格式
image_tensor = torch.from_numpy(image_array)
print("PyTorch tensor格式的图片数据：")
print("数据类型：", image_tensor.dtype)
print("形状：", image_tensor.shape)

 ```
 3.2.py
 ```
 import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torchvision import datasets, transforms
from torch.utils.data import DataLoader


class SimpleMLP(nn.Module):
    def __init__(self):
        super(SimpleMLP, self).__init__()

        # 第一层全连接层，输入784（28x28图像），输出256
        self.fc1 = nn.Linear(784, 256)

        # 第二层全连接层，输入256，输出128
        self.fc2 = nn.Linear(256, 128)

        # 第三层全连接层，输入128，输出10（类别数）
        self.fc3 = nn.Linear(128, 10)

    def forward(self, x):
        # x.shape = (b, 1, 28, 28)
        
        # 将图像展平为一维向量
        x = torch.flatten(x, 1)
        # x.shape = (b, 784)

        # 第一层全连接后使用ReLU激活函数
        x = F.relu(self.fc1(x))

        # 第二层全连接后使用ReLU激活函数
        x = F.relu(self.fc2(x))

        # 第三层全连接输出
        x = self.fc3(x)
        # x.shape = (b, 10)

        # 在使用nn.CrossEntropyLoss时，不需要在这里应用Softmax
        return x

def main():
    # 加载 MNIST 训练集
    # 参数：数据集的本地路径、使用训练集还是测试集、是否自动下载数据集、数据预处理流程
    train_dataset = datasets.MNIST(
        root='./data',
        train=True, 
        download=True, 
        transform=transforms.ToTensor()
    )
    
    # 从数据集创建DataLoader
    train_loader = DataLoader(train_dataset, batch_size=32, shuffle=True)

    model = SimpleMLP()
    
    # 分类问题，使用交叉熵损失函数
    loss_func = nn.CrossEntropyLoss()

    optimizer = optim.SGD(model.parameters(), lr=0.01)

    # 设置网络为训练模式
    model.train()

    for epoch in range(5):  # 总共训练5轮
        # 本轮训练的平均loss
        train_loss = 0

        # enumerate用法：https://www.runoob.com/python/python-func-enumerate.html
        for batch_idx, (data, target) in enumerate(train_loader):
            # data.shape = (b, 1, 28, 28)
            # target.shape = (b, 10)

            # 将网络中的梯度清零
            optimizer.zero_grad()

            # 进行一次推理
            output = model(data)
            # output.shape = (b, 10)

            # 调用损失函数，计算损失值
            loss = loss_func(output, target)
            train_loss += loss.item()

            # 反向传播，计算loss的梯度
            loss.backward()

            # 使用网络中的梯度更新参数
            optimizer.step()

            # 每100次循环打印一次
            if batch_idx % 100 == 0:
                print(f"训练轮次: {epoch + 1} [{batch_idx * len(data)}/{len(train_loader.dataset)}] 损失: {loss.item():.6f}")
        
        print(f"================ 训练轮次: {epoch + 1} 平均损失: {train_loss / len(train_loader):.6f} ================\n")


if __name__ == '__main__':
    main()

 ```
 3.8
 [下载压缩包3.8.zip](/courses_resource/ai_mllm_aigc/resource/src/3.8.zip)
 3.10.py
```
from torch import nn


def vgg_block(num_convs, in_channels, out_channels):
    layers = []
    for _ in range(num_convs):
        layers.append(nn.Conv2d(in_channels, out_channels,
                                kernel_size=3, padding=1))
        layers.append(nn.ReLU())
        in_channels = out_channels
    layers.append(nn.MaxPool2d(kernel_size=2,stride=2))
    return nn.Sequential(*layers)

def vgg(conv_arch):
    conv_blks = []
    in_channels = 3
    # 卷积层部分
    for (num_convs, out_channels) in conv_arch:
        conv_blks.append(vgg_block(num_convs, in_channels, out_channels))
        in_channels = out_channels

    return nn.Sequential(
        *conv_blks, nn.Flatten(),
        # 全连接层部分
        nn.Linear(out_channels * 7 * 7, 4096), nn.ReLU(), nn.Dropout(0.5),
        nn.Linear(4096, 4096), nn.ReLU(), nn.Dropout(0.5),
        # 预测 1000 个类别
        nn.Linear(4096, 1000)
    )

conv_arch = ((2, 64), (2, 128), (3, 256), (3, 512), (3, 512))
net = vgg(conv_arch)

```
3.11.py
```
from torch import nn

# 在全连接层使用 BN
layer = nn.Sequential(
    nn.Linear(128, 64),
    # 1D Batch norm，输入维度为 256
    nn.BatchNorm1d(64),
    nn.ReLU()
)

# 在卷积层使用 BN
layer = nn.Sequential(
    nn.Conv2d(1, 6, kernel_size=3),
    # 2D Batch norm，通道数为 6（卷积层的输出通道数）
    nn.BatchNorm2d(6),
    nn.ReLU(),
    nn.MaxPool2d(kernel_size = 2, stride = 2)
)

```
3.13.py
```
from torch import nn
from torch.nn import functional as F


class Residual(nn.Module):
    """实现残差块
    """
    def __init__(self, in_channels, out_channels, use_1x1conv=False, stride=1):
        super().__init__()
        self.seq = nn.Sequential(
            nn.Conv2d(in_channels, out_channels, kernel_size=3, padding=1, stride=stride),
            nn.BatchNorm2d(out_channels),
            nn.ReLU(),
            nn.Conv2d(out_channels, out_channels, kernel_size=3, padding=1),
            nn.BatchNorm2d(out_channels)
        )
        
        # 是否使用 1x1 卷积层来适配尺寸
        if use_1x1conv:
            self.res_conv = nn.Conv2d(in_channels, out_channels, kernel_size=1, stride=stride)
        else:
            self.res_conv = None

    def forward(self, X):
        Y = self.seq(X)
        
        if self.res_conv:
            X = self.res_conv(X)
        
        Y += X
        return F.relu(Y)

```

 [下载测试数据压缩包](/courses_resource/ai_mllm_aigc/resource/src/data.zip)

# 课程学习PPT资料
 
[循环神经网络-RNN.pdf](/courses_resource/ai_mllm_aigc/resource/循环神经网络-RNN.pdf)
[循环神经网络-LSTM.pdf](/courses_resource/ai_mllm_aigc/resource/循环神经网络-LSTM.pdf)
[5.3循环神经网络-GRU.pdf](/courses_resource/ai_mllm_aigc/resource/5.3循环神经网络-GRU.pdf)
[6.1Transformer架构解析.pdf](/courses_resource/ai_mllm_aigc/resource/6.1Transformer架构解析.pdf)
[7.1 BERT.pdf](/courses_resource/ai_mllm_aigc/resource/7.1BERT.pdf)
[LLaMA3.pdf](/courses_resource/ai_mllm_aigc/resource/LLaMA3.pdf)
[GPT.pdf](/courses_resource/ai_mllm_aigc/resource/GPT.pdf)