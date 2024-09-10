import java.util.*;
import java.io.*;

public class problem10814 
{
    static String[][] arr;
    public static void main(String[] args) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        arr = new String[N][2];
        StringTokenizer st;
        for (int i = 0; i < N; i++)
        {
            st = new StringTokenizer(br.readLine());
            arr[i][0] = st.nextToken();
            arr[i][1] = st.nextToken();
        }
        Arrays.sort(arr, new Comparator<String[]>()
		{
            @Override
			public int compare(String[] s1, String[] s2)
			{
                return Integer.parseInt(s1[0]) - Integer.parseInt(s2[0]);
			}
		});
        for (int i = 0; i < N; i++)
        {
            System.out.println(arr[i][0] + " " + arr[i][1]);
        }
    }    

}
