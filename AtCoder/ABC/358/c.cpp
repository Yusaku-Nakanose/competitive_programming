#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> s(n, vector<bool>(m)), judge(n, vector<bool>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char a;
            cin >> a;
            if(a == 'o') s.at(i).at(j) = true;
            else s.at(i).at(j) = false;
        }
    }

    //1
    for(int a = 0; a < n; a++) {
        for(int b = 0; b < m; b++) {
            judge.at(a).at(b) = s.at(a).at(b);
        }
        for(int b = 0; b < m; b++) {
            if(!judge.at(a).at(b)) break; 
        }
        if(judge.at(a).at(m-1)) {
            cout << 1 << endl;
            return 0;
        }
    }

    //2
    for(int a = 0; a < n-1; a++) {
        for(int c = a; c < n; c++) {
            for(int b = 0; b < m; b++) {
                judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b);
            }
            for(int b = 0; b < m; b++) {
                if(!judge.at(a).at(b)) break; 
            }
            if(judge.at(a).at(m-1)) {
                cout << 2 << endl;
                return 0;
            }
        }
    }

    //3
    for(int a = 0; a < n-2; a++) {
        for(int c = a; c < n-1; c++) {
            for(int d = c; d < n; d++) {
                for(int b = 0; b < m; b++) {
                    judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b);
                }
                for(int b = 0; b < m; b++) {
                    if(!judge.at(a).at(b)) break; 
                }
                if(judge.at(a).at(m-1)) {
                    cout << 3 << endl;
                    return 0;
                }
            }
        }
    }

    //4
    for(int a = 0; a < n-3; a++) {
        for(int c = a; c < n-2; c++) {
            for(int d = c; d < n-1; d++) {
                for(int e = d; e < n; e++) {
                    for(int b = 0; b < m; b++) {
                        judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b);
                    }
                    for(int b = 0; b < m; b++) {
                        if(!judge.at(a).at(b)) break; 
                    }
                    if(judge.at(a).at(m-1)) {
                        cout << 4 << endl;
                        return 0;
                    }
                }
            }
        }
    }

    //5
    for(int a = 0; a < n-4; a++) {
        for(int c = a; c < n-3; c++) {
            for(int d = c; d < n-2; d++) {
                for(int e = d; e < n-1; e++) {
                    for(int f = e; f < n; f++) {
                        for(int b = 0; b < m; b++) {
                            judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b);
                        }
                        for(int b = 0; b < m; b++) {
                            if(!judge.at(a).at(b)) break; 
                        }
                        if(judge.at(a).at(m-1)) {
                            cout << 5 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    //6
    for(int a = 0; a < n-5; a++) {
        for(int c = a; c < n-4; c++) {
            for(int d = c; d < n-3; d++) {
                for(int e = d; e < n-2; e++) {
                    for(int f = e; f < n-1; f++) {
                        for(int g = f; g < n; g++) {
                            for(int b = 0; b < m; b++) {
                                judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b) ||s.at(g).at(b);
                            }
                        for(int b = 0; b < m; b++) {
                            if(!judge.at(a).at(b)) break; 
                        }
                            if(judge.at(a).at(m-1)) {
                                cout << 6 << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    //7
    for(int a = 0; a < n-6; a++) {
        for(int c = a; c < n-5; c++) {
            for(int d = c; d < n-4; d++) {
                for(int e = d; e < n-3; e++) {
                    for(int f = e; f < n-2; f++) {
                        for(int g = f; g < n-1; g++) {
                            for(int h = f; h < n;) {
                                for(int b = 0; b < m; b++) {
                                    judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b) ||s.at(g).at(b) ||s.at(h).at(b);
                                }
                                for(int b = 0; b < m; b++) {
                                    if(!judge.at(a).at(b)) break; 
                                }
                                if(judge.at(a).at(m-1)) {
                                    cout << 7 << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    //8
    for(int a = 0; a < n-7; a++) {
        for(int c = a; c < n-6; c++) {
            for(int d = c; d < n-5; d++) {
                for(int e = d; e < n-4; e++) {
                    for(int f = e; f < n-3; f++) {
                        for(int g = f; g < n-2; g++) {
                            for(int h = f; h < n-1;) {
                                for(int k = h; k < n; k++) {
                                    for(int b = 0; b < m; b++) {
                                        judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b) ||s.at(g).at(b) ||s.at(h).at(b) || s.at(k).at(b);
                                    }
                                    for(int b = 0; b < m; b++) {
                                        if(!judge.at(a).at(b)) break; 
                                    }
                                    if(judge.at(a).at(m-1)) {
                                        cout << 8 << endl;
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    //9
    for(int a = 0; a < n-8; a++) {
        for(int c = a; c < n-7; c++) {
            for(int d = c; d < n-6; d++) {
                for(int e = d; e < n-5; e++) {
                    for(int f = e; f < n-4; f++) {
                        for(int g = f; g < n-3; g++) {
                            for(int h = f; h < n-2;) {
                                for(int k = h; k < n-1; k++) {
                                    for(int l = k; l < n; l++) {
                                        for(int b = 0; b < m; b++) {
                                            judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b) ||s.at(g).at(b) ||s.at(h).at(b) || s.at(k).at(b) || s.at(l).at(b) || s.at(m).at(b);
                                        }
                                        for(int b = 0; b < m; b++) {
                                            if(!judge.at(a).at(b)) break; 
                                        }
                                        if(judge.at(a).at(m-1)) {
                                            cout << 9 << endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    //10
    for(int a = 0; a < n-9; a++) {
        for(int c = a; c < n-8; c++) {
            for(int d = c; d < n-7; d++) {
                for(int e = d; e < n-6; e++) {
                    for(int f = e; f < n-5; f++) {
                        for(int g = f; g < n-4; g++) {
                            for(int h = f; h < n-3;) {
                                for(int k = h; k < n-2; k++) {
                                    for(int l = k; l < n-1; l++) {
                                        for(int o =l; o < n; o++) {
                                            for(int b = 0; b < m; b++) {
                                                judge.at(a).at(b) = s.at(a).at(b) || s.at(c).at(b) || s.at(d).at(b) || s.at(e).at(b) || s.at(f).at(b) ||s.at(g).at(b) ||s.at(h).at(b) || s.at(k).at(b) || s.at(l).at(b) || s.at(m).at(b) || s.at(o).at(b);
                                            }
                                            for(int b = 0; b < m; b++) {
                                                if(!judge.at(a).at(b)) break; 
                                            }
                                            if(judge.at(a).at(m-1)) {
                                                cout << 10 << endl;
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}