def ave(score):
    return sum(score)/len(score)
students={
"小明":[44,5,6],
"小红":[44,55,22],
"小刚":[99,88,90]
}
for name,sc in students.items():
    print(f"{name}的平均分是{ave(sc):.2f}")



