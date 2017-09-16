## Laboratory work II

Данная лабораторная работа посвещена изучению утилит для разработки проектов

## Tasks

- [x] 1. Ознакомиться со ссылками учебного материала
- [x] 2. Выполнить инструкцию учебного материала
- [x] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**
 
## Tutorial

```bash
#создаем переменные окружения GITHUB_USERNAME и GIST_TOKEN
$ export GITHUB_USERNAME=Kustov-Ilya  #cоздание переменной окружения
$ export GIST_TOKEN=****************************************  #cоздание переменной окружения
$ alias edit=vim #переопределение команды
```

```bash
#установка  gistup
$ npm install -g gistup 
```

```bash
#создание .gistup.json и редактирование, пока не введено "EOF"
$ cat > ~/.gistup.json <<EOF 
{
  "token": "${GIST_TOKEN}"
}
EOF #заполнение файла .gistup.json
```

```bash
#создание рабочего пространства
$ cd ~ #переход в основную директорию
$ mkdir -p workspace/labs/projects/   #создание новых директорий
$ mkdir -p workspace/labs/tasks/
$ mkdir -p workspace/labs/reports/
```

## Report

```bash
#добавляем report на GitHub
$ cd ~/workspace/labs/ #переход в директорию workspace/labs/ 
$ export LAB_NUMBER=02 #cоздание переменной окружения
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER} #клонирование гитхаба
$ mkdir reports/lab${LAB_NUMBER} #создание директрия reports
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md #копирует README в REPORT
$ cd reports/lab${LAB_NUMBER} #переход в директорию reports/lab
$ edit REPORT.md #редакритование
$ gistup -m "lab${LAB_NUMBER}" #коммит гистфайла
```
