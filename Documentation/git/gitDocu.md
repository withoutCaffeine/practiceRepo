# Git commands

git --version                               // see git version
git config --global user.name "username"    // set username
git config --global user.email "email"      // set email

git command -help   // see all the available options for the specific comamnd
git help --all      // see all possible commands

git status          // Show status of tracked & un-tracked files
git status --short  // Just show changed files
    Flags   
        ??          // Untracked files
        A           // files added to stage
        M           // modified files
        D           // deleted files

git log             // view history of commitss for repository

git init            // initialize empty git repository in current working directory 
git add filename    // add file to staging environment
git add --all       // add all files in working directory to staging environment
git add -A          // shorthand for above command
git commit -m ""    // commit changes and add message
git commit -a -m "" // -a will automatically stage every changed, already tracked file.


git branch <name>   // create a new branch
git branch          // list branches, * shows where you are
git checkout <name> // check out a new branch (move from current branch to branch listed
git checkout -b <name> // create a new branch, and move to it.
git merge <name>    // merge current branch with specified branch (Merge from Main/master branch)
git branch -d <name>// delete specified branch

When you attempt to merge, and there are conflicts, the file will be listed in git status (under unmerged)

You must open the file and fix conflicts (will be listed under <<<<<<< HEAD) Anything above the ======= line, is what is currently in your branch (usually master), and what is under is what is conflics in the branch to be merged.

git remote add origin URL // Adding a remote repository, with the specified URL, as an origin to your local Git repo (need to be in a repo for command to run without failure. 

git push --set-upstream origin master // 
