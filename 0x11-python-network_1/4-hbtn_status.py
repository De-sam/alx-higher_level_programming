#!/usr/bin/python3
"""
A Python script that fetches
https://alx-intranet.hbtn.io/status
"""
import requests


if __name__ == "__main__":
    response = requests.get('https://alx-intranet.hbtn.io/status')
    print('Body response:\n\t- type: {}\n\t- content: {}'
          .format(type(response.text), response.text))
