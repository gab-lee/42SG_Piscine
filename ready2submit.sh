dir=C02
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-91a42047-9c6b-4075-8e84-649f0d42d88b-7451357-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
