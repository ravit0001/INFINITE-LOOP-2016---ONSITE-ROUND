#include <stdio.h>
#include <limits.h>
 
 int V,r,graph[305][305],T[305];
int minDistance(int dist[], bool sptSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;
 
   for (int v = 1; v <= V; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;
 
   return min_index;
}
 
int dijkstra( int src)
{
     int dist[V],f,x,c;    
 
     bool sptSet[V]; 
     for (int i = 0; i <=V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
 
     // Distance of source vertex from itself is always 0
     dist[src] = 0;
 
     // Find shortest path for all vertices
     for (int count = 0; count < V-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in first iteration.
       int u = minDistance(dist, sptSet);
 
       // Mark the picked vertex as processed
       sptSet[u] = true;
 
       // Update dist value of the adjacent vertices of the picked vertex.
       for (int v = 1; v <=V; v++)
 
         
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX )
         {
             
             f=dist[u]+graph[u][v];
            // printf("%du %dv %df ",u,v,f);
             c=f/T[v]; 
             if(v==r)
             x=dist[u]+graph[u][v];
             
             else if(f%T[v]!=0)
                x=(c+1)*T[v];
            else
                x=f;
            if( x < dist[v])
            dist[v] = x;
          //  printf("%dv \n",dist[v]);
         }
     }
 
     return dist[r];
    
}
 
// driver program to test above function
int main()
{
   /* Let us create the example graph discussed above */
   int i,s,m,j;
   scanf("%d%d",&s,&r);
   scanf("%d%d",&V,&m);
   int x,y,w;
   for(i=1;i<=V;i++)
   for(j=1;j<=V;j++)
   graph[i][j]=0;
   for(i=1;i<=V;i++)
   scanf("%d",&T[i]);
   for(i=0;i<m;i++)
   {
       scanf("%d%d%d",&x,&y,&w);
       graph[x][y]=w;
       graph[y][x]=w;
   }
   int graph[V][V];printf("%d",dijkstra( s));
 
    return 0;
} 