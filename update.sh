#!/bin/sh

env GIT_SSL_NO_VERIFY=true git fetch

LOCAL=$(git rev-parse @)
REMOTE=$(git rev-parse @{u})
BASE=$(git merge-base @ @{u})

if [ $LOCAL = $REMOTE ]; then
echo "Up-to-date"
elif [ $LOCAL = $BASE ]; then
echo "Need to pull"
git rebase origin/master 
elif [ $REMOTE = $BASE ]; then
echo "Need to push"
else
echo "Diverged"
fi