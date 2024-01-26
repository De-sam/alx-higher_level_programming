#!/usr/bin/python3
"""A Python script that takes in a URL and an email,
sends a POST request to the passed URL with the email as a parameter,
and displays the body of the response (decoded in utf-8)"""
from urllib import request, parse
from sys import argv


if len(argv) > 2:
    email = {'email': argv[2]}
    data = parse.urlencode(email).encode('ascii')
    req = request.Request(argv[1], data)
    with request.urlopen(req) as response:
        r = response.read()
        print(r.decode('utf-8'))
