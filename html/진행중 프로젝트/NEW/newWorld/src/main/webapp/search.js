/**
 * 게시판 서치용 스크립트
 */
        // 더미 데이터
        const postsData = [
            { id: 'post1', title: '제목1', content: '내용1' },
            { id: 'post2', title: '제목2', content: '내용2' },
            { id: 'post3', title: '제목3', content: '내용3' },
        ];

        // 페이지 로드 시 게시글을 표현
        renderPosts();

        // 게시글을 동적으로 생성하여 추가하는 함수
        function renderPosts() {
            const boardElement = document.getElementById('board');
            boardElement.innerHTML = '';

            postsData.forEach(post => {
                const postElement = document.createElement('div');
                postElement.classList.add('post');
                postElement.id = post.id;
                postElement.dataset.title = post.title;
                postElement.innerHTML = `게시글 ${post.id}: ${post.title} - ${post.content}`;
                boardElement.appendChild(postElement);
            });
        }



       

        function search() {
            // 검색 아이콘 클릭 시 동작]            
            window.location.href = 'https://www.naver.com';
        }

        function handleKeyPress(event) {
            // 엔터 키 눌렀을 때 동작
            if (event.key === 'Enter') {
                search();
            }
        }



         

        // 새로운 게시글 추가하는 함수
        function addPost() {
            const titleInput = document.getElementById('titleInput');
            const contentInput = document.getElementById('contentInput');

            if (titleInput.value && contentInput.value) {
                const newPost = {
                    id: `post${postsData.length + 1}`,
                    title: titleInput.value,
                    content: contentInput.value,
                };

                postsData.push(newPost);

                const boardElement = document.querySelector('.board');
                const newPostElement = document.createElement('div');
                newPostElement.classList.add('post');
                newPostElement.id = newPost.id;
                newPostElement.innerHTML = `게시글 ${newPost.id}: ${newPost.title} - ${newPost.content}`;
                boardElement.appendChild(newPostElement);

                // 입력 필드 초기화
                titleInput.value = '';
                contentInput.value = '';
            }
        }

        // 페이지 로드 시 게시글을 표현
        window.onload = renderPosts;
 