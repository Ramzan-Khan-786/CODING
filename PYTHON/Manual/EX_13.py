import re


phone = input("Enter your phone number: ")
email = input("Enter your email ID: ")


phone_pattern = re.fullmatch(r"[6-9]\d{9}", phone) 
email_pattern = re.fullmatch(r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}", email)


if phone_pattern:
    print("✅ Valid phone number")
else:
    print("❌ Invalid phone number")


if email_pattern:
    print("✅ Valid email ID")
else:
    print("❌ Invalid email ID")
