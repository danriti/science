#!/usr/bin/python

def reverse_sentence(string):
    l = string.split(' ')
    fullLength = len(l)
    length = fullLength - 1

    for i in range(fullLength/2):
        (l[i], l[length - i]) = (reverse_word(l[length - i]), reverse_word(l[i]))

    return ' '.join(l)


def reverse_word(string):
    fullLength = len(string)
    length = fullLength - 1
    l = list(string)

    for i in range(fullLength/2):
        (l[i], l[length - i]) = (l[length - i], l[i])

    return ''.join(l)


if __name__ == '__main__':
    print 'Reverse a String!'

    print ('to'[::-1] == reverse_word('to'))
    print ('tre'[::-1] == reverse_word('tre'))
    print ('four'[::-1] == reverse_word('four'))
    print ('five!'[::-1] == reverse_word('five!'))
    print ('sixsix'[::-1] == reverse_word('sixsix'))

    print ('Hello World!'[::-1] == reverse_sentence('Hello World!'))
    print ('Here is a long sentence. Yup!'[::-1] == reverse_sentence('Here is a long sentence. Yup!'))
