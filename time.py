def convert_time(hrs, min):
    min= hrs*60+min
    return min
start=int(input("Enter the hours:"))  
start1=int(input("Enter the minutes:"))

end=int(input("Enter the hours:"))
end1=int(input("Enter the minutes:"))

if end>start:
    result1=convert_time(end-start,end1-start1)
    print(result1)
else:
    result2=convert_time((start-end),start1-end1)
    print(result2)