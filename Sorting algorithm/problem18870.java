import java.util.*;
import java.io.*;

public class problem18870 
{
    public static void main(String[] args) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int[] arr = new int[N];
        int[] origin = new int[N];
        for (int i = 0; i < N; i++)
        {
            arr[i] = origin[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);

        HashMap<Integer, Integer> hash = new HashMap<Integer, Integer>();
        int rank = 0;

        for (int value: arr)
        {
            if(!hash.containsKey(value))
            {
                hash.put(value, rank);
                rank++;
            }
        }

        StringBuilder sb = new StringBuilder(); // to avoid time running error
        for (int value: origin)
        {
            sb.append(hash.get(value)).append(' '); 
        }
        System.out.println(sb);

    }   
}
