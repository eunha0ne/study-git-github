깃 실습을 위한 저장소입니다

- Default sell: git bash

## VSCode Extenstions

- Git Graph
  - `Command palette`: 컨트롤 + 쉬프트 + P
  - Git Graph: View Git Graph (git log)

## 트러블 슈팅

- 권한 관련 경고 메시지: ssh-keygen 해결이 불가능할 때는 자격증명 설정(윈도우) 맥(키체인)을 통해서 해결해 보자
  - (window): 제어판 --> 자격증명 --> 추가하기 git:https//github.com
  - (Mac): `컨트롤 + 스페이스바` --> keychain --> github.com

## References

- [Read: Git 사용 중 자주 만나는 이슈 정리](https://parksb.github.io/article/28.html)
- [좋은 git 커밋 메시지를 작성하기 위한 8가지 약속](https://djkeh.github.io/articles/How-to-write-a-git-commit-message-kor/)
- [Read: git](https://git-scm.com/book/ko/v2)
- [Link: 슬라이드](https://www.slideshare.net/flyskykr/github-46014813?from_m_app=android)

### 슬라이드, 2019/03 정리 기록

- 마일스톤과 이슈, 라벨을 생성해서 프로젝트를 관리할 수 있음
- 저장소 페이지에서 기본 브랜치를 설정할 수 있음 (master -> develop)
- 키워드: 스테이지와 언스테이지, 로컬과 원격 저장소
- 소스트리 `깃 플로우`를 사용해서 간편하게 feature, hotfix 등의 브랜치 생성 가능
- 커밋할 때 `fixed #{이슈번호}` 사용하면 머지될 때, 자동으로 이슈가 닫힘
- 브랜치에서 Pull Requset(풀리퀘스트)를 생성해서 머지 요청
- 풀리퀘스트의 diff 기능을 활용해서 코드 리뷰 진행
- 여러명이서 협업할 때, 리뷰어가 머지 가능 여부를 판단해서 이모지로 평가 활용 가능
- 머지된 브랜치는 삭제할 수 있음
- 충돌된 내용은 수정 후에 머지 진행 (깃헙 에디터에서 바로 확인/수정 가능)
- 키워드: 리베이스, 릴리즈
- 릴리즈 시에는 master, develop, tags까지 모두 내보내기
- 깃헙 페이지에서 테그 정보 수정해서 릴리즈 완료하기
