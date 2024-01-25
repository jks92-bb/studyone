CREATE TABLE USE1R(
	IDX INT AUTO_INCREMENT unique,   -- 아이디 고유번호
	ID varchar(255) PRIMARY KEY,				-- 유저 아이디
    PW varchar(255),				-- 유저 비밀번호
    PWQS VARCHAR(255),				-- 유저 비밀번호 찾기 질문
    PWHINT VARCHAR(255),			-- 유저 비밀번호 찾기 힌트
    HP varchar(255),      			-- 유저 휴대폰번호
    ADDRESS VARCHAR(255),       	-- 유저 주소
    NAME VARCHAR(255),				-- 유저 이름
    NICKNAME VARCHAR(255),  		-- 유저 닉네임
    FOLLOW VARCHAR(255), 			-- 팔로우
    FOLLOWER VARCHAR(255),   		-- 팔로워
    lastenter date,					-- 마지막 접속일자
    deleteday date,					-- 탈퇴신청일
    deletecheck int					--  탈퇴여부 확인
);

CREATE TABLE BOARD(
IDX INT AUTO_INCREMENT PRIMARY KEY,  	-- 게시글 고유번호
ID VARCHAR(255),						-- 작성자 아이디	
NICKNAME VARCHAR(255),            	  	-- 작성자 닉네임
TITLE VARCHAR(255),   					-- 타이틀
CONTENT VARCHAR(5000),  					-- 내용
DATE DATETIME, 							-- 날짜
HIT INT, 								-- 조회수 
FILE VARCHAR(255), 						-- 업로드 파일
isgood int,								-- 좋아요 수
FOREIGN KEY (USER_ID) REFERENCES USER(IDX)

);

CREATE TABLE post_info (
    post_no INT AUTO_INCREMENT PRIMARY KEY,			-- 포스트 번호
    post_group varchar(255) not null,						-- 게시판 그룹        
    post_title VARCHAR(60) NOT NULL,		      	-- 포스트 타이틀 이름
    id varchar(255) not null,						-- 작성자   
    post_content VARCHAR(5000) NOT NULL,			-- 포스트 내용c
	visit_cnt INT DEFAULT 0,                       -- 조회수
    post_uploadtime TIMESTAMP DEFAULT CURRENT_TIMESTAMP, -- 업로드 시간
    FOREIGN KEY (id) REFERENCES USER(ID)
    
    -- idx INT NOT NULL,								-- 포스트 고유 번호
    -- post_thumbnail VARCHAR(80) NOT NULL, 			-- 포스트 썸네일
    -- post_video VARCHAR(50),							-- 포스트 비디오
);

alter table user add column birth varchar(100);


INSERT INTO post_info (post_group, post_title, id, post_content, visit_cnt, post_uploadtime)
VALUES ('메이플', '메이플 큐브확률 조작', '한글', '큐브확률 이게 맞는가요 정말 모르겠어요', 1, DEFAULT);

INSERT INTO post_info 
VALUES ('메이플', '메이플 스타포스 확률 조작', '한글', '큐브확률 이게 맞는가요 정말 모르겠어요', 1, DEFAULT);

INSERT INTO post_info (post_group, post_title, id, post_content, visit_cnt, post_uploadtime)
VALUES ('오버워치', '오버워치', '한글', '정말 모르겠어요', 1, DEFAULT);

drop table post_info;



CREATE TABLE post_info (
    
    post_group varchar(255) not null,						-- 게시판 그룹        
    post_title VARCHAR(60) NOT NULL,		      	-- 포스트 타이틀 이름
    id varchar(255) not null,						-- 작성자   
    post_content VARCHAR(5000) NOT NULL,			-- 포스트 내용c
	visit_cnt INT DEFAULT 0,                       -- 조회수
    post_uploadtime TIMESTAMP DEFAULT CURRENT_TIMESTAMP, -- 업로드 시간
    FOREIGN KEY (id) REFERENCES USER(ID)
    
    -- idx INT NOT NULL,								-- 포스트 고유 번호
    -- post_thumbnail VARCHAR(80) NOT NULL, 			-- 포스트 썸네일
    -- post_video VARCHAR(50),							-- 포스트 비디오
);





CREATE TABLE BOARD_REPLY(
 IDX INT AUTO_INCREMENT PRIMARY KEY, 	-- 댓글고유번호 							
 ID VARCHAR(255),  						-- 작성자 아이디
 NICKNAME VARCHAR(255), 				-- 작성자 닉네임
 CONTENT VARCHAR(500),              	-- 내용
 DATE DATETIME, 						-- 일자
 isgood int,							-- 좋아요 수
 FOREIGN KEY (USER_ID) REFERENCES USER(IDX)

);

CREATE TABLE USER(
   idx INT AUTO_INCREMENT unique,  -- 아이디 고유번호
   id varchar(255) PRIMARY KEY,   -- 유저 아이디
    nickname VARCHAR(255),           -- 유저 닉네임
    pw varchar(255),            -- 유저 비밀번호
    name VARCHAR(255),            -- 유저 이름
    tel varchar(255),               -- 유저휴대폰번호
    address VARCHAR(255),             -- 유저 주소
    email varchar(255),           -- 유저 이메일
    birth varchar(100)
);

alter table user add column birth varchar(100);

-- 다시 생성중인 보드 
CREATE TABLE BOARD (
    BOARD_NO INT AUTO_INCREMENT PRIMARY KEY,    -- 보드 번호
    NAME VARCHAR(255) NOT NULL,                 -- 게시글 작성자 닉네임
    SUBJECT VARCHAR(255) NOT NULL,              -- 게시글 제목
    CONTENT VARCHAR(5000) NOT NULL,             -- 게시글 내용
    visit_cnt INT DEFAULT 0,                    -- 조회수
    post_uploadtime TIMESTAMP DEFAULT CURRENT_TIMESTAMP	-- 업로드 시간	     
   
);

 
SELECT * FROM BOARD;



-- drop table user;
-- DROP TABLE BOARD;
-- DROP TABLE BOARD_REPLY;