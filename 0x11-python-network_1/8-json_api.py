#!/usr/bin/python3
"""A Python script that takes in a letter and sends a POST request
to http://0.0.0.0:5000/search_user with the letter as a parameter."""
import requests
from sys import argv


if __name__ == '__main__':
    letter = {'q': argv[1][0] if len(argv) > 1 else ''}
    res = requests.post('http://0.0.0.0:5000/search_user', data=letter)
    try:
        response = res.json()
        if response:
            print('[{}] {}'.format(response.get('id'), response.get('name')))
        else:
            print('No result')
    except ValueError:
        print('Not a valid JSON')
