if __name__ == "__main__":
    scores = {}
    sortedScores = []

    for _ in range(int(input())):
        name = input()
        score = float(input())
        sortedScores.append(score)

        if score in scores:
            scores[score].append(name)
        else:
            scores[score] = [name]

    sortedScores = sorted(set(sortedScores))
    students = sorted(scores[sortedScores[1]])
    for name in students:
        print(name)
