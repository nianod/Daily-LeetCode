# Contributing

Everyone is welcome to contribute to this repository. You can add a solution, improve
an existing one, report an issue, fix documentation, or contribute learning notes and
examples.

## What You Can Contribute

- Solutions to LeetCode and other programming problems
- A clearer or more efficient approach to an existing problem
- Matching implementations in Python, C++, JavaScript, or TypeScript
- Test cases, examples, or corrections to existing code
- Improvements to the 30 Days of JavaScript solutions
- Database practice, system design, or distributed systems notes
- Documentation fixes, including problem links and complexity explanations

Solutions in all four supported languages are welcome; a problem does not need to be
implemented in every language before you can contribute it. SQL examples belong in
the database practice area and are separate from the four main solution languages.

## Getting Started

1. Browse the repository and check whether the problem or topic already exists.
2. For a small, self-contained change, you can open a pull request directly. For a
   larger change or a new direction for the repository, open an issue first to discuss it.
3. Fork the repository and create a branch for your change.
4. Make the change, run the relevant checks, and commit it with a clear message.
5. Open a pull request describing what you changed and how you tested it.

Please keep pull requests focused. If you are fixing an unrelated issue while working
on something else, consider submitting it separately.

## Where to Put Your Contribution

Follow the existing structure where possible:

- DSA solutions go under `DSA/<language>/`.
- Standalone or less-categorized problems go under `Randoms/<problem-name>/`.
- 30 Days of JavaScript solutions go under
  `30-days-of-Js/javascript/`; TypeScript counterparts go under
  `30-days-of-Js/typescript/`.
- Database exercises go under `database/`.
- System design and distributed systems material belongs in their corresponding folders.

Use a descriptive, consistent problem name for files. When adding another language
version of an existing solution, match the existing problem name and folder pattern.

## Solution Guidelines

- Keep the implementation readable and focused on the problem.
- Use the expected function or class signature when the problem platform requires one.
- Include a short problem title and link when available; link to the original prompt
  instead of copying its full text.
- Explain non-obvious decisions and include time and space complexity when useful.
- Add representative examples or tests. If the file is intended to run by itself,
  include a small driver; if it uses the platform's submission format, keep that format.
- Do not add generated binaries, dependency folders, credentials, or unrelated files.
- Use only code and material you have the right to contribute. Attribute external
  references where appropriate.

## Running and Checking Changes

Run commands from the repository root. Choose the checks relevant to the files you
changed:

```bash
# Python
python3 path/to/solution.py

# JavaScript
node path/to/solution.js

# TypeScript
npm install
npx ts-node path/to/solution.ts
npx tsc --noEmit
```

C++ solutions may use the platform's submission format and may not be standalone
programs. If you add a local test driver, compile it with a C++ compiler such as `g++`
and verify the sample cases.

## Pull Request Checklist

- [ ] The change is limited to the described problem or documentation update.
- [ ] Files are in the appropriate folder and use clear names.
- [ ] I tested the solution or checked the examples relevant to the change.
- [ ] I noted any platform-specific assumptions or incomplete work in the pull request.

Please be respectful and constructive in issues and reviews. The goal is to learn
together and make the collection more useful for everyone.