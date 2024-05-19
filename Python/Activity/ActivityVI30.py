longstrings = lambda strings: list(filter(lambda string: len(string) >= 5, strings))
print(longstrings(["Hell","World","Python"]))
