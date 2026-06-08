dir=C03
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-b6f44a9a-8d62-4e7d-a9c7-a770846a8dae-7449096-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
