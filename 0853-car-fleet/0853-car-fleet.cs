public class Solution {
    public int CarFleet(int target, int[] position, int[] speed) {
Dictionary<int, int> Carspeed = new();
            Stack<float> fleets = new Stack<float>();
            
            for (int i=0;i<position.Length; i++)
            {
                Carspeed[position[i]] =  speed[i];
            }
            var sortedDict = new SortedDictionary<int, int>(Carspeed, Comparer<int>.Create((x, y) => y.CompareTo(x)));

            foreach (var car in sortedDict )
            {
                float time = (target- car.Key)/(float)car.Value;
                if (fleets.Count==0 || fleets.Peek() < time )
                    fleets.Push(time);
            }

            return fleets.Count;
    }
}