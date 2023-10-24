# Prediction-and-Interpolation-Analysis-
When dealing with experimental data it is often a requirement to fit a model to the data so that prediction and interpolation analysis can be performed. When the data exhibits a direct linear relationship, a leastsquares regression line can be used. 
Least-squares aims to find a model that minimises the sum of the squared distances between the data points and the model. A straight line linear model is of the form
y = mx + c, where m is the slope and c is the vertical intercept.

Algorithm
To find the line of best fit for a group of (x,y) points:
Step 1: For each (x,y) calculate x2 and xy
Step 2: Sum all x, y, x2 and xy which gives ∑x, ∑y, ∑x2 and ∑xy (∑ means “sum up”)
Step 3: Calculate slope m (m = (N∑xy - ∑x∑y) / (N∑(x2) – (∑x)2 ))
(N is the number of points.)
Step 4: Calculate intercept c (c= (∑y – m∑x) / N)
Step 5: Assemble the equation y =mx+c

An engineer is calibrating a load sensor and measured the resistance of the sensor over a range of loading conditions as shown below:
Kg (x)  Ohms (y)
0         0.3
10        1.2
20        2.4
30        2.9
40        4.3
50        5.8
60        6.1
70        6.9
80        8.6
90        9.2

Write a C program to compute the value of m and c and hence estimate the sensor resistance when 56 Kg is applied. 
