#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEM_SIZE 131072 * 1024 * 1024 * 1024

int main()
{
    char *addr = (char *)malloc((long)MEM_SIZE);
    printf("主线程调用malloc后，目前共申请了 128tb 的虚拟内存\n");
    char *start = &addr[0], *end = &addr[(long)MEM_SIZE - 1];
    printf("start = %p, end = %p\n", start, end);   // 连续的128tb虚拟内存
    // memset(addr, 0, (long)MEM_SIZE);
    return 0;
}
/*
#include <iostream>
using namespace std;
#include<map>
#include<vector>

int main(){
	
} 

/*
struct node{
	node(int c,int d):x(c),y(d){}
	int x;
	int y;
};


int main(){
	typedef node nn;
	std::vector<node> reporter_qps_;
	reporter_qps_.push_back(nn(1,2));
	cout<<reporter_qps_[0].x;
	cout<<reporter_qps_[0].y;
}



/*
#include <iostream>
#include <cstring>
#include<map>
#include<fstream>
int main() {
	int k = 100000;
	int total_cnt = 0, total_cnt_without_hot = 0, hot_cnt = 0;
    map<string, int> hash;
    
	while(k--){
	  string str;//17576=pow(26,3) 
	  for (int i = 0; i < 3; ++i) {
	    str+= 'A' + rand() % 26;
	  }
	  cout<<str<<endl;
	  hash[str]++;
	}	
    std::fstream f;
    f.open("count_hotkey.txt", ios::out | ios::app);
    f << "********** Run WriteLevel0Table() **********" << endl;
    //显示hash中的内容
    map<string, int>::iterator it = hash.begin();
    while (it != hash.end()) {
      total_cnt_without_hot++;
    //只输出重复的热数据
      if (it->second > 1) {
        hot_cnt++;
        f << "key: " << it->first << endl;
        f << "num: " << it->second << endl;
      }
      it++;
    }
    f << "Total: " << total_cnt << endl;
    f << "Total without hot: " << total_cnt_without_hot << endl;
    f << "Hot: " << hot_cnt << endl;
    f << "Ratio: " << hot_cnt * 1.0 / total_cnt_without_hot * 100 << "%"
      << endl;
    f << "********** End WriteLevel0Table() **********" << endl;
    f << endl;
    f.close();
	return 0;
}
*/
