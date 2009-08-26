#define UNKNOWN_ERROR "Неизвестная ошибка."
#define ERROR_MENU "Во время инициализации игры произошла ошибка:\n\
'%s'\n\
\n\
<a:/select>Да</a>"

#define WARNING_MENU "Во время работы игры произошла ошибка:\n\
'%s'\n\
\n\
<a:/resume>Да</a>"

#define SAVE_SLOT_EMPTY "пусто"
#define SELECT_LOAD_MENU "Загрузите игру\n\n"
#define AUTOSAVE_SLOT "Автосохранение"
#define BROKEN_SLOT "ошибка"
#define SELECT_SAVE_MENU "Сохраните игру\n\n"

#define MAIN_MENU \
"<a:/resume>Вернуться в игру</a>\n\
<a:/select>Выбор игры</a>\n\
<a:/themes>Выбор темы</a>\n\
<a:/new>Начать заново</a>\n\
<a:/load_menu>Загрузить игру</a>\n\
<a:/save_menu>Сохранить игру</a>\n\
<a:/about>Информация</a>\n\
<a:/settings>Настройки</a>\n\
<a:/ask_quit>Выход</a>"

#define ABOUT_MENU \
"INSTEAD SDL - "VERSION"\n\
\n\
Интерпретатор простых\n\
текстовых приключений.\n\
Косых П.А. '2009\n\
\n\
Версия для Windows\n\
Рындин И.В. '2009\n\
\n\
Сайт проекта:\n\
<u>http://instead.googlecode.com</u>\n\
\n\
<a:/main>Назад</a>"

#define BACK_MENU "<a:/main>Назад</a>"
#define ON 	"Да"
#define OFF	"Нет"

#define SETTINGS_MENU \
"Громкость\n\
<a:/vol--><<</a><a:/vol-><</a> <a:/mtoggle>%d%%</a> <a:/vol+>></a><a:/vol++>>></a>\n\
\n\
Качество звука\n<a:/hz-><<</a> %dГц <a:/hz+>>></a>\n\
\n\
Музыка: <a:/music>%s</a>\n\
Звук щелчка: <a:/click>%s</a>\n\
\n\
Полный экран: <a:/fs>%s</a>\n\
Масштаб шрифта: <a:/fs--><<</a>%d<a:/fs++>>></a>\n\
Подсветка ссылок: <a:/hl>%s</a>\n\
Режим прокрутки: <a:/motion>%s</a>\n\
Фильтр мышки: <a:/filter>%s</a>\n\
\n\
Собственные темы игр: <a:/owntheme>%s</a>\n\
Автосохранение: <a:/autosave>%s</a>\n\
\n\
<a:/main>Применить</a>"

#define CUSTOM_THEME_MENU \
"Внимание!!!\n\
\n\
Игра содержит собственную тему, но поддержка собственных тем отключена в настройках. \
Игра может выглядеть не так, как задумывал ее автор.\n\
\n\
<i>Вы можете разрешить возможность переопределения тем в настройках.</i>\n\
\n\
<a:/resume>Да</a>"

#define OWN_THEME_MENU \
"Внимание!!!\n\
\n\
Выбранная игра переопределяет тему. Изменения не вступят в силу.\n\
\n\
<i>Вы можете запретить возможность переопределения тем в настройках.</i>\n\
\n\
<a:/resume>Да</a>"

#define QUIT_MENU \
"На самом деле выйти?\n\
\n\
<a:/quit>Да</a> | <a:/main>Нет</a>"

#define SELECT_GAME_MENU "Выбор игры\n\n"
#define SELECT_THEME_MENU "Выбор темы\n\n"
#define SAVED_MENU \
"Игра сохранена!\n\
\n\
<a:/main>Да</a>"

#define NOGAMES_MENU \
"Не найдена ни одна игра.\n\
Пожалуйста, скопируйте хотя бы одну игру в каталог:\n'%s'"

#define NOTHEMES_MENU \
"Не найдена ни одна тема.\n\
Пожалуйста, скопируйте хотя бы одну тему в каталог:\n'%s'"
