class MyStack {
  queue<int> q;

public:
  MyStack() {}

  void push(int x) {
    // size before pushing the element
    int befSize = q.size();
    q.push(x);
    // x se pehle tak ye loop chlega
    for (int i = 0; i < befSize; i++) {
      q.push(q.front());
      q.pop();
    }
  }

  int pop() {
    int firstEle = q.front();
    q.pop();
    return firstEle;
  }

  int top() { return q.front(); }

  bool empty() { return q.empty(); }
};