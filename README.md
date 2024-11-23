# INDIQUARKS: Cybersecurity Information and Trivia Program

**INDIQUARKS** is a simple console-based program written in C that provides users with various cybersecurity-related resources and a trivia quiz to test their knowledge. The program is interactive and offers four main options:

1. **Latest News in Cyberspace** - Displays links to recent cybersecurity news.
2. **Trivia Time** - A quiz where users can answer cybersecurity-related questions and receive a score based on their performance.
3. **Cybersecurity Courses** - Provides links to free and premium online cybersecurity courses.
4. **Live Cyber Events** - Displays links to current and upcoming cybersecurity conferences and events.

## Features

- **Latest Cybersecurity News**: Opens multiple web links to news websites such as The Hacker News, Krebs on Security, and others.
- **Trivia Quiz**: Users can answer multiple-choice questions to test their cybersecurity knowledge.
- **Cybersecurity Courses**: Provides links to free and paid cybersecurity courses available on popular platforms.
- **Live Cybersecurity Events**: Opens links to cybersecurity conferences such as DEFCON, Black Hat, and others.

## Requirements

To run this program, you need the following:

- A C compiler (e.g., GCC, MinGW).
- A terminal or command prompt for interaction.
- Internet access (for opening URLs using the `system()` function).

## How to Run

1. **Clone the repository**:

   ```bash
   git clone https://github.com/yourusername/INDIQUARKS.git
   cd INDIQUARKS
   ```

2. **Compile the code**:
   
   Using GCC:

   ```bash
   gcc -o INDIQUARKS INDIQUARKS.c
   ```

3. **Run the program**:

   On Windows:

   ```bash
   INDIQUARKS.exe
   ```

   On Linux/Mac:

   ```bash
   ./INDIQUARKS
   ```

## Usage

Once the program is running, you will be presented with a menu of options:

1. **Latest news in the cyberspace**: Displays the latest cybersecurity-related news articles by opening the URLs in the default browser.
2. **Trivia Time!!**: Starts the trivia quiz. You can answer the multiple-choice questions by typing the letter corresponding to your choice (A, B, C, or D).
3. **Try learning cybersecurity courses**: Opens links to various online courses related to cybersecurity.
4. **Links to live cyber events**: Opens links to live cybersecurity events and conferences.
5. **Exit**: Exits the program.

### Example:

```
Please choose an option:
1) Latest news in the cyberspace
2) Trivia Time!!
3) Try learning cyber security course (give links)
4) Links to live cyber events
5) Exit
Enter your choice: 2
Starting trivia quiz!
What does 'HTTP' stand for?
A) HyperText Transfer Protocol
B) High Text Transfer Protocol
C) Hyperlink Transfer Protocol
D) None of the above
Your answer: A
...
Your score: 8 out of 10
```

## Code Explanation

- **showLatestNews()**: Displays the latest cybersecurity news and opens news websites in the browser.
- **runTriviaQuiz()**: Starts the trivia quiz, asks 10 questions (randomly chosen), checks answers, and keeps track of the user's score.
- **showCyberSecurityCourseLinks()**: Opens links to online courses where users can learn more about cybersecurity.
- **showLiveCyberEvents()**: Opens links to live cybersecurity events and conferences.
- **main()**: The main function that displays a menu and executes the corresponding option based on user input.

## Notes

- This program uses `system("start URL")` to open URLs in the default web browser, which works on Windows. If you're using Linux or macOS, you may need to modify the `system` command to use `xdg-open` or `open` respectively.
- The trivia questions are pre-defined in the code and consist of multiple-choice questions related to cybersecurity.
  
## Contributing

If you would like to contribute to this project, feel free to fork the repository, create a new branch, and submit a pull request with your changes. All contributions are welcome!


---

Happy learning and stay secure! 🚀🔐

---
