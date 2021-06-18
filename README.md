# My_codes
when get message like :
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/tahsina-azam/My_codes.git'

use:
git fetch origin master:tmp
git rebase tmp
git push origin HEAD:master
git branch -D tmp
