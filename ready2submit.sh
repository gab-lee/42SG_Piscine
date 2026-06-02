dir=C02
repo=git@vogsphere.42singapore.sg:vogsphere/intra-uuid-09c3dae1-1db3-40aa-bc91-766a7b9c2ebc-7449095-gabrlee
cp -r $dir ../$dir
cd ../$dir
mv gitignore .gitignore 
git init 
git remote add origin $repo
git add -A
git commit -m "added files"
git push --set-upstream origin master
 
cd .. 
rm -rf $dir
git clone $repo $dir
cd $dir
ls */**
