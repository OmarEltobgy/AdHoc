import java.util.*;

public class UVA_10420_ListOfConquests 
{
  public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int N, i, j, countriesN, found;
		String str, temp = "";
		String[] countries = new String[2500];
		for(i=0; i<2500; i++)
			countries[i] = "";
		int[] number = new int[2500];
		N = in.nextInt();
		str = in.nextLine();
		countriesN = 0;
		for(i=0; i<N; i++)
		{	
			str = in.nextLine();
			j=0;
			temp = "";
			while(str.charAt(j) != ' ')
			{
				temp += str.charAt(j);
				j++;
			}
			found = 0;
			for(j=0; j<countriesN && found==0; j++)
			{
				if(countries[j].equals(temp) == true)
				{
					number[j] ++;
					found = 1;
				}
			}
			if(found == 0)
			{
				countries[countriesN] = temp;
				number[j] ++;
				countriesN ++;
			}
		}
		for(i=0; i<countriesN; i++)
		{
			int minIndex = i;
			for(j=i; j<countriesN; j++)
			{
				if(countries[j].compareTo(countries[minIndex]) < 0)
					minIndex = j;
			}
			String t = countries[minIndex];
			countries[minIndex] = countries[i];
			countries[i] = t;
			int tt = number[minIndex];
			number[minIndex] = number[i];
			number[i] = tt;
			System.out.println( countries[i] + " " + number[i] );
		}
		in.close();
	}
}
