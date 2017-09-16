## Laboratory work II

Данная лабораторная работа посвещена изучению утилит для разработки проектов

## Tasks

- [x] 1. Ознакомиться со ссылками учебного материала
- [x] 2. Выполнить инструкцию учебного материала
- [x] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**
 
## Tutorial

Создаем переменные окружения GITHUB_USERNAME и GIST_TOKEN
```bash
$ export GITHUB_USERNAME=Kustov-Ilya  #cоздание переменной окружения
$ export GIST_TOKEN=****************************************  #cоздание переменной окружения
$ alias edit=vim #переопределение команды
```

Установка  gistup
```bash
$ npm install -g gistup 
```

Создание .gistup.json и редактирование, пока не введено "EOF"
```bash
$ cat > ~/.gistup.json <<EOF 
{
  "token": "${GIST_TOKEN}"
}
EOF #заполнение файла .gistup.json
```

Создание рабочего пространства
```bash
$ cd ~ #переход в основную директорию
$ mkdir -p workspace/labs/projects/   #создание новых директорий
$ mkdir -p workspace/labs/tasks/
$ mkdir -p workspace/labs/reports/
```

## Report


Добавление report на GitHub
```bash
$ cd ~/workspace/labs/ #переход в директорию workspace/labs/ 
$ export LAB_NUMBER=02 #cоздание переменной окружения
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER} #клонирование гитхаба
$ mkdir reports/lab${LAB_NUMBER} #создание директрия reports
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md #копирует README в REPORT
$ cd reports/lab${LAB_NUMBER} #переход в директорию reports/lab
$ edit REPORT.md #редакритование
$ gistup -m "lab${LAB_NUMBER}" #коммит гистфайла
```
