dir=C04
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-49b98170-413b-4e06-85ca-aacea36a76d2-7460160-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
