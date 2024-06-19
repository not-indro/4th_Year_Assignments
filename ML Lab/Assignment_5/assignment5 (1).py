#!/usr/bin/env python
# coding: utf-8

# Name: Indranil Bain
# 
# Assignment 5
# 
# Enrollment Number: 2020CSB039

# In[23]:


import numpy as np
from tensorflow import keras
from tensorflow.keras.datasets import mnist
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Flatten, Dropout, Input
from sklearn.model_selection import train_test_split
import cv2
import matplotlib.pyplot as plt
import time

# Define the RBF function
def RBF(x, c, s):
    return np.exp(((x - c) ** 2) / (2 * s ** 2))

# Define the transformation function
def transform(image):
    image = np.pad(image, (2, 2))
    c = np.mean(image)
    s = np.std(image)
    return RBF(image, c, s).flatten()

# Load the MNIST dataset
(x_train, y_train), (x_test, y_test) = mnist.load_data()

# Transform the images
x_train_transformed = np.array([transform(image) for image in x_train])
x_test_transformed = np.array([transform(image) for image in x_test])

# Normalize the data to values between 0 and 1
x_train_transformed = x_train_transformed / 255.0
x_test_transformed = x_test_transformed / 255.0

# Split the dataset into training, validation, and test sets
x_train, x_val, y_train, y_val = train_test_split(x_train_transformed, y_train, test_size=0.2, random_state=42)
x_val, x_test, y_val, y_test = train_test_split(x_val, y_val, test_size=0.5, random_state=42)


# In[24]:


best_hyperparameters = {}
best_accuracy = 0
model= Sequential()


# In[25]:


def train_model(hyperparameters):
  for hyperparams in hyperparameters:
    # Build and compile the fully connected neural network
    global model
    model = Sequential()

    model.add(Input(shape=(1024,)))

    for neurons in hyperparams['hidden_layers']:
        model.add(Dense(neurons, activation='sigmoid'))

    model.add(Dropout(hyperparams['rate']))

    # Add output layer
    model.add(Dense(10, activation='softmax'))

    # Compile the model with the specified learning rate
    model.compile(optimizer=keras.optimizers.Adam(learning_rate=hyperparams['learning_rate']),
                  loss='categorical_crossentropy',
                  metrics=['accuracy'])

    start_time = time.time()

    # Train the model
    history = model.fit(x_train, keras.utils.to_categorical(y_train, 10),
              validation_data=(x_val, keras.utils.to_categorical(y_val, 10)),
              epochs=50,
              batch_size=64)

    end_time = time.time()

    training_time = end_time - start_time

    # Evaluate the model on the test set
    test_loss, test_accuracy = model.evaluate(x_test, keras.utils.to_categorical(y_test, 10))
    print(f'Test accuracy with hyperparameters {hyperparams}: {test_accuracy}\n')

    global best_hyperparameters
    global best_accuracy

    if test_accuracy > best_accuracy:
      best_accuracy = test_accuracy
      best_hyperparameters = hyperparams

    plot_training_history(history, hyperparams)

    return [test_accuracy, training_time]


# In[26]:


def plot_training_history(history, hyperparams):
    # Extract training and validation loss and accuracy
    train_loss = history.history['loss']
    val_loss = history.history['val_loss']
    train_accuracy = history.history['accuracy']
    val_accuracy = history.history['val_accuracy']

    # Create an array of epoch numbers
    epochs = range(1, len(train_loss) + 1)

    # Plot loss vs epoch
    plt.figure()
    plt.plot(epochs, train_loss, 'bo', label='Training loss')
    plt.plot(epochs, val_loss, 'b', label='Validation loss')
    plt.title(f'Loss vs Epoch ({hyperparams})')
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.legend()
    plt.show()

    # Plot accuracy vs epoch
    plt.figure()
    plt.plot(epochs, train_accuracy, 'bo', label='Training accuracy')
    plt.plot(epochs, val_accuracy, 'b', label='Validation accuracy')
    plt.title(f'Loss vs Epoch ({hyperparams})')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.legend()
    plt.show()


# In[27]:


# Define different sets of hyperparameters
hyperparameters = [
    {'hidden_layers': [16], 'learning_rate': 0.001, 'activation': 'sigmoid', 'rate': 0},
    {'hidden_layers': [16, 32], 'learning_rate': 0.001, 'activation': 'sigmoid', 'rate': 0},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'sigmoid', 'rate': 0}
]
train_model(hyperparameters)


# In[28]:


# Define different sets of hyperparameters
hyperparameters = [
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'sigmoid', 'rate': 0},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'tanh', 'rate': 0},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0}
]
train_model(hyperparameters)


# In[29]:


# Define different sets of hyperparameters
hyperparameters = [
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0.9},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0.75},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0.5},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0.25},
    {'hidden_layers': [16, 32, 64], 'learning_rate': 0.001, 'activation': 'relu', 'rate': 0.1}
]
train_model(hyperparameters)


# In[30]:


print(best_hyperparameters)
print(best_accuracy)


# In[31]:


import time
learning_rates_to_test = [0.01, 0.001, 0.005, 0.0001, 0.0005]


# In[32]:


best_accuracy_rate = 0
best_learning_rate = 0
best_training_time = 0

for lr in learning_rates_to_test:
    best_hyperparameters['learning_rate'] = lr
    result = train_model([best_hyperparameters])

    if result[0] > best_accuracy_rate:
      best_accuracy_rate = result[0]
      best_learning_rate = lr
      best_training_time = result[1]

best_hyperparameters['learning_rate']=best_learning_rate

print(f"Best learning rate: {best_learning_rate}")
print(f"Best validation accuracy: {best_accuracy}")
print(f"Time to achieve best validation accuracy: {best_training_time} seconds")


# In[33]:


train_model([best_hyperparameters])


# In[34]:


for i in range(1, 6):
    img = cv2.imread(str(i)+'.png')
    img = img[:, :, 2]
    img = cv2.resize(img, (28, 28), interpolation=cv2.INTER_AREA)
    img = 255-img
    imgplot = plt.imshow(img, cmap="gray")
    img = transform(img)
    img = np.expand_dims(img, axis=0)
    print(img.shape)
    pred = model.predict(img)
    print(np.argmax(pred))
    plt.show()

