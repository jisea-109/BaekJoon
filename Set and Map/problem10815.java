import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.StringTokenizer;
public class problem10815
{
    static int[] arr1;
    static int[] arr2;
    static int n1;
    static int n2;
    public static void main(String[] args) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        HashMap<String, Integer> hash = new HashMap<>();
        StringBuilder sb = new StringBuilder();

        n1 = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < n1; i++)
        {
            hash.put(st.nextToken(),0);
        }

        n2 = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        arr2 = new int[n2];
        for (int i = 0; i < n2; i++)
        {
            if(hash.get(st.nextToken()) != null)
            {
                sb.append("1 ");
            }
            else
            {
                sb.append("0 ");
            }
        }
        System.out.println(sb.toString());
    }
}