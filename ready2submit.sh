dir=C02
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-6b87e616-f693-4ece-9031-1d73a5f1feda-7459521-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
