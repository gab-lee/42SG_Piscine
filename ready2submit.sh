dir=C09
repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-8e6e8495-46b4-4a6c-9004-efd8acd7f92a-7474313-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
