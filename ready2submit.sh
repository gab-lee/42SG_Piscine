dir=C06
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-89cff8a5-2f8b-4ee4-8551-b7562f8b22d4-7461918-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
