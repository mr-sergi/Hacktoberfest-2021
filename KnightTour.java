package Graphs;

public class KnightTour {
	static int N=8;
	static boolean isSafe(int x,int y,int sol[][]) {
		return (x>=0 && x<N && y>=0 && y<N && sol[x][y]==-1);
	}
	static void printSolution(int sol[][]) { 
        for (int x = 0; x < N; x++) { 
            for (int y = 0; y < N; y++) 
                System.out.print(sol[x][y] + " "); 
            System.out.println(); 
        } 
    } 
	static boolean solve() {
		int sol[][]=new int[N][N];
		 for (int x = 0; x < N; x++) 
	            for (int y = 0; y < N; y++) 
	                sol[x][y] = -1; 
		 int xMove[] = {2, 1, -1, -2, -2, -1, 1, 2}; 
			int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1}; 

	        sol[0][0]=0;
	        if(!solveUtil(0,0,1,sol,xMove,yMove)) {
	        	System.out.print("No Solution Exists");
	        	return false;
	        }
	        else {
	        	printSolution(sol);
	        	return true;
	        }
	}
	static boolean solveUtil(int x,int y,int movei,int sol[][],int xMove[],int yMove[]) {
		int nextx,nexty;
		if(movei==N*N)
			return true;
		for(int i=0;i<8;i++) {
			nextx=x+xMove[i];
			nexty=y+yMove[i];
			if(isSafe(nextx,nexty,sol)) {
				sol[nextx][nexty]=movei;
				if(solveUtil(nextx,nexty,movei+1,sol,xMove,yMove))
					return true;
				else
					sol[nextx][nexty]=-1;
			}
		}
		return false;
	}
	public static void main(String[] args) {
		solve();

	}

}
