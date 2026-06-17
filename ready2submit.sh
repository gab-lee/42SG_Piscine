dir=C07
repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-d81eafd6-2f22-4e49-8b74-f3efa603748a-7473734-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
