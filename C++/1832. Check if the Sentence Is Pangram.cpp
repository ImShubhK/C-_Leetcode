<<<<<<< HEAD
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
		
        for(int i=0; i<sentence.length(); i++){
            arr[sentence[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
			
            if(arr[i] == 0){
                return false;
            }
        }
        return true; 
    }
=======
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
		
        for(int i=0; i<sentence.length(); i++){
            arr[sentence[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
			
            if(arr[i] == 0){
                return false;
            }
        }
        return true; 
    }
>>>>>>> c16f697538a9940938bcc8ccb157df1bc6448919
};