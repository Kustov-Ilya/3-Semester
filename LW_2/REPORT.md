## Laboratory work II

Данная лабораторная работа посвещена изучению утилит для разработки проектов

## Tasks

- [x] 1. Ознакомиться со ссылками учебного материала
- [x] 2. Выполнить инструкцию учебного материала
- [x] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**
 
## Tutorial

```bash
$ export GITHUB_USERNAME=Kustov-Ilya
$ export GIST_TOKEN=****************************************
$ alias edit=vim
```

```bash
$ npm install -g gistup #установка  gistup
```

```bash
$ cat > ~/.gistup.json <<EOF
{
  "token": "${GIST_TOKEN}"
}
EOF #заполнение файла .gistup.json
```

```bash
$ cd ~ #переход в основную директорию
$ mkdir -p workspace/labs/projects/
$ mkdir -p workspace/labs/tasks/
$ mkdir -p workspace/labs/reports/
```

## Report

```bash
$ cd ~/workspace/labs/ 
$ export LAB_NUMBER=02 
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER} #клонирование гитхаба
$ mkdir reports/lab${LAB_NUMBER}
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
$ cd reports/lab${LAB_NUMBER}
$ edit REPORT.md 
$ gistup -m "lab${LAB_NUMBER}"
```
