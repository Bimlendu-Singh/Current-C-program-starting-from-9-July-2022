#include<iostream>
using namespace std;

int main()
{

  cout<<"Bheem Singh";
  cout<<"shift plus insert to paste in git bash";
  cout<<"touch 'nameoffile', command to create a new folder";
  cout<<"code . , comnd to open vs code from git bash";
  cout<<"git add -A, comnd to add untracked file to staging area";
  cout<<"git add --a, comnd to put all files in staging area ";
  cout<<"git add ., comnd to put all files in staging area ";
  cout<<"git commit -m -a"dgdg", to commit all file with some msg"; //don't give space after -a
  cout<<"git commit -m"commit message", to commit file when file is already in staging area!";
  cout<<"git commit and then type i , then write msg , then escape , then :wq fo exit";
  cout<<"ls, command to see list ";
  cout<<"git status, cmnd to see status";
  cout<<"git status -s , cmd to see staut sin one line when u have modified something";
  cout<<"git config --global user.name or user.email, cmd to see name and email repectively";
  cout<<"git checkout 'file name', comnd to get back file to previous version";
  cout<<"git log, command to see all commit u have done";
  cout<<"use q and quit if you get stuck in git log";
  cout<<"git log -p -2, command to see only last 2 commit";
  cout<<"write any file to in .gitignore to untrack ";
  cout<<"write '*.log' in .gitignore, if you want to ignore all dot log fie"; //This way u can ignore a specific type file
  cout<<"git branch, to see which branch u are in";
  cout<<"git branch 'branch name', comand to make a new branch";
  cout<<"git checkout 'branch name', cmnd to go to that branch";
  cout<<"git merge 'branch name', command to merge branch to master branch also u need to write a commit mssg";
  cout<<"git checkout -b 'branch name', to make branch as well as enter in it";
  //Deleting a branch LOCALLY
  cout<<"git branch -d 'branch name', cmnd to delete branch";
  cout<<"git branch -D 'branch name', cmnd to delete forcefully the branch even if it is not merge with the remote main branch";
  //Deleting a branch REMOTELY
  cout<<"git push origin --delete 'branch name', comnd to delete branch remotely";

  //commit data in child branch then only it will not show in master branch

  //GitHUb start
  cout<<"git remote add origin https://github.com/Bimlendu-Singh/Git-Start-With-Bheem.git, command to add my remote repisotry";
  cout<<"git remote, cmnd to check remote repository name";
  cout<<"git remote -v, cmnd to see url for fetch and push";
  cout<<"Connected local computer to my offical git account.";

  //Git new repository make and link it to Github or u can follow step after making new repostiory written in github
  cout<<"1. Make new repo in GitHub.";
  cout<<"2. Copy ssh key";
  cout<<"3. Open folder in your pc";
  cout<<"4. Open git bash there.";
  cout<<"5. Type (git init)";
  cout<<"6. Type (git remote add origin   ssh-key-paste";
  cout<<"7. Hit enter your folder linked to your repo.";
  cout<<"8. Add and  Commit all changes in files";
  cout<<"9. Type (git push origin main)";
  cout<<"10. It's done your file is on GitHub repo...";

}
