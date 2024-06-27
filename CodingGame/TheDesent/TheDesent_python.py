import sys
import math

# game loop
while True:
    max_h = max_index = 0 # 파이썬 초기화방식
    for i in range(8):
        mountain_h = int(input())  # represents the height of one mountain.

        if mountain_h > max_h: # 입력 받은 산의 높이가 현재까지의 최댓값보다 크다면
            max_h = mountain_h # 산의 높이와 인덱스를 갱신
            max_index = i  
        
    print(max_index) # 가장 높은 산의 인덱스를 출력

