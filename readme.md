# PIC10C: assignment 2: grade calculator

## Table of Contents
- [Goal](#goal)
- [Rubric](#rubric)
- [To Do](#to-do)
- [Project Log](#project-log)

## Goal
Get familiar with Qt, Qt Designer, and Qt creator in general

![alt text](https://bytebucket.org/rikis-salazar/10c-spring18-class-website/raw/a4a4fc64ba01b99a2a2cdb5b2f661741a55cc745/assignments/hw2/grade-breakdown.png)


## Rubric
Points will be assigned based on the following categories:

| **Category** | **Description** | **Points** |
|:-----|:----------------------------------------------------------|:---:|
| _GUI_ | The _GUI_ looks and feels right. | 10 |
| Connections | The _GUI_ responds to events (e.g., mouse clicks, keyboard presses, etc). | 8 |
| Extras | Program can calculate grades for different classes (e.g., 10C and 10B). | 2 |

## To Do
- Submit calculator.txt (CHECK)
- Remember to stage .pro and .ui files generated by Qt Creator

## Project Log

### Initial Commit
Add readme.md with "Goal", "Project Log", and "Resources" sections
Add "grade breakdown" photo in readme.md

### Commit 2
Add experimental branch.
Add table of contents to readme.md
Add rubric to readme.md
Add remote GitHub repo "pic10c_hw2" and push to remote

### Commit 3
Added calculator.txt for submission of url to CCLE
Submitted calculator.txt to CCLE
Created Qt widgets app "grade_calculator". Added 8 spinboxes and dials for homework assignments and connected 3 pairs of them.

### Commit 4
Confused about whether to track build-grade_calculator-Desktop_Qt_5_10_1_clang_64bit-Debug/ (RESOLVED)
Created .gitignore with      .DS_Store       .moc       .o          build-      .pro.user
Merged to master

### Commit 5
Every time I merge experimental I delete it and then recreate it. This seems like it might be unnecessary...
Finished connecting the signals and slots of the eight homework dials/spinboxes. Each spinBox and dial needed its max value changed from 99 to 100.
Added midterm 1, midterm 2, and final exam inputs.



### Resources
Displaying images in a markdown document
https://stackoverflow.com/questions/14494747/add-images-to-readme-md-on-github

Example of Qt .gitignore
https://github.com/github/gitignore/blob/master/Qt.gitignore
