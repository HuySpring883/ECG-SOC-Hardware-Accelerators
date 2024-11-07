# Contribution Guidelines for ECG-SOC Hardware Accelerators Repository

Welcome to the **ECG-SOC Hardware Accelerators** repository! This guide will help us work efficiently together and maintain a clean, organized codebase as we implement the Pan-Tompkins algorithm. Each team member will be working on a specific filter or feature, so please follow the steps below for consistent and conflict-free collaboration.

## Table of Contents
1. [Getting Started](#1-getting-started)
2. [Creating and Managing Branches](#2-creating-and-managing-branches)
3. [Implementing Your Filter](#3-implementing-your-filter)
4. [Committing and Pushing Changes](#4-committing-and-pushing-changes)
5. [Creating a Pull Request (PR)](#5-creating-a-pull-request-pr)
6. [Keeping Your Branch Up-to-Date](#6-keeping-your-branch-up-to-date)
7. [Project Structure](#7-project-structure)

---

### 1. Getting Started

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/HuySpring883/ECG-SOC-Hardware-Accelerators.git
   ```

2. Move into the project directory:

   ```bash
   cd ECG-SOC-Hardware-Accelerators
   ```

3. Pull the latest changes from the `main` branch to ensure you’re up-to-date:

   ```bash
   git pull origin main
   ```

### 2. Creating and Managing Branches

Each team member should work on a separate branch dedicated to their filter or feature. This keeps the `main` branch clean and allows for independent development.

1. Create a new branch with a descriptive name, e.g., `feature-derivative-filter`:

   ```bash
   git checkout -b branch-filter-name
   ```

2. This branch will be dedicated to your work on the derivative filter (or other assigned filter).

### 3. Implementing Your Filter

1. Add your code to the appropriate file, creating a new `.c` file for your filter if it doesn’t already exist (e.g., `derivative_filter.c`).
2. Declare functions in `filters.h` as needed to ensure other parts of the code can call your filter function.

### 4. Committing and Pushing Changes

1. After making changes, stage and commit them with a descriptive message:

   ```bash
   git add .
   git commit -m "Comment change."
   ```

2. Push your branch to GitHub:

   ```bash
   git push origin branch-filter-name
   ```

### 5. Creating a Pull Request (PR)

Once your feature is complete:

1. Go to the repository on GitHub, navigate to the **Pull Requests** tab, and click **New Pull Request**.
2. Select `main` as the base branch and your branch (e.g., `branch-filter-name`) as the compare branch.
3. Add a title and description for your PR, explaining what you’ve added or changed.
4. Request a code review from at least one team member.

### 6. Keeping Your Branch Up-to-Date

Periodically, pull the latest changes from `main` into your branch to avoid merge conflicts.

1. Switch to the main branch:

   ```bash
   git checkout main
   ```

2. Pull the latest changes:

   ```bash
   git pull origin main
   ```

3. Switch back to your branch:

   ```bash
   git checkout branch-filter-name
   ```

4. Merge changes from `main` into your branch:

   ```bash
   git merge main
   ```

5. Resolve any conflicts, if needed, and commit the merge.

### 7. Project Structure

To maintain a well-organized project, please follow this structure:

```
ECG-SOC-Hardware-Accelerators/
├── src/
│   ├── main.c                # Main program entry point
│   ├── derivative_filter.c   # Derivative filter implementation
│   ├── bandpass_filter.c     # Bandpass filter implementation
│   ├── ...                   # Other filters and components
│   └── filters.h             # Header file for filter declarations
├── tests/                    # Test cases for each filter
│   ├── test_derivative.c
│   ├── test_bandpass.c
│   └── ...
└── README.md                 # Project documentation
```

**Note**: Each filter should be implemented in its own `.c` file, and the declarations should go in `filters.h` to keep the code modular and maintainable.

---

By following these guidelines, we’ll ensure a smooth, efficient development process. If you have any questions, feel free to reach out to a team member or create an issue in the repository. Happy coding!
