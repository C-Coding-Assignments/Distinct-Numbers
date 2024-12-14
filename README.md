<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Distinct Numbers Game 🔢</h1>
  <p>
    A group of kids enjoys playing a numbers game where they must identify the distinct numbers in a sequence and sort them in ascending order. This program helps them verify their answers.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Write a C program that finds the distinct numbers in a sequence, sorts them in ascending order, and verifies the kids' answers. The program must use specific functions as described below.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>An integer <code>n</code>, the size of the sequence.</li>
    <li>A sequence of <code>n</code> integers.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>The distinct numbers in ascending order, separated by spaces.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Enter the size of sequence: 8<br>
    Enter numbers: 12 25 5 25 12 8 5 12<br>
    Output: 5 8 12 25
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Enter the size of sequence: 5<br>
    Enter numbers: 12 25 5 2 8<br>
    Output: 2 5 8 12 25
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Enter the size of sequence: 5<br>
    Enter numbers: 12 12 15 12 15<br>
    Output: 12 15
  </div>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>
      The program must include the following functions:
      <ul>
        <li><code>int find_distinct(int numbers[], int n, int result[]);</code><br>
          Finds the distinct numbers in the array <code>numbers</code>, stores them in <code>result</code>, and returns the count of distinct numbers.
        </li>
        <li>
          A <code>selection_sort</code> function from the textbook to sort the numbers after finding the distinct elements.
        </li>
      </ul>
    </li>
    <li>In the main function, call the above functions and display the result.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o distinct_numbers distinct_numbers.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./distinct_numbers</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>The size of the sequence <code>n</code>.</li>
    <li>A sequence of <code>n</code> integers.</li>
  </ul>
</section>

</body>
</html>
