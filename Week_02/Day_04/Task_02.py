# Create a program to calculate a user’s grade based on marks:	{90-100: A, 80-89: B, 70-79: C, else F.}

pf_marks = float(input("Enter Your Marks In Programming Fundamentals : "))
cal_marks = float(input("Enter Your Marks In Calculus : "))
ap_marks = float(input("Enter Your Marks In Applied Physics : "))
fe_marks = float(input("Enter Your Marks In Functional English : "))
ict_marks = float(input("Enter Your Marks In ICT : "))

total = pf_marks + cal_marks + ap_marks + fe_marks + ict_marks
per = total/5

if(per>=90):
    print("You Got A Grade")
elif(per>=80):
    print("You Got B Grade")
elif(per>=70):
    print("You Got C Grade")
else:
    print("You Are Fail")
