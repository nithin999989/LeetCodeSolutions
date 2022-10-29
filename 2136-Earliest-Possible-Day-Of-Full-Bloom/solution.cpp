int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> plant(n);        
        
        for(int i=0; i<n; i++) {
			// store growTime[i] & plantTime[i] in pair
            plant[i] = {growTime[i], plantTime[i]};
        }
        
		// sort the vector in non-increasing order 
		// to get grow time of plants in descending order
        sort(plant.begin(), plant.end(),  greater<pair<int, int>>());
        
        int day = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++) {
			// update value of day when planting
            day += plant[i].second;
			// update ans with max of current day + grow time
            ans = max(ans, day+plant[i].first);
        }
        
        return ans;
    }