dir=C04
repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-5d40fa8f-a0f6-45b7-9905-be588d7eedce-7465592-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
