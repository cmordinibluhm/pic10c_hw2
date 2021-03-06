# Grade Calculator GUI with Qt

![](https://github.com/cmordinibluhm/pic10c_hw2/blob/master/grade_calc_screenshot.png)


## Table of Contents
- [Goal](#goal)
- [Rubric](#rubric)
- [To Do](#to-do)
- [Project Log](#project-log)

## Goal
Get familiar with Qt, Qt Designer, and Qt Creator in general

![](https://bytebucket.org/rikis-salazar/10c-spring18-class-website/raw/a4a4fc64ba01b99a2a2cdb5b2f661741a55cc745/assignments/hw2/grade-breakdown.png)


## Rubric
Points will be assigned based on the following categories:

| **Category** | **Description** | **Points** |
|:-----|:----------------------------------------------------------|:---:|
| _GUI_ | The _GUI_ looks and feels right. | 10 |
| Connections | The _GUI_ responds to events (e.g., mouse clicks, keyboard presses, etc). | 8 |
| Extras | Program can calculate grades for different classes (e.g., 10C and 10B). | 2 |

## To Do
- Submit calculator.txt (CHECK)
- Remember to stage .pro and .ui files generated by Qt Creator (CHECK)
- Program looks nice (CHECK)
- Program reads values and does something with them (and calculates everything accurately I might add) (CHECK)

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

### Commit 6
Added a push button and a lcd number display.
Connected push button clicked() signal to the lcd number's slot display() to calculate the average of the 8 homework assignments.
Program now calculates scheme A (25% hw, 20% each midterm, 35% final) and scheme B (25% hw, 30% best midterm, 44% final) and displays both.
Committed and merged with master. Push to main.

### Commit 7
Changed fonts to Courier New, boldface, varying sizes. Made notches visible on dials.
Changed window and dial colors via pallette field.

Went to Professor Salazar's office hours and showed him the calculator. He said that it is ready to submit and will get full credit! I'm still going to figure out how
to calculate grades for multiple classes though.

Regarding this, he gave two possible solutions:
1. Toggling all the widgets associated with one course to not visible and all the widgets for another course to visible.
2. Using Tab widgets (recommends this approach)

### Commit 8
Somehow my .pro file got deleted and I commited that deletion. I had to checkout the previous commit and restore the file using the following

$ git rev-list -n 1 HEAD -- <file>
$ git checkout <commit>^ -- <file>

### Commit 9
Added TabWidgets to allow for multiple classes. Worked like a charm.

Connected all the dials and spinboxes for the PIC 10C grading tab and set up the calculations for the two grading schemes. Everything works great. Made it so that
pressing the space key goes ahead and calculates both classes grades.

Project Complete.


### Resources
Displaying images in a markdown document
https://stackoverflow.com/questions/14494747/add-images-to-readme-md-on-github

Example of Qt .gitignore
https://github.com/github/gitignore/blob/master/Qt.gitignore

Creating a Qt GUI Widget App YouTube Tutorial
https://www.youtube.com/watch?v=3SIj6zL6mmA

Calculating Weighted Averages
http://www.blacksdomain.com/files/Notes/Calculating_WA.php

Restoring a File Deleted from a Previous Commit
https://www.quora.com/How-can-I-recover-a-file-I-deleted-in-my-local-repo-from-the-remote-repo-in-Git

