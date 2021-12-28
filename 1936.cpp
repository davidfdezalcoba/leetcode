class Solution {
public:
		int addRungs(vector<int>& rungs, int dist) {
				int num = rungs[0] % dist != 0 ? rungs[0] / dist : rungs[0] / dist - 1;
				for (int i = 1; i < rungs.size(); i++) {
						num += (rungs[i] - rungs[i - 1]) % dist != 0 ? (rungs[i] - rungs[i - 1]) / dist : (rungs[i] - rungs[i - 1]) / dist - 1;
				}

				return num;
		}
};

