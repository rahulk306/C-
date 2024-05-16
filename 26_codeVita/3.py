def count_valid_selections(row):    # Count the number of valid selections in a row
    count = 0    n = len(row)
    for i in range(n - 2):
        # Check if no two adjacent trees are the same        if row[i] != row[i + 1] and row[i + 1] != row[i + 2] and row[i] != row[i + 2]:
            count += 1
    return count
def determine_winner(ashok_row, anand_row):    # Count valid selections for both rows
    ashok_count = count_valid_selections(ashok_row)    anand_count = count_valid_selections(anand_row)
    # Determine the winner based on counts
    if ashok_count > anand_count:        return "Ashok"
    elif anand_count > ashok_count:        return "Anand"
    else:        return "Draw"
# Taking input
ashok_row = input().strip()anand_row = input().strip()
# Check for valid input length
if len(ashok_row) != len(anand_row):    print("Invalid input")
else:    # Determine and print the winner
    winner = determine_winner(ashok_row, anand_row)  print(winner)