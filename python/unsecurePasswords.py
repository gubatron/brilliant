# Really Unsecure Passwords:
#
# At ReallyUnsecurePassword.com, they demand that users have a password, 
# which consists of the digits from 0 to 9, and is of length 4 that uses 
# exactly 2 different digits. How many different passwords can there be?
#
# https://brilliant.org/mathematics-problem/really-unsecure-passwords/?group=I3OlYiQan3eZ
#
def padWithZeros(strNumber):
    while len(strNumber)!=4:
        strNumber = '0' + strNumber
    return strNumber
    
def has2DifferentDigits(number):
    strNumber = padWithZeros(str(number))
    foundDigits={}
    for c in strNumber:
        if not foundDigits.has_key(c):
            foundDigits[c] = 1
    return len(foundDigits.keys()) == 2
        
validPasswordsFound = 0
for i in xrange(10000):
    if has2DifferentDigits(i):
        validPasswordsFound = validPasswordsFound + 1
        print "Found",validPasswordsFound," =>", padWithZeros(str(i))
