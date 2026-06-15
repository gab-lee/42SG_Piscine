dir=C08
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-602e6369-ad67-47e9-9664-3026b7714c5f-7465753-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
