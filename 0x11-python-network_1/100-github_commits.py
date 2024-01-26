#!/usr/bin/python3
"""A Python script that takes 2 arguments
in order to solve this challenge."""
import requests
from sys import argv

if __name__ == "__main__":
    URL = "https://api.github.com/repos/{}/{}/commits"\
          .format(argv[2], argv[1])
    response = requests.get(URL)
    num = 0
    for i in response.json():
        if num < 10:
            print("{}: {}".format(i.get("sha"),
                  i.get("commit").get("author").get("name")))
        num += 1
