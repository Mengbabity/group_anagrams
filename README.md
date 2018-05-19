# group_anagrams

给定一个vector<string>，找出其中字母相同顺序不同的字符串，以二维数组返回。

思路：（关键！）遍历字符串数组，将每个字符串复制，然后按照字母大小排序，以排好序的字符串为key，将原本的字符串为值存入。
      map<string,vector<string>> m;
      然后for循环：
      for(auto i:m)   //i指map，按照map的使用方式来使用i
      {
          vector<string> 中存入对应key的所有vector<string>;
          将上一句的vector<string>存入返回的二维数组。
      }
      
      
