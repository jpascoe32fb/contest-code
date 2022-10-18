megs_month = int(input())
months = int(input())

megs_left = megs_month
for month in range(months):
    usage = int(input())
    megs_left -= usage
    megs_left += megs_month

print(megs_left)