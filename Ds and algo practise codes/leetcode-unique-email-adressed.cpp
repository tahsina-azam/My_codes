class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
     set<string> seen;
        for(string email : emails)
        {
            int i = email.find_first_of('@');
      string local = email.substr(0, i);
      string rest = email.substr(i);
      if (local.find("+")) {
        local = local.substr(0, local.find_first_of('+'));
      }
            for(int i=0;i<local.size();i++)
                if(local[i]=='.')
          local = local.replace(i,1, "");
      seen.insert(local + rest);
        }
        
         return seen.size();
    }
        
};