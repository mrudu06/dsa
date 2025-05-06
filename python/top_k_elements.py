def count(lst):
    counts = {}
    for i in lst:
        if i in counts:
            counts[i] += 1
        else:
            counts[i] = 1
    return counts

def top_k_elements(lst,k):
    op_lst=[]
    counts = count(lst)
    for i in range(k):
        max_key = max(counts, key=counts.get)  
        op_lst.append(max_key)
        counts.pop(max_key)
   
   
    return op_lst

print(top_k_elements([1, 1, 1, 2, 2, 3], 2))  # Output: [1, 2]
print(top_k_elements([4, 4, 4, 5, 5, 6], 3))  # Output: [4, 5, 6]
print(top_k_elements([1, 2, 3, 4, 5], 2))  # Output: [1, 2]