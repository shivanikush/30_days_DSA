lass Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    //know the actual postitions of elements
	    //sotring current indices
	    int n = nums.size();
	    int ans = 0;
	    pair<int,int> actual_positions[n];
	    
	    for(int i =0;i<n; i++){
	        actual_positions[i].first = nums.at(i);
	        actual_positions[i].second = i;
	        
	    }
	    //sorting
	    sort(actual_positions, actual_positions+n);
	    
	    vector<bool> visited(n,false);
	    
	    for(int i = 0;i<n;i++){
	        //if element is visited or element is in right positions
	        int old_position = actual_positions[i].second;
	        if(visited[i] == true or old_position == true){
	            continue;
	        }
	        
	        
	        //visiting element for the first time
	        int node = i;
	        int cycle = 0;
	        while(!visited[node]){
	            visited[node] = true;
	            int next_node = actual_positions[node].second;
	            node = next_node;
	            cycle+= 1;
	            
	        }
	        
	        ans+= (cycle - 1);
	    }
	    return ans;
	}
};
