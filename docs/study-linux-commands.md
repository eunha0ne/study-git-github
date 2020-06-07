## 리눅스 기반 명령어

- 참고 문서에서 설명하는 예제에 포함된 일부 명령어는 윈도우 기반에서는 동작하지 않는 경우가 있음
  - 관련된 추가 확장자 설치를 통해서 사용 가능

### 기본 명령어

```bash
# Update the access and modification times of each FILE to the current time.
touch [OPTION]... FILE...

# Create the DIRECTORY(ies), if they do not already exist.
mkdir [OPTION]... DIRECTORY...

# Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.
# --no-target-directory         treat DEST as a normal file
mv [OPTION]... [-T] SOURCE DEST
mv [OPTION]... SOURCE... DIRECTORY
# --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY
mv [OPTION]... -t DIRECTORY SOURCE...
```

### Reference

- [Read: 37-important-linux-commands-you-should-know](https://www.howtogeek.com/412055/37-important-linux-commands-you-should-know/)
