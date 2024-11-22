## DS_Project3_2024_2
### 2024-2 Data Structure Project #3

### Due date: 2024/12/14 23h 59m 59s.

#### 본 프로젝트는 그래프 연산 프로그램을 구현하는 것으로 상세한 설명은 프로젝트 문서와 다음 설명을 참고한다.
##### 본 프로젝트에서는 그래프를 이용해 그래프 연산 프로그램을 구현한다. 이 프로그램은 그래프 정보가 저장된 텍스트 파일을 통해 그래프를 구현하고, 그래프의 특성에 따라 BFS, DFS, Kruskal, Dijkstra, Bellman-Ford, 그리고 FLOYD 연산을 수행한다. 그래프 데이터는 방향성(Direction)과 가중치(Weight)를 모두 가지고 있으며, 데이터 형태에 따라 List 그래프와 Matrix 그래프로 저장한다. BFS와 DFS는 그래프의 방향성과 가중치를 고려하지 않고, 그래프 순회 또는 탐색 방법을 수행한다. Kruskal 알고리즘은 최소 비용 신장 트리(MST)를 만드는 방법으로 방향성이 없고, 가중치가 있는 그래프 환경에서 수행한다. Dijkstra 알고리즘은 정점 하나를 출발점으로 두고 다른 모든 정점을 도착점으로 하는 최단경로 알고리즘으로 방향성과 가중치 모두 존재하는 그래프 환경에서 연산을 수행한다. 만약 weight가 음수일 경우 Dijkstra는 에러를 출력하며, Bellman-Ford에서는 음수 사이클이 발생한 경우 에러, 음수사이클이 발생하지 않았을 경우 최단 경로와 거리를 구한다. FLOYD에서는 음수 사이클이 발생한 경우 에러, 음수 사이클이 발생하지 않았을 경우 최단 경로 행렬을 구한다. 프로그램의 동작은 명령어 파일에서 요청하는 명령에 따라 각각의 기능을 수행하고, 그 결과를 출력 파일(log.txt)에 저장한다.

![image](https://user-images.githubusercontent.com/50433145/201257617-cbbc91f5-2788-43c5-acb9-10e2aeab089e.png)

## <u>**Notice**</u>
### Notice !! 윈도우에서 리눅스로 단순 파일 복사 및 드래그는 파일 인코딩 변환 문제가 발생 할 수 있으니 반드시 리눅스 환경에서 파일을 재생성 후 테스트 바랍니다.
### Notice !! 설계와 실습을 모두 수강하시는 분은 실습 과제제출란에만 제출바랍니다.
### Notice !! log.txt의 출력 포맷에서 모든 구분자는 '\t'이 아닌 스페이스바(' ')로 하시면 됩니다.
### Notice !! command.txt는 탭('\t')로 구분하시면 됩니다.
--------------------------




### 1. 프로젝트 문서 및 소스코드 수정사항

#### [DS_Project3_v1.pdf](https://github.com/user-attachments/files/17783955/DS_Project3_v1.pdf)


```
11/16 - ver1 업로드
```

### 2. 자주들어오는 질문 

**Q. command.txt와 graph.txt는 제공하지 않나요?**  
A. 네, 따로 제공하지 않습니다.

--------------------------
### Knowledge 
##### 아래 명령어 예시에서 앞의 $ 로 시작되는 부분은 명령어 입력 부분이고, 그 외 는 출력 부분임
##### 리눅스 명령어 요약
1. ls  :  list로 현재 작업중인 디렉토리의 파일 및 포함된 디렉토리 목록들을 표시 ( -a, -l 속성으로 자세한 출력 가능)
2. pwd  :  print working directory로 현재 작업중인 디렉토리의 절대경로 위치 출력
3. cd  : change directory로 디렉토리 를 변경( . : 현재 디렉토리, .. : 상위 디렉토리 ) 
```
$ ls
Documents Download
$ ls -l
drwxr-xr-x 2 user user     4096 Oct 05  2020 Documents
drwxr-xr-x 2 user user     4096 Oct 05  2020 Downloads
$ pwd
/home/user
$ cd Download
$ pwd
/home/user/Downloads
```

### requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ sudo apt-get install git
$ git clone https://github.com/DSLDataStorage/DS_Project_3_2022_2.git
```

### how to compile this project
##### make명령어 실행 후 ls명령어를 통해 해당 디렉토리를 확인해 보면 run 이라는 파일이 생긴것을 확인 할 수 있다. 
```
$ make
g++ -std=c++11 -g -o run GraphMethod.cpp ListGraph.cpp Manager.cpp Graph.cpp MatrixGraph.cpp main.cpp Manager.h vertexSet.h Graph.h MatrixGraph.h ListGraph.h GraphMethod.h

$ ls
Graph.cpp  Graph.h  GraphMethod.cpp  GraphMethod.h  ListGraph.cpp  ListGraph.h  main.cpp  makefile  Manager.cpp  Manager.h  MatrixGraph.cpp  MatrixGraph.h  **run**
```
### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt에 저장된다. 
```
$ ./run
$ cat log.txt
==> command 1) LOAD
Success
```
