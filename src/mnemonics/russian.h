// Word list created by Rrnc contributor sammy007
// 
// Copyright (c) 2014-2017, The Rrnc Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file russian.h
 * 
 * \brief Russian word list and map.
 */

#ifndef RUSSIAN_H
#define RUSSIAN_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Russian: public Base
  {
  public:
    Russian(): Base("русский язык", std::vector<std::string>({
        "абажур",
        "абзац",
        "абонент",
        "абрикос",
        "абсурд",
        "авангард",
        "август",
        "авиация",
        "авоська",
        "автор",
        "агат",
        "агент",
        "агитатор",
        "агнец",
        "агония",
        "агрегат",
        "адвокат",
        "адмирал",
        "адрес",
        "ажиотаж",
        "азарт",
        "азбука",
        "азот",
        "аист",
        "айсберг",
        "академия",
        "аквариум",
        "аккорд",
        "акробат",
        "аксиома",
        "актер",
        "акула",
        "акция",
        "алгоритм",
        "алебарда",
        "аллея",
        "алмаз",
        "алтарь",
        "алфавит",
        "алхимик",
        "алый",
        "альбом",
        "алюминий",
        "амбар",
        "аметист",
        "амнезия",
        "ампула",
        "амфора",
        "анализ",
        "ангел",
        "анекдот",
        "анимация",
        "анкета",
        "аномалия",
        "ансамбль",
        "антенна",
        "апатия",
        "апельсин",
        "апофеоз",
        "аппарат",
        "апрель",
        "аптека",
        "арабский",
        "арбуз",
        "аргумент",
        "арест",
        "ария",
        "арка",
        "армия",
        "аромат",
        "арсенал",
        "артист",
        "архив",
        "аршин",
        "асбест",
        "аскетизм",
        "аспект",
        "ассорти",
        "астроном",
        "асфальт",
        "атака",
        "ателье",
        "атлас",
        "атом",
        "атрибут",
        "аудитор",
        "аукцион",
        "аура",
        "афера",
        "афиша",
        "ахинея",
        "ацетон",
        "аэропорт",
        "бабушка",
        "багаж",
        "бадья",
        "база",
        "баклажан",
        "балкон",
        "бампер",
        "банк",
        "барон",
        "бассейн",
        "батарея",
        "бахрома",
        "башня",
        "баян",
        "бегство",
        "бедро",
        "бездна",
        "бекон",
        "белый",
        "бензин",
        "берег",
        "беседа",
        "бетонный",
        "биатлон",
        "библия",
        "бивень",
        "бигуди",
        "бидон",
        "бизнес",
        "бикини",
        "билет",
        "бинокль",
        "биология",
        "биржа",
        "бисер",
        "битва",
        "бицепс",
        "благо",
        "бледный",
        "близкий",
        "блок",
        "блуждать",
        "блюдо",
        "бляха",
        "бобер",
        "богатый",
        "бодрый",
        "боевой",
        "бокал",
        "большой",
        "борьба",
        "босой",
        "ботинок",
        "боцман",
        "бочка",
        "боярин",
        "брать",
        "бревно",
        "бригада",
        "бросать",
        "брызги",
        "брюки",
        "бублик",
        "бугор",
        "будущее",
        "буква",
        "бульвар",
        "бумага",
        "бунт",
        "бурный",
        "бусы",
        "бутылка",
        "буфет",
        "бухта",
        "бушлат",
        "бывалый",
        "быль",
        "быстрый",
        "быть",
        "бюджет",
        "бюро",
        "бюст",
        "вагон",
        "важный",
        "ваза",
        "вакцина",
        "валюта",
        "вампир",
        "ванная",
        "вариант",
        "вассал",
        "вата",
        "вафля",
        "вахта",
        "вдова",
        "вдыхать",
        "ведущий",
        "веер",
        "вежливый",
        "везти",
        "веко",
        "великий",
        "вена",
        "верить",
        "веселый",
        "ветер",
        "вечер",
        "вешать",
        "вещь",
        "веяние",
        "взаимный",
        "взбучка",
        "взвод",
        "взгляд",
        "вздыхать",
        "взлетать",
        "взмах",
        "взнос",
        "взор",
        "взрыв",
        "взывать",
        "взятка",
        "вибрация",
        "визит",
        "вилка",
        "вино",
        "вирус",
        "висеть",
        "витрина",
        "вихрь",
        "вишневый",
        "включать",
        "вкус",
        "власть",
        "влечь",
        "влияние",
        "влюблять",
        "внешний",
        "внимание",
        "внук",
        "внятный",
        "вода",
        "воевать",
        "вождь",
        "воздух",
        "войти",
        "вокзал",
        "волос",
        "вопрос",
        "ворота",
        "восток",
        "впадать",
        "впускать",
        "врач",
        "время",
        "вручать",
        "всадник",
        "всеобщий",
        "вспышка",
        "встреча",
        "вторник",
        "вулкан",
        "вурдалак",
        "входить",
        "въезд",
        "выбор",
        "вывод",
        "выгодный",
        "выделять",
        "выезжать",
        "выживать",
        "вызывать",
        "выигрыш",
        "вылезать",
        "выносить",
        "выпивать",
        "высокий",
        "выходить",
        "вычет",
        "вышка",
        "выяснять",
        "вязать",
        "вялый",
        "гавань",
        "гадать",
        "газета",
        "гаишник",
        "галстук",
        "гамма",
        "гарантия",
        "гастроли",
        "гвардия",
        "гвоздь",
        "гектар",
        "гель",
        "генерал",
        "геолог",
        "герой",
        "гешефт",
        "гибель",
        "гигант",
        "гильза",
        "гимн",
        "гипотеза",
        "гитара",
        "глаз",
        "глина",
        "глоток",
        "глубокий",
        "глыба",
        "глядеть",
        "гнать",
        "гнев",
        "гнить",
        "гном",
        "гнуть",
        "говорить",
        "годовой",
        "голова",
        "гонка",
        "город",
        "гость",
        "готовый",
        "граница",
        "грех",
        "гриб",
        "громкий",
        "группа",
        "грызть",
        "грязный",
        "губа",
        "гудеть",
        "гулять",
        "гуманный",
        "густой",
        "гуща",
        "давать",
        "далекий",
        "дама",
        "данные",
        "дарить",
        "дать",
        "дача",
        "дверь",
        "движение",
        "двор",
        "дебют",
        "девушка",
        "дедушка",
        "дежурный",
        "дезертир",
        "действие",
        "декабрь",
        "дело",
        "демократ",
        "день",
        "депутат",
        "держать",
        "десяток",
        "детский",
        "дефицит",
        "дешевый",
        "деятель",
        "джаз",
        "джинсы",
        "джунгли",
        "диалог",
        "диван",
        "диета",
        "дизайн",
        "дикий",
        "динамика",
        "диплом",
        "директор",
        "диск",
        "дитя",
        "дичь",
        "длинный",
        "дневник",
        "добрый",
        "доверие",
        "договор",
        "дождь",
        "доза",
        "документ",
        "должен",
        "домашний",
        "допрос",
        "дорога",
        "доход",
        "доцент",
        "дочь",
        "дощатый",
        "драка",
        "древний",
        "дрожать",
        "друг",
        "дрянь",
        "дубовый",
        "дуга",
        "дудка",
        "дукат",
        "дуло",
        "думать",
        "дупло",
        "дурак",
        "дуть",
        "духи",
        "душа",
        "дуэт",
        "дымить",
        "дыня",
        "дыра",
        "дыханье",
        "дышать",
        "дьявол",
        "дюжина",
        "дюйм",
        "дюна",
        "дядя",
        "дятел",
        "егерь",
        "единый",
        "едкий",
        "ежевика",
        "ежик",
        "езда",
        "елка",
        "емкость",
        "ерунда",
        "ехать",
        "жадный",
        "жажда",
        "жалеть",
        "жанр",
        "жара",
        "жать",
        "жгучий",
        "ждать",
        "жевать",
        "желание",
        "жемчуг",
        "женщина",
        "жертва",
        "жесткий",
        "жечь",
        "живой",
        "жидкость",
        "жизнь",
        "жилье",
        "жирный",
        "житель",
        "журнал",
        "жюри",
        "забывать",
        "завод",
        "загадка",
        "задача",
        "зажечь",
        "зайти",
        "закон",
        "замечать",
        "занимать",
        "западный",
        "зарплата",
        "засыпать",
        "затрата",
        "захват",
        "зацепка",
        "зачет",
        "защита",
        "заявка",
        "звать",
        "звезда",
        "звонить",
        "звук",
        "здание",
        "здешний",
        "здоровье",
        "зебра",
        "зевать",
        "зеленый",
        "земля",
        "зенит",
        "зеркало",
        "зефир",
        "зигзаг",
        "зима",
        "зиять",
        "злак",
        "злой",
        "змея",
        "знать",
        "зной",
        "зодчий",
        "золотой",
        "зомби",
        "зона",
        "зоопарк",
        "зоркий",
        "зрачок",
        "зрение",
        "зритель",
        "зубной",
        "зыбкий",
        "зять",
        "игла",
        "иголка",
        "играть",
        "идея",
        "идиот",
        "идол",
        "идти",
        "иерархия",
        "избрать",
        "известие",
        "изгонять",
        "издание",
        "излагать",
        "изменять",
        "износ",
        "изоляция",
        "изрядный",
        "изучать",
        "изымать",
        "изящный",
        "икона",
        "икра",
        "иллюзия",
        "имбирь",
        "иметь",
        "имидж",
        "иммунный",
        "империя",
        "инвестор",
        "индивид",
        "инерция",
        "инженер",
        "иномарка",
        "институт",
        "интерес",
        "инфекция",
        "инцидент",
        "ипподром",
        "ирис",
        "ирония",
        "искать",
        "история",
        "исходить",
        "исчезать",
        "итог",
        "июль",
        "июнь",
        "кабинет",
        "кавалер",
        "кадр",
        "казарма",
        "кайф",
        "кактус",
        "калитка",
        "камень",
        "канал",
        "капитан",
        "картина",
        "касса",
        "катер",
        "кафе",
        "качество",
        "каша",
        "каюта",
        "квартира",
        "квинтет",
        "квота",
        "кедр",
        "кекс",
        "кенгуру",
        "кепка",
        "керосин",
        "кетчуп",
        "кефир",
        "кибитка",
        "кивнуть",
        "кидать",
        "километр",
        "кино",
        "киоск",
        "кипеть",
        "кирпич",
        "кисть",
        "китаец",
        "класс",
        "клетка",
        "клиент",
        "клоун",
        "клуб",
        "клык",
        "ключ",
        "клятва",
        "книга",
        "кнопка",
        "кнут",
        "князь",
        "кобура",
        "ковер",
        "коготь",
        "кодекс",
        "кожа",
        "козел",
        "койка",
        "коктейль",
        "колено",
        "компания",
        "конец",
        "копейка",
        "короткий",
        "костюм",
        "котел",
        "кофе",
        "кошка",
        "красный",
        "кресло",
        "кричать",
        "кровь",
        "крупный",
        "крыша",
        "крючок",
        "кубок",
        "кувшин",
        "кудрявый",
        "кузов",
        "кукла",
        "культура",
        "кумир",
        "купить",
        "курс",
        "кусок",
        "кухня",
        "куча",
        "кушать",
        "кювет",
        "лабиринт",
        "лавка",
        "лагерь",
        "ладонь",
        "лазерный",
        "лайнер",
        "лакей",
        "лампа",
        "ландшафт",
        "лапа",
        "ларек",
        "ласковый",
        "лауреат",
        "лачуга",
        "лаять",
        "лгать",
        "лебедь",
        "левый",
        "легкий",
        "ледяной",
        "лежать",
        "лекция",
        "лента",
        "лепесток",
        "лесной",
        "лето",
        "лечь",
        "леший",
        "лживый",
        "либерал",
        "ливень",
        "лига",
        "лидер",
        "ликовать",
        "лиловый",
        "лимон",
        "линия",
        "липа",
        "лирика",
        "лист",
        "литр",
        "лифт",
        "лихой",
        "лицо",
        "личный",
        "лишний",
        "лобовой",
        "ловить",
        "логика",
        "лодка",
        "ложка",
        "лозунг",
        "локоть",
        "ломать",
        "лоно",
        "лопата",
        "лорд",
        "лось",
        "лоток",
        "лохматый",
        "лошадь",
        "лужа",
        "лукавый",
        "луна",
        "лупить",
        "лучший",
        "лыжный",
        "лысый",
        "львиный",
        "льгота",
        "льдина",
        "любить",
        "людской",
        "люстра",
        "лютый",
        "лягушка",
        "магазин",
        "мадам",
        "мазать",
        "майор",
        "максимум",
        "мальчик",
        "манера",
        "март",
        "масса",
        "мать",
        "мафия",
        "махать",
        "мачта",
        "машина",
        "маэстро",
        "маяк",
        "мгла",
        "мебель",
        "медведь",
        "мелкий",
        "мемуары",
        "менять",
        "мера",
        "место",
        "метод",
        "механизм",
        "мечтать",
        "мешать",
        "миграция",
        "мизинец",
        "микрофон",
        "миллион",
        "минута",
        "мировой",
        "миссия",
        "митинг",
        "мишень",
        "младший",
        "мнение",
        "мнимый",
        "могила",
        "модель",
        "мозг",
        "мойка",
        "мокрый",
        "молодой",
        "момент",
        "монах",
        "море",
        "мост",
        "мотор",
        "мохнатый",
        "мочь",
        "мошенник",
        "мощный",
        "мрачный",
        "мстить",
        "мудрый",
        "мужчина",
        "музыка",
        "мука",
        "мумия",
        "мундир",
        "муравей",
        "мусор",
        "мутный",
        "муфта",
        "муха",
        "мучить",
        "мушкетер",
        "мыло",
        "мысль",
        "мыть",
        "мычать",
        "мышь",
        "мэтр",
        "мюзикл",
        "мягкий",
        "мякиш",
        "мясо",
        "мятый",
        "мячик",
        "набор",
        "навык",
        "нагрузка",
        "надежда",
        "наемный",
        "нажать",
        "называть",
        "наивный",
        "накрыть",
        "налог",
        "намерен",
        "наносить",
        "написать",
        "народ",
        "натура",
        "наука",
        "нация",
        "начать",
        "небо",
        "невеста",
        "негодяй",
        "неделя",
        "нежный",
        "незнание",
        "нелепый",
        "немалый",
        "неправда",
        "нервный",
        "нести",
        "нефть",
        "нехватка",
        "нечистый",
        "неясный",
        "нива",
        "нижний",
        "низкий",
        "никель",
        "нирвана",
        "нить",
        "ничья",
        "ниша",
        "нищий",
        "новый",
        "нога",
        "ножницы",
        "ноздря",
        "ноль",
        "номер",
        "норма",
        "нота",
        "ночь",
        "ноша",
        "ноябрь",
        "нрав",
        "нужный",
        "нутро",
        "нынешний",
        "нырнуть",
        "ныть",
        "нюанс",
        "нюхать",
        "няня",
        "оазис",
        "обаяние",
        "обвинять",
        "обгонять",
        "обещать",
        "обжигать",
        "обзор",
        "обида",
        "область",
        "обмен",
        "обнимать",
        "оборона",
        "образ",
        "обучение",
        "обходить",
        "обширный",
        "общий",
        "объект",
        "обычный",
        "обязать",
        "овальный",
        "овес",
        "овощи",
        "овраг",
        "овца",
        "овчарка",
        "огненный",
        "огонь",
        "огромный",
        "огурец",
        "одежда",
        "одинокий",
        "одобрить",
        "ожидать",
        "ожог",
        "озарение",
        "озеро",
        "означать",
        "оказать",
        "океан",
        "оклад",
        "окно",
        "округ",
        "октябрь",
        "окурок",
        "олень",
        "опасный",
        "операция",
        "описать",
        "оплата",
        "опора",
        "оппонент",
        "опрос",
        "оптимизм",
        "опускать",
        "опыт",
        "орать",
        "орбита",
        "орган",
        "орден",
        "орел",
        "оригинал",
        "оркестр",
        "орнамент",
        "оружие",
        "осадок",
        "освещать",
        "осень",
        "осина",
        "осколок",
        "осмотр",
        "основной",
        "особый",
        "осуждать",
        "отбор",
        "отвечать",
        "отдать",
        "отец",
        "отзыв",
        "открытие",
        "отмечать",
        "относить",
        "отпуск",
        "отрасль",
        "отставка",
        "оттенок",
        "отходить",
        "отчет",
        "отъезд",
        "офицер",
        "охапка",
        "охота",
        "охрана",
        "оценка",
        "очаг",
        "очередь",
        "очищать",
        "очки",
        "ошейник",
        "ошибка",
        "ощущение",
        "павильон",
        "падать",
        "паек",
        "пакет",
        "палец",
        "память",
        "панель",
        "папка",
        "партия",
        "паспорт",
        "патрон",
        "пауза",
        "пафос",
        "пахнуть",
        "пациент",
        "пачка",
        "пашня",
        "певец",
        "педагог",
        "пейзаж",
        "пельмень",
        "пенсия",
        "пепел",
        "период",
        "песня",
        "петля",
        "пехота",
        "печать",
        "пешеход",
        "пещера",
        "пианист",
        "пиво",
        "пиджак",
        "пиковый",
        "пилот",
        "пионер",
        "пирог",
        "писать",
        "пить",
        "пицца",
        "пишущий",
        "пища",
        "план",
        "плечо",
        "плита",
        "плохой",
        "плыть",
        "плюс",
        "пляж",
        "победа",
        "повод",
        "погода",
        "подумать",
        "поехать",
        "пожимать",
        "позиция",
        "поиск",
        "покой",
        "получать",
        "помнить",
        "пони",
        "поощрять",
        "попадать",
        "порядок",
        "пост",
        "поток",
        "похожий",
        "поцелуй",
        "почва",
        "пощечина",
        "поэт",
        "пояснить",
        "право",
        "предмет",
        "проблема",
        "пруд",
        "прыгать",
        "прямой",
        "психолог",
        "птица",
        "публика",
        "пугать",
        "пудра",
        "пузырь",
        "пуля",
        "пункт",
        "пурга",
        "пустой",
        "путь",
        "пухлый",
        "пучок",
        "пушистый",
        "пчела",
        "пшеница",
        "пыль",
        "пытка",
        "пыхтеть",
        "пышный",
        "пьеса",
        "пьяный",
        "пятно",
        "работа",
        "равный",
        "радость",
        "развитие",
        "район",
        "ракета",
        "рамка",
        "ранний",
        "рапорт",
        "рассказ",
        "раунд",
        "рация",
        "рвать",
        "реальный",
        "ребенок",
        "реветь",
        "регион",
        "редакция",
        "реестр",
        "режим",
        "резкий",
        "рейтинг",
        "река",
        "религия",
        "ремонт",
        "рента",
        "реплика",
        "ресурс",
        "реформа",
        "рецепт",
        "речь",
        "решение",
        "ржавый",
        "рисунок",
        "ритм",
        "рифма",
        "робкий",
        "ровный",
        "рогатый",
        "родитель",
        "рождение",
        "розовый",
        "роковой",
        "роль",
        "роман",
        "ронять",
        "рост",
        "рота",
        "роща",
        "рояль",
        "рубль",
        "ругать",
        "руда",
        "ружье",
        "руины",
        "рука",
        "руль",
        "румяный",
        "русский",
        "ручка",
        "рыба",
        "рывок",
        "рыдать",
        "рыжий",
        "рынок",
        "рысь",
        "рыть",
        "рыхлый",
        "рыцарь",
        "рычаг",
        "рюкзак",
        "рюмка",
        "рябой",
        "рядовой",
        "сабля",
        "садовый",
        "сажать",
        "салон",
        "самолет",
        "сани",
        "сапог",
        "сарай",
        "сатира",
        "сауна",
        "сахар",
        "сбегать",
        "сбивать",
        "сбор",
        "сбыт",
        "свадьба",
        "свет",
        "свидание",
        "свобода",
        "связь",
        "сгорать",
        "сдвигать",
        "сеанс",
        "северный",
        "сегмент",
        "седой",
        "сезон",
        "сейф",
        "секунда",
        "сельский",
        "семья",
        "сентябрь",
        "сердце",
        "сеть",
        "сечение",
        "сеять",
        "сигнал",
        "сидеть",
        "сизый",
        "сила",
        "символ",
        "синий",
        "сирота",
        "система",
        "ситуация",
        "сиять",
        "сказать",
        "скважина",
        "скелет",
        "скидка",
        "склад",
        "скорый",
        "скрывать",
        "скучный",
        "слава",
        "слеза",
        "слияние",
        "слово",
        "случай",
        "слышать",
        "слюна",
        "смех",
        "смирение",
        "смотреть",
        "смутный",
        "смысл",
        "смятение",
        "снаряд",
        "снег",
        "снижение",
        "сносить",
        "снять",
        "событие",
        "совет",
        "согласие",
        "сожалеть",
        "сойти",
        "сокол",
        "солнце",
        "сомнение",
        "сонный",
        "сообщать",
        "соперник",
        "сорт",
        "состав",
        "сотня",
        "соус",
        "социолог",
        "сочинять",
        "союз",
        "спать",
        "спешить",
        "спина",
        "сплошной",
        "способ",
        "спутник",
        "средство",
        "срок",
        "срывать",
        "стать",
        "ствол",
        "стена",
        "стихи",
        "сторона",
        "страна",
        "студент",
        "стыд",
        "субъект",
        "сувенир",
        "сугроб",
        "судьба",
        "суета",
        "суждение",
        "сукно",
        "сулить",
        "сумма",
        "сунуть",
        "супруг",
        "суровый",
        "сустав",
        "суть",
        "сухой",
        "суша",
        "существо",
        "сфера",
        "схема",
        "сцена",
        "счастье",
        "счет",
        "считать",
        "сшивать",
        "съезд",
        "сынок",
        "сыпать",
        "сырье",
        "сытый",
        "сыщик",
        "сюжет",
        "сюрприз",
        "таблица",
        "таежный",
        "таинство",
        "тайна",
        "такси",
        "талант",
        "таможня",
        "танец",
        "тарелка",
        "таскать",
        "тахта",
        "тачка",
        "таять",
        "тварь",
        "твердый",
        "творить",
        "театр",
        "тезис",
        "текст",
        "тело",
        "тема",
        "тень",
        "теория",
        "теплый",
        "терять",
        "тесный",
        "тетя",
        "техника",
        "течение",
        "тигр",
        "типичный",
        "тираж",
        "титул",
        "тихий",
        "тишина",
        "ткань",
        "товарищ",
        "толпа",
        "тонкий",
        "топливо",
        "торговля",
        "тоска",
        "точка",
        "тощий",
        "традиция",
        "тревога",
        "трибуна",
        "трогать",
        "труд",
        "трюк",
        "тряпка",
        "туалет",
        "тугой",
        "туловище",
        "туман",
        "тундра",
        "тупой",
        "турнир",
        "тусклый",
        "туфля",
        "туча",
        "туша",
        "тыкать",
        "тысяча",
        "тьма",
        "тюльпан",
        "тюрьма",
        "тяга",
        "тяжелый",
        "тянуть",
        "убеждать",
        "убирать",
        "убогий",
        "убыток",
        "уважение",
        "уверять",
        "увлекать",
        "угнать",
        "угол",
        "угроза",
        "удар",
        "удивлять",
        "удобный",
        "уезд",
        "ужас",
        "ужин",
        "узел",
        "узкий",
        "узнавать",
        "узор",
        "уйма",
        "уклон",
        "укол",
        "уксус",
        "улетать",
        "улица",
        "улучшать",
        "улыбка",
        "уметь",
        "умиление",
        "умный",
        "умолять",
        "умысел",
        "унижать",
        "уносить",
        "уныние",
        "упасть",
        "уплата",
        "упор",
        "упрекать",
        "упускать",
        "уран",
        "урна",
        "уровень",
        "усадьба",
        "усердие",
        "усилие",
        "ускорять",
        "условие",
        "усмешка",
        "уснуть",
        "успеть",
        "усыпать",
        "утешать",
        "утка",
        "уточнять",
        "утро",
        "утюг",
        "уходить",
        "уцелеть",
        "участие",
        "ученый",
        "учитель",
        "ушко",
        "ущерб",
        "уютный",
        "уяснять",
        "фабрика",
        "фаворит",
        "фаза",
        "файл",
        "факт",
        "фамилия",
        "фантазия",
        "фара",
        "фасад",
        "февраль",
        "фельдшер",
        "феномен",
        "ферма",
        "фигура",
        "физика",
        "фильм",
        "финал",
        "фирма",
        "фишка",
        "флаг",
        "флейта",
        "флот",
        "фокус",
        "фольклор",
        "фонд",
        "форма",
        "фото",
        "фраза",
        "фреска",
        "фронт",
        "фрукт",
        "функция",
        "фуражка",
        "футбол",
        "фыркать",
        "халат",
        "хамство",
        "хаос",
        "характер",
        "хата",
        "хватать",
        "хвост",
        "хижина",
        "хилый",
        "химия",
        "хирург",
        "хитрый",
        "хищник",
        "хлам",
        "хлеб",
        "хлопать",
        "хмурый",
        "ходить",
        "хозяин",
        "хоккей",
        "холодный",
        "хороший",
        "хотеть",
        "хохотать",
        "храм",
        "хрен",
        "хриплый",
        "хроника",
        "хрупкий",
        "художник",
        "хулиган",
        "хутор",
        "царь",
        "цвет",
        "цель",
        "цемент",
        "центр",
        "цепь",
        "церковь",
        "цикл",
        "цилиндр",
        "циничный",
        "цирк",
        "цистерна",
        "цитата",
        "цифра",
        "цыпленок",
        "чадо",
        "чайник",
        "часть",
        "чашка",
        "человек",
        "чемодан",
        "чепуха",
        "черный",
        "честь",
        "четкий",
        "чехол",
        "чиновник",
        "число",
        "читать",
        "членство",
        "чреватый",
        "чтение",
        "чувство",
        "чугунный",
        "чудо",
        "чужой",
        "чукча",
        "чулок",
        "чума",
        "чуткий",
        "чучело",
        "чушь",
        "шаблон",
        "шагать",
        "шайка",
        "шакал",
        "шалаш",
        "шампунь",
        "шанс",
        "шапка",
        "шарик",
        "шасси",
        "шатер",
        "шахта",
        "шашлык",
        "швейный",
        "швырять",
        "шевелить",
        "шедевр",
        "шейка",
        "шелковый",
        "шептать",
        "шерсть",
        "шестерка",
        "шикарный",
        "шинель",
        "шипеть",
        "широкий",
        "шить",
        "шишка",
        "шкаф",
        "школа",
        "шкура",
        "шланг",
        "шлем",
        "шлюпка",
        "шляпа",
        "шнур",
        "шоколад",
        "шорох",
        "шоссе",
        "шофер",
        "шпага",
        "шпион",
        "шприц",
        "шрам",
        "шрифт",
        "штаб",
        "штора",
        "штраф",
        "штука",
        "штык",
        "шуба",
        "шуметь",
        "шуршать",
        "шутка",
        "щадить",
        "щедрый",
        "щека",
        "щель",
        "щенок",
        "щепка",
        "щетка",
        "щука",
        "эволюция",
        "эгоизм",
        "экзамен",
        "экипаж",
        "экономия",
        "экран",
        "эксперт",
        "элемент",
        "элита",
        "эмблема",
        "эмигрант",
        "эмоция",
        "энергия",
        "эпизод",
        "эпоха",
        "эскиз",
        "эссе",
        "эстрада",
        "этап",
        "этика",
        "этюд",
        "эфир",
        "эффект",
        "эшелон",
        "юбилей",
        "юбка",
        "южный",
        "юмор",
        "юноша",
        "юрист",
        "яблоко",
        "явление",
        "ягода",
        "ядерный",
        "ядовитый",
        "ядро",
        "язва",
        "язык",
        "яйцо",
        "якорь",
        "январь",
        "японец",
        "яркий",
        "ярмарка",
        "ярость",
        "ярус",
        "ясный",
        "яхта",
        "ячейка",
        "ящик"
      }), 4)
    {
      populate_maps();
    }
  };
}

#endif