dir=C05
#repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-0f575ce3-e52e-4048-bb65-0de0a776383b-7461917-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
