# Система учета студентов и учебных групп
## Состав команды
Архитектор(Team Lead) - Никита Миронов

Разработчик №1 - Андрей Коротенко

Разработчик № 2 - Александр Федяев

Тестировщик - Иван Немцов

Технический писатель - Гаяна Ахметзянова

## Инструкции по сборке

Команды CMake

```
cmake_minimum_required(VERSION 3.10)

project(StudentManagement VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/Student.cpp
    src/StudentGroup.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC include)

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)
endif()

```

## Классы и их методы

## Пример работы программы

## Проблемы и решения 

## ⭐ Поддержка

Если проект вам помог — поставьте звездочку на GitHub! Это очень мотивирует ❤️
