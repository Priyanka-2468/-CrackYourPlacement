class Solution {
  public:
    
    bool isCyclic(int V, vector<int> adj[]) {
     int counter=0;  
	
	  int indegree[V]={0};
	  for(int i=0;i<V;i++){
	      for(auto it:adj[i]){
	          indegree[it]++;
	      }
	  }
	  queue<int>q;
	  
	  for(int i=0;i<V;i++){
	      if(indegree[i]==0)
	      q.push(i);
	  }
	  while(!q.empty()){
	      int node=q.front();
	      q.pop();
	      counter++;
	      
	      for(auto it:adj[node]){
	          indegree[it]--;
	          if(indegree[it]==0)
	          q.push(it);
	      }
	  }
	  if(counter!=V)
	  return true;
	  else
	  return false;
	}
    
};