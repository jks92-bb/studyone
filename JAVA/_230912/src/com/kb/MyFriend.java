package com.kb;

public class MyFriend {
    public static void main(String[] args) {
        // Friend 배열 객체 = Friend 생성 (크기 10)
        Friend[] friends = new Friend[10];

        // int cnt 0으로 선언 저장
        int cnt = 0;


        //friends[cnt]에 UnivFriend 객체생성 ("lee", "computer", "01000005555"); 후 출력
        friends[cnt] = new UnivFriend("lee", "computer", "01000005555");

        //cnt 1증가.
        cnt++;

        friends[cnt] = new UnivFriend("seo", "electronics", "01011115555");
        cnt++;

        friends[cnt] = new CompFriend("yoon", "r&d 1", "01022225555");
        //cnt 1증가
        cnt++;

        friends[cnt] = new CompFriend("ha", "r&d 2", "01033335555");
        cnt++;

        //반복 i 0부터 cnt -1 까지
        // -  friends[i]의 showinfo 실행.
        for (int i = 0; i < cnt; i++) {
            friends[i].showInfo();
        }


    }
}
