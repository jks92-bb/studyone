-- COMMIT : "변경사항 영구적으로 적용"
-- COMMIT 을 하지 않으면, 계정에 적용하였던 모든 변경사항이 사라짐.
-- 계정에 적용한 변경사항 중 중요한 내용이 있으면 되도록 커밋하는게 좋음.

COMMIT;

-- ROLLBACK : "회귀한다. 돌아간다"
-- ROLLBACK;    => 마지막 커밋한 상태로 회귀.
-- ROLLBACK TO [세이브포인트명]  -> 지정된 세이브포인트로 회귀
ROLLBACK;




-- SAVEPOINT : 지점 저장.
--  SAVEPOINT [저장할 세이브포인트명];