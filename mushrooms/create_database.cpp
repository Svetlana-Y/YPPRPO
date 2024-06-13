#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
#include <QString>


void createDatabase(const QString &name) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(name);

    if (!db.open()) {
        qDebug() << "Error: cannot open database.";
        return;
    }

    QSqlQuery query;
    QString createTableQuery =
        "CREATE TABLE IF NOT EXISTS Rus ("
        "English_Name TEXT, "
        "Name TEXT, "
        "Edeble BOOL, "
        "Description TEXT, "
        "Description2 TEXT, "
        "Lie_Name TEXT, "
        "Lie_Edeble BOOL, "
        "Lie_Description TEXT"
        ");";

    if (!query.exec(createTableQuery)) {
        qDebug() << "Error: cannot create table 'Rus'.";
        return;
    }

    qDebug() << "Database and table 'Rus' created successfully.";

    QString createTableQuery1 =
        "CREATE TABLE IF NOT EXISTS Eng ("
        "English_Name TEXT, "
        "Name TEXT, "
        "Edeble BOOL, "
        "Description TEXT, "
        "Description2 TEXT, "
        "Lie_Name TEXT, "
        "Lie_Edeble BOOL, "
        "Lie_Description TEXT"
        ");";

    if (!query.exec(createTableQuery1)) {
        qDebug() << "Error: cannot create table 'Eng'.";
        return;
    }

    qDebug() << "Database and table 'Eng' created successfully.";
}

void insertData() {
    QSqlQuery query;
    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("chanterelles");
    query.addBindValue("Лисичка");
    query.addBindValue(true);
    query.addBindValue("Лисичка — гриб с самой яркой и запоминающейся внешностью."
                       "Шляпка и ножка составляют одно целое, цвет от светло-желтого "
                                                "до желто-оранжевого цвета. Шляпка вогнутая, воронкообразной формы, "
                                                "с волнистыми краями, от 2 до 12 см. Ножка плотная и гладкая, длиной "
                                                "от 4 до 7 см. Мякоть плотно-мясистая с кисловатым вкусом и "
                                                "слабовыраженным ароматом сушеных фруктов. Сырая мякоть гриба "
                                                "немного горчит, но при отваривании горчинка исчезает. В отличие "
                                                "от других грибов в лисичках никогда нет червей. Эти грибы содержат "
                                                "хиноманнозу, которая убивает членистоногих и глистов. Они встречаются "
                                                "в хвойных и лиственных лесах умеренного климата, растут большими группами, "
                                                "поэтому их легко находят даже начинающие грибники. Лисички едят в любом виде, "
                                                "они хорошо хранятся.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Кантарелловые\n"
                       "Семейство:	Лисичковые\n"
                       "Род:	Лисичка");
    query.addBindValue("Ложная лисичка");
    query.addBindValue(true);
    query.addBindValue("Лисичка ложная встречается на нескольких континентах, растет в лесах и пустоши, "
                       "а иногда и на щепе, используемой в садоводстве и ландшафтном дизайне."
                       "Отличительным отличием ложной лисички является то, что она имеет четкие и отчетливые жабры, "
                       "не соединяющиеся друг с другом. У тонкой шляпки загнутый край, а сам гриб обычно более "
                       "оранжевого цвета, без фруктово-сладкого запаха, и обычно крупнее лисички. Шляпка "
                       "ложной лисички может быть желтой, оранжевой или коричневой, от выпуклой до воронкообразной "
                       "с загнутым краем. Его жабры оранжевые и спускаются по стеблю. "
                       "Средний размер гриба составляет от 5 до 8 см.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("chanterelles");
    query.addBindValue("Chaterelle");
    query.addBindValue(true);
    query.addBindValue("The chanterelle is a mushroom with the most striking and memorable appearance."
                       "The cap and the leg are one piece, the color is light yellow"
                       "to yellow-orange color. The cap is concave, funnel-shaped, "
                       "with wavy edges, from 2 to 12 cm. The leg is dense and smooth, long"
                       "from 4 to 7 cm. The pulp is dense and fleshy with a sour taste and "
                       "faint aroma of dried fruit. Raw mushroom pulp"
                       "It's a little bitter, but when boiled, the bitterness disappears. Unlike "
                       "chanterelles never contain worms from other mushrooms. These mushrooms contain "
                       "quinomannose, which kills arthropods and worms. They are found "
                       "in coniferous and deciduous forests of temperate climates, grow in large groups,"
                    "That’s why even novice mushroom pickers can easily find them. Chanterelles are eaten in any form,"
                       "they are well kept.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Cantarella\n"
                       "Family: Chanterelles\n"
                       "Genus: Chanterelle");
    query.addBindValue("False chanterelle");
    query.addBindValue(true);
    query.addBindValue("The false chanterelle is found on several continents, growing in forests and heaths,"
                       "and sometimes on wood chips used in gardening and landscaping."
                       "The distinguishing feature of the false chanterelle is that it has clear and distinct gills,"
                       "not connecting to each other. The thin cap has a curved edge, and the mushroom itself is usually more"
                       "orange in color, without a fruity-sweet smell, and usually larger than a chanterelle. Cap"
                       "false chanterelle can be yellow, orange or brown, convex to funnel-shaped"
                       "with a curved edge. Its gills are orange and run down the stem."
                       "The average size of a mushroom is from 5 to 8 cm.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("black-milk-mushrooms");
    query.addBindValue("Черный груздь");
    query.addBindValue(true);
    query.addBindValue("Черный груздь – гриб с характерной воронковидной шляпкой "
                       "темно-серого или черного цвета. Молодые экземпляры обладают "
                       "плоской шляпкой с завернутым краем, но со временем она приобретает "
                       "воронкообразную форму с зубчатым краем. Мякоть белая, плотная и обильно "
                       "выделяет белый млечный сок, который горький и едкий. Пластинки частые, узкие, "
                       "светло-кремовые или слегка желтоватые. Ножка короткая и цилиндрическая, того же "
                       "цвета, что и шляпка.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Руссуловые\n"
                       "Семейство:	Сыроежковые\n"
                       "Род:	Млечник\n"
                       "Вид:	Груздь чёрный");
    query.addBindValue("Говорушка пахучая");
    query.addBindValue(false);
    query.addBindValue("Воронка серая  — ядовитый гриб, который часто путают с черным груздем "
                       "из-за схожей воронкообразной формы шляпки и серого цвета. Однако воронка "
                       "серая имеет несколько отличительных признаков: ее шляпка более тонкая и хрупкая, "
                       "с гладким краем без зубцов; она не выделяет млечный сок или выделяет его очень мало; "
                       "и она имеет отчетливый запах муки или миндаля. Употребление воронки серой может вызвать"
                       " желудочно-кишечные расстройства, такие как тошнота, рвота и диарея, а в некоторых случаях "
                       "может привести к поражению почек или печени.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("black-milk-mushrooms");
    query.addBindValue("Black milk mushroom");
    query.addBindValue(true);
    query.addBindValue("Black milk mushroom is a mushroom with a characteristic funnel-shaped cap "
                       "dark gray or black in color. Young specimens have "
                       "a flat cap with a curled edge, but over time it becomes "
                       "funnel-shaped with a jagged edge. The flesh is white, firm and plentiful"
                       "excretes white milky juice, which is bitter and acrid. The plates are frequent, narrow,"
                       "light cream or slightly yellowish. The leg is short and cylindrical, the same"
                       "the same color as the hat.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Russolov\n"
                       "Family: Russula\n"
                       "Genus: Milky\n"
                       "Species: Black breast");
    query.addBindValue("Clitocybe odora");
    query.addBindValue(false);
    query.addBindValue("The gray funnel mushroom is a poisonous mushroom that is often confused with black mushroom "
                       "due to the similar funnel-shaped cap and gray color. However, the funnel "
                       "The gray one has several distinctive features: its cap is thinner and more fragile,"
                       "with a smooth edge without teeth; it does not secrete milky juice or secretes very little of it;"
                       "and it has a distinct odor of flour or almonds. Eating funnel sulfur may cause"
                       "gastrointestinal disorders such as nausea, vomiting and diarrhea, and in some cases"
                       "may cause kidney or liver damage.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("white-milk-mushrooms");
    query.addBindValue("Белый груздь");
    query.addBindValue(true);
    query.addBindValue("Белый груздь — высоко ценимый съедобный гриб. Отличается крупной, "
                       "мясистой, воронкообразной шляпкой до 25 см в диаметре, окрашенной "
                       "от чисто-белого до кремового цвета. Мякоть гриба плотная, белая, "
                       "на срезе выделяет млечный сок, который при контакте с воздухом "
                       "становится светло-желтым, а затем зеленеющим. Белый груздь произрастает"
                       " в лиственных и смешанных лесах, предпочитая тенистые влажные места под"
                       " березами. Высоко ценится за свои исключительные вкусовые качества, "
                       "отличается ореховым привкусом и ароматом. В кулинарии груздь используется"
                       " преимущественно для засолки, что придает ему неповторимый характерный вкус"
                       " и позволяет сохранить его на длительный срок.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Руссуловые\n"
                       "Семейство:	Сыроежковые\n"
                       "Род:	Млечник\n"
                       "Вид:	Груздь настоящий");
    query.addBindValue("Скрипица обыкновенная");
    query.addBindValue(false);
    query.addBindValue("Скрипица обыкновенная  — ядовитый гриб из семейства Сыроежковые. "
                       "Внешне похож на белый груздь, однако отличается от него "
                       "розовато-кремовым млечным соком, который при высыхании становится с"
                       "еро-зеленым. Шляпка диаметром до 12 см, матовая, сухая, с бархатистой "
                       "поверхностью, в центре вогнутая, с подвернутым краем. Мякоть плотная, "
                       "белая, с острым перцовым вкусом. Пластинки редкие, кремовые или "
                       "светло-розовые, при высыхании темнеют. Скрипица обыкновенная "
                       "может вызвать сильное пищевое отравление, симптомы которого включают"
                       " тошноту, рвоту, диарею и головные боли.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("white-milk-mushrooms");
    query.addBindValue("White milk mushroom");
    query.addBindValue(true);
    query.addBindValue("White mushroom is a highly valued edible mushroom. It is distinguished by its large size, "
                       "fleshy, funnel-shaped cap up to 25 cm in diameter, colored"
                       "pure white to cream color. The flesh of the mushroom is dense, white,"
                       "on the cut it releases milky juice, which when in contact with air"
                       "becomes light yellow and then green. White milk mushroom grows"
                       "in deciduous and mixed forests, preferring shady, moist places under"
                       " birch trees. Highly valued for their exceptional taste, "
                       "It has a nutty flavor and aroma. Milk mushrooms are used in cooking"
                       "primarily for pickling, which gives it a unique characteristic taste"
                       "and allows you to save it for a long time.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Russolov\n"
                       "Family: Russula\n"
                       "Genus: Milky\n"
                       "Type: Real breast milk");
    query.addBindValue("Lactarius vellereus");
    query.addBindValue(false);
    query.addBindValue("The common violin is a poisonous mushroom from the Russula family."
                       "Externally similar to white milk mushroom, but different from it"
                       "a pinkish-creamy milky sap that dries to a"
                       "grey-green. Cap with a diameter of up to 12 cm, matte, dry, with a velvety"
                       "surface, concave in the center, with a tucked edge. The flesh is dense, "
                       "white, with a spicy pepper taste. The plates are sparse, creamy or "
                       "light pink, darkens when dry. Common violin"
                       "can cause severe food poisoning, symptoms of which include"
                       "nausea, vomiting, diarrhea and headaches.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("buttermilk");
    query.addBindValue("Маслёнок");
    query.addBindValue(true);
    query.addBindValue("Маслята, род съедобных грибов семейства масленковых, "
                       "характеризуются характерным скользким, маслянистым слоем на шляпке."
                       " Их шляпки обычно выпуклые или плоские, от светло-коричневого до "
                       "красновато-коричневого цвета, с морщинистой или сетчатой поверхностью. "
                       "У них поры под шляпкой, которые у молодых грибов белые или желтоватые, "
                       "а с возрастом становятся оливково-коричневыми. Мякоть кремовая или желтоватая, "
                       "с мягким и маслянистым вкусом. Маслята встречаются в хвойных лесах, "
                       "образуя микоризный симбиоз с соснами и елями. Их собирают в основном"
                       " в конце лета и осенью, а после приготовления они обладают восхитительным "
                       "ароматом и вкусом, который ценится в кулинарии.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Маслёнковые\n"
                       "Род:	Маслёнок");
    query.addBindValue("Ложный масленок");
    query.addBindValue(false);
    query.addBindValue("Ложный масленок — гриб-двойник обыкновенного масленка, "
                       "но в отличие от него ядовит. Шляпка у ложного масленка "
                       "красновато-коричневая, выпуклая, с возрастом становится плоской. "
                       "Поверхность шляпки слизистая, во влажную погоду может быть покрыта"
                       " каплями слизи. Трубчатый слой желтый или оливково-желтый, с мелкими порами. "
                       "Ножка цилиндрическая, желтоватая или буроватая, с белым или желтоватым кольцом "
                       "в верхней части. Мякоть ложного масленка желтоватая, на вкус горькая. "
                       "Растет ложный масленок в хвойных лесах, образуя микоризу с соснами и елями. "
                       "Употребление ложного масленка в пищу может вызвать желудочно-кишечные "
                       "расстройства, рвоту и диарею.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("buttermilk");
    query.addBindValue("Buttermilk");
    query.addBindValue(true);
    query.addBindValue("Oleaceae, a genus of edible mushrooms of the oil family, "
                       "characterized by a characteristic slippery, oily layer on the cap."
                       "Their caps are usually convex or flat, ranging from light brown to "
                       "reddish-brown in color, with a wrinkled or reticulate surface."
                       "They have pores under the cap, which in young mushrooms are white or yellowish,"
                       "and with age they become olive-brown. The flesh is creamy or yellowish,"
                       "with a mild and oily taste. Butter is found in coniferous forests,"
                       "forming a mycorrhizal symbiosis with pines and spruces. They are mainly collected"
                       "in late summer and fall, and once cooked they taste delicious"
                       "aroma and taste, which is valued in cooking.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Boletov\n"
                       "Family: Oilcans\n"
                       "Genus: Oil Can");
    query.addBindValue("Suillus grevillei");
    query.addBindValue(false);
    query.addBindValue("False oiler is a mushroom-double of an ordinary oiler, "
                       "but unlike it is poisonous. The hat is on the false oiler"
                       "reddish-brown, convex, becoming flat with age."
                       "The surface of the cap is slimy and can be covered in wet weather"
                       "drops of mucus. The tubular layer is yellow or olive-yellow, with small pores."
                       "The leg is cylindrical, yellowish or brownish, with a white or yellowish ring"
                       "in the upper part. The flesh of the false butterfly is yellowish and tastes bitter."
                       "False butterwort grows in coniferous forests, forming mycorrhizae with pines and spruces."
                       "Eating false butterfly can cause gastrointestinal problems"
                       "disorders, vomiting and diarrhea.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("redheads");
    query.addBindValue("Рыжик");
    query.addBindValue(true);
    query.addBindValue("Рыжик  ценится за свой богатый вкус и яркий оранжевый цвет."
                       " Его легко распознать по характерным концентрическим кольцам "
                       "на шляпке. Шляпка обычно воронкообразная, с гладкими краями и"
                       " диаметром до 15 сантиметров. Мякоть рыжика интенсивно-оранжевая,"
                       " плотная и немного хрупкая. Гриб имеет характерный пряный аромат и"
                       " фруктовый, слегка острый вкус. Рыжик широко используется в кулинарии."
                       " Его часто маринуют, жарят или тушат. Кроме того, благодаря высокому "
                       "содержанию витамина А, он считается ценным продуктом для поддержани"
                       "я здоровья глаз и иммунной системы.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Руссуловые\n"
                       "Семейство:	Сыроежковые\n"
                       "Род:	Млечник\n"
                       "Вид:	Рыжик настоящий");
    query.addBindValue("Млечник серно-желтый");
    query.addBindValue(false);
    query.addBindValue("Млечник серно-желтый  — ядовитый гриб, который часто "
                       "путают с настоящим рыжиком из-за его сходной оранжевой "
                       "окраски. Однако есть несколько ключевых отличий, которые"
                       " помогут вам их различить.Шляпка млечника серно-желтого"
                       " обычно более яркая, оранжево-желтая или оранжево-красная,"
                       " чем у настоящего рыжика.  Еще одним отличительным признаком"
                       " является млечный сок, который выделяется при разрезании "
                       "гриба. У млечника серно-желтого млечный сок белый или "
                       "кремовый, а у настоящего рыжика — оранжевый. Млечник "
                       "серно-желтый содержит горькие и едкие вещества, которые "
                       "могут вызвать желудочно-кишечные расстройства, такие как"
                       " тошнота, рвота и диарея. ");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("redheads");
    query.addBindValue("Redhead");
    query.addBindValue(true);
    query.addBindValue("Celestial saffron is prized for its rich flavor and bright orange color."
                       "It is easily recognized by its characteristic concentric rings"
                       "on the cap. The cap is usually funnel-shaped, with smooth edges and"
                       "up to 15 centimeters in diameter. The flesh of the camelina is intense orange,"
                       "dense and slightly fragile. The mushroom has a characteristic spicy aroma and"
                       "Fruity, slightly spicy taste. Camelina is widely used in cooking."
                       "It is often pickled, fried or stewed. In addition, due to its high "
                       "vitamin A content, it is considered a valuable product for maintaining"
                       "I have eye health and immune system.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Russolov\n"
                       "Family: Russula\n"
                       "Genus: Milky\n"
                       "View: Real saffron");
    query.addBindValue("Lactarius deterrimus");
    query.addBindValue(false);
    query.addBindValue("Yellow sulphur is a poisonous mushroom that often "
                       "confused with the real saffron milk cap because of its similar orange color"
                       "colors. However, there are a few key differences that"
                       "will help you distinguish them. Cap of the sulfur-yellow milkweed"
                       "usually brighter, orange-yellow or orange-red,"
                       "than a real saffron milk cap. Another distinctive feature"
                       "is the milky juice that is released when cut"
                       "mushroom. The sulfur-yellow milkweed has white milky juice or "
                       "cream, but real saffron milk is orange. Milky"
                       "sulfur yellow contains bitter and corrosive substances that "
                       "may cause gastrointestinal disorders such as"
                       "nausea, vomiting and diarrhea.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("agaric-honey");
    query.addBindValue("Опята");
    query.addBindValue(true);
    query.addBindValue("Опенок — широко распространенный съедобный гриб, произрастающий группами"
                       " на стволах и корнях мертвых или ослабленных лиственных деревьев. Шляпка"
                       " опенка бывает выпуклой или плоской, диаметром от 2 до 10 сантиметров, "
                       "с желтовато-коричневым или охряным оттенком и мелкими чешуйками. Ножка "
                       "тонкая и волокнистая, той же окраски, что и шляпка. Опенок обладает "
                       "приятным грибным ароматом и нежным вкусом. Он широко "
                       "используется в кулинарии, особенно в супах, жарком "
                       "и маринадах.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Агариковые\n"
                       "Семейство:	Физалакриевые\n"
                       "Род:	Опёнок");
    query.addBindValue("Ложные опята");
    query.addBindValue(false);
    query.addBindValue("Ложные опята — группа ядовитых грибов, которые часто путают с "
                       "настоящими опятами. Они могут вызывать серьезные проблемы со "
                       "здоровьем, включая желудочно-кишечные расстройства, "
                       "повреждение печени и даже смерть. Ложные опята "
                       "обычно растут на живых или недавно погибших "
                       "деревьях лиственных пород, в отличие от "
                       "настоящих опят, которые растут на мертвой "
                       "древесине. У них также более яркая окраска шляпки, которая может быть оранжевой,"
                       " желтой или красновато-коричневой, и более толстая ножка с отсутствующим кольцом. "
                       "Некоторые виды ложных опят могут иметь кольцо на ножке, поэтому не следует полагаться"
                       " только на этот признак для идентификации.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("agaric-honey");
    query.addBindValue("Agaric honey");
    query.addBindValue(true);
    query.addBindValue("Honey fungus is a widespread edible mushroom that grows in groups"
                       "on the trunks and roots of dead or weakened deciduous trees. Cap"
                       "The honey mushroom can be convex or flat, with a diameter from 2 to 10 centimeters,"
                       "with a yellowish-brown or ocher tint and small scales. Leg"
                       "thin and fibrous, the same color as the cap. The honey fungus has "
                       "a pleasant mushroom aroma and delicate taste. It is widely "
                       "used in cooking, especially in soups, stir-fries"
                       "and marinades.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Agaricaceae\n"
                       "Family: Physalacriaceae\n"
                       "Kin: Honey fungus");
    query.addBindValue("False agaric honey");
    query.addBindValue(false);
    query.addBindValue("False honey mushrooms are a group of poisonous mushrooms that are often confused with "
                       "real honey mushrooms. They can cause serious problems with"
                       "health, including gastrointestinal disorders, "
                       "liver damage and even death. False honey mushrooms"
                       "usually grow on living or recently dead"
                       "deciduous trees, unlike "
                       "real honey mushrooms that grow on dead things"
                       "wood. They also have a brighter colored cap, which can be orange,"
                       "yellow or reddish brown, and a thicker stalk with a missing ring."
                       "Some types of false mushrooms may have a ring on the stem, so do not rely on it."
                       "Only this sign for identification.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("cep");
    query.addBindValue("Белый гриб");
    query.addBindValue(true);
    query.addBindValue("Белый гриб, также известный как боровик, является королем грибов, "
                       "ценимым за его неповторимый аромат и восхитительный вкус. Его большая, "
                       "мясистая шляпка варьируется от кремово-желтого до коричневого цвета, а ее "
                       "гладкая, губчатая нижняя поверхность меняет цвет от белого до слегка желтоватого "
                       "при созревании. Ножка гриба крепкая, короткая и расширенная у основания, часто "
                       "покрыта белым или светло-коричневым сетчатым узором. Растущий в основном в смешанных "
                       "лесах, белый гриб формирует микоризные отношения с различными породами деревьев, помогая "
                       "им усваивать питательные вещества из почвы. Его исключительные кулинарные качества делают "
                       "его желанным ингредиентом в многочисленных блюдах по всему миру, высоко ценимым шеф-поварами"
                       " и любителями грибов.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Болетовые\n"
                       "Род:	Боровик\n"
                       "Вид:	Белый гриб");
    query.addBindValue("Желчный гриб");
    query.addBindValue(false);
    query.addBindValue("Желчный гриб, коварный двойник белого гриба, является ядовитым грибом, который можно отличить "
                       "по его чрезвычайно горькому вкусу, розовато-коричневым трубочкам и порам, белой мякоти,"
                       " которая не меняет цвет при разрезании, и более выраженному сетчатому узору на ножке. Несмотря на то, "
                       "что желчный гриб не смертельно ядовит, его горький вкус делает его несъедобным. Если его случайно съесть, "
                       "это может вызвать тошноту, рвоту и диарею. Важно всегда собирать грибы у опытного грибника и тщательно "
                       "проверять их на наличие признаков ядовитости перед употреблением.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("cep");
    query.addBindValue("Белый гриб");
    query.addBindValue(true);
    query.addBindValue("Белый гриб, также известный как боровик, является королем грибов, "
                       "ценимым за его неповторимый аромат и восхитительный вкус. Его большая, "
                       "мясистая шляпка варьируется от кремово-желтого до коричневого цвета, а ее "
                       "гладкая, губчатая нижняя поверхность меняет цвет от белого до слегка желтоватого "
                       "при созревании. Ножка гриба крепкая, короткая и расширенная у основания, часто "
                       "покрыта белым или светло-коричневым сетчатым узором. Растущий в основном в смешанных "
                       "лесах, белый гриб формирует микоризные отношения с различными породами деревьев, помогая "
                       "им усваивать питательные вещества из почвы. Его исключительные кулинарные качества делают "
                       "его желанным ингредиентом в многочисленных блюдах по всему миру, высоко ценимым шеф-поварами"
                       " и любителями грибов.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Болетовые\n"
                       "Род:	Боровик\n"
                       "Вид:	Белый гриб");
    query.addBindValue("Желчный гриб");
    query.addBindValue(false);
    query.addBindValue("Желчный гриб, коварный двойник белого гриба, является ядовитым грибом, который можно отличить "
                       "по его чрезвычайно горькому вкусу, розовато-коричневым трубочкам и порам, белой мякоти,"
                       " которая не меняет цвет при разрезании, и более выраженному сетчатому узору на ножке. Несмотря на то, "
                       "что желчный гриб не смертельно ядовит, его горький вкус делает его несъедобным. Если его случайно съесть, "
                       "это может вызвать тошноту, рвоту и диарею. Важно всегда собирать грибы у опытного грибника и тщательно "
                       "проверять их на наличие признаков ядовитости перед употреблением.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("cep");
    query.addBindValue("Porcini mushroom");
    query.addBindValue(true);
    query.addBindValue("The porcini mushroom, also known as the boletus mushroom, is the king of mushrooms,"
                       "valued for its unique aroma and delicious taste. Its great, "
                       "the fleshy cap varies from creamy yellow to brown, and its "
                       "the smooth, spongy undersurface varies from white to slightly yellowish"
                       "when ripe. The mushroom stalk is strong, short and widened at the base, often "
                       "covered with a white or light brown reticulate pattern. Growing mainly in mixed"
                       "in forests, the porcini mushroom forms mycorrhizal relationships with various tree species, helping"
                       "It absorbs nutrients from the soil. Its exceptional culinary qualities make it "
                       "it is a coveted ingredient in numerous dishes around the world, highly prized by chefs"
                       "and mushroom lovers.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Boletov\n"
                       "Family: Boletaceae\n"
                       "Genus: Boletus\n"
                       "Species: White mushroom");
    query.addBindValue("Tylopilus felleus");
    query.addBindValue(false);
    query.addBindValue("The gall mushroom, the cep's insidious counterpart, is a poisonous mushroom that can be distinguished "
                       "by its extremely bitter taste, pinkish-brown tubes and pores, white flesh,"
                       "which does not change color when cut, and a more pronounced mesh pattern on the stem. Despite the fact, "
                       "that the gall mushroom is not fatally poisonous, its bitter taste makes it inedible. If it is accidentally eaten, "
                       "this may cause nausea, vomiting and diarrhea. It is important to always collect mushrooms from an experienced mushroom picker and carefully"
                       "check them for signs of toxicity before consumption.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("cobweb");
    query.addBindValue("Паутинник");
    query.addBindValue(true);
    query.addBindValue("Паутинник — загадочный и красивый гриб, произрастающий в лесах по всему миру. "
                       "Характерной чертой является паутинистый покров, покрывающий ножку гриба, который дает "
                       "ему название. Цвет шляпки варьируется от желтого до оранжевого или коричневого, обычно"
                       " с гладкой или слегка чешуйчатой поверхностью. Паутинник — съедобный гриб, но его иногда"
                       " путают с ядовитыми видами, поэтому настоятельно рекомендуется собирать только те, "
                       "которые идентифицированы профессионалами. Из паутинника получаются восхитительные блюда, "
                       "такие как супы, рагу и жареные кусочки.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Агариковые\n"
                       "Семейство:	Паутинниковые\n"
                       "Род:	Паутинник");
    query.addBindValue("Паутинник серо-зеленый");
    query.addBindValue(false);
    query.addBindValue("Паутинник серо-зеленый, также известный как смертельный паутинник, — крайне ядовитый гриб из семейства"
                       " Паутинниковые. Характеризуется серо-зеленой шляпкой, покрытой паутинистыми волокнами, и желто-зелеными "
                       "пластинками. Обитает в хвойных и смешанных лесах, образуя микоризу с елями и соснами.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("cobweb");
    query.addBindValue("Spiderweb");
    query.addBindValue(true);
    query.addBindValue("Spiderweb is a mysterious and beautiful mushroom that grows in forests around the world."
                       "A characteristic feature is the cobwebby cover covering the stem of the mushroom, which gives "
                       "its name. The color of the cap varies from yellow to orange or brown, usually"
                       "with a smooth or slightly scaly surface. Cobweb is an edible mushroom, but it is sometimes"
                       " are confused with poisonous species, so it is strongly recommended to collect only those "
                       "which are identified by professionals. Gossamer webs make delicious dishes,"
                       "such as soups, stews and fried bits.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Agaricaceae\n"
                       "Family: Gossamer\n"
                       "Genus: Cobweb");
    query.addBindValue("Grey-green spider web");
    query.addBindValue(false);
    query.addBindValue("Grey-green cobweb, also known as the death cobweb, is an extremely poisonous mushroom in the family"
                       "Cobwebs. Characterized by a gray-green cap covered with cobwebby fibers and yellow-green"
                       "plates. Lives in coniferous and mixed forests, forming mycorrhiza with spruce and pine.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("dubovik");
    query.addBindValue("Дубовик");
    query.addBindValue(true);
    query.addBindValue("Дубовик, также известный как дубовый гриб, отличается коричневой или красновато-коричневой шляпкой "
                       "с трубчатым гименофором на нижней стороне. Ножка короткая и толстая, с заметной сеточкой. Дубовик"
                       " образует микоризу с различными видами дубов, отсюда и его название. Он распространен в лиственных "
                       "лесах по всему Северному полушарию, где растет на влажной и хорошо дренированной почве. Дубовик "
                       "ценится за свой насыщенный, мясистый вкус и богатую питательными веществами ценность."
                       " Часто используется в супах, соусах и рагу.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Болетовые\n"
                       "Род:	Боровик\n"
                       "Вид:	Дубовик оливково-бурый");
    query.addBindValue("Желчный гриб");
    query.addBindValue(false);
    query.addBindValue("Желчный гриб, также известный как ложный дубовик, — ядовитый гриб, похожий на съедобный дубовик. "
                       "Он отличается оливково-коричневой или серовато-коричневой шляпкой, белыми или кремовыми трубками "
                       "и менее выраженной сеточкой на ножке. Самым отличительным признаком является его чрезвычайно горький вкус. "
                       "Желчный гриб растет рядом с дубовиками и другими съедобными грибами, что может привести к путанице. "
                       "Чтобы избежать употребления желчного гриба, тщательно проверяйте все собираемые грибы и пробуйте их на вкус."
                       " Даже небольшое количество этого гриба может испортить блюдо из-за его сильной горечи.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("dubovik");
    query.addBindValue("Dubovik");
    query.addBindValue(true);
    query.addBindValue("The oak mushroom, also known as the oak mushroom, is distinguished by its brown or reddish-brown cap"
                       "with a tubular hymenophore on the underside. The leg is short and thick, with a noticeable mesh. Oak"
                       "forms mycorrhiza with various species of oaks, hence its name. It is common in deciduous"
                       "forests throughout the Northern Hemisphere, where it grows in moist and well-drained soil. Dubovik"
                       "Prized for its rich, meaty flavor and nutrient-rich value."
                       "Often used in soups, sauces and stews.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Boletov\n"
                       "Family: Boletaceae\n"
                       "Genus: Boletus\n"
                       "View: Olive-brown oakberry");
    query.addBindValue("Tylopilus felleus");
    query.addBindValue(false);
    query.addBindValue("The gall mushroom, also known as false oak, is a poisonous mushroom similar to the edible oak."
                       "It is distinguished by an olive-brown or grayish-brown cap and white or cream-colored tubes"
                       "and less pronounced mesh on the stem. The most distinctive feature is its extremely bitter taste."
                       "The gall fungus grows near oak and other edible mushrooms, which can lead to confusion."
                        "To avoid eating gall mushrooms, carefully inspect and taste all mushrooms you collect."
                        "Even a small amount of this mushroom can ruin a dish due to its strong bitterness.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("fly-agaric");
    query.addBindValue("Мухомор");
    query.addBindValue(false);
    query.addBindValue("Мухомор известен своими яркими шляпками и ножками. Шляпка может быть различных цветов, "
                       "включая красный, оранжевый и желтый, с белыми пятнами или хлопьями. Ножка обычно белая и имеет кольцо, "
                       "а основание расширяется и образует вольву. Мухоморы часто встречаются в лиственных и хвойных лесах, "
                       "где они образуют симбиотические отношения с деревьями. "
                       "Известно, что некоторые виды мухоморов токсичны и могут вызывать желудочные расстройства, "
                       "галлюцинации и даже смерть, если их употреблять в сыром виде.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Агариковые\n"
                       "Семейство:	Мухоморовые\n"
                       "Род:	Мухомор");
    query.addBindValue("Цезарский гриб");
    query.addBindValue(true);
    query.addBindValue("Цезарский гриб — съедобный гриб. Шляпка гриба окрашена в яркий оранжевый или красновато-оранжевый цвет,"
                       " ее диаметр может достигать 15 сантиметров. Ножка гриба короткая и толстая, белого или кремового цвета. "
                       "Цезарский гриб обладает насыщенным пряным ароматом и слегка горьковатым вкусом. Он часто встречается в хвойных и "
                       "смешанных лесах Европы, а также в некоторых регионах Северной Америки. Его традиционно собирают и употребляют в пищу в"
                       " сыром, соленом, маринованном и жареном виде");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("fly-agaric");
    query.addBindValue("Fly agaric");
    query.addBindValue(false);
    query.addBindValue("The fly agaric is known for its bright caps and legs. The cap can be of various colors, "
                       "including red, orange and yellow, with white spots or flakes. The leg is usually white and has a ring,"
                       "and the base expands and forms a volva. Fly agarics are often found in deciduous and coniferous forests,"
                       "where they form a symbiotic relationship with trees."
                       "Some types of fly agarics are known to be toxic and can cause stomach upsets,"
                       "hallucinations and even death if consumed raw.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Agaricaceae\n"
                       "Family: Amanita\n"
                       "Genus: Fly Agaric");
    query.addBindValue("Lactarius deliciosus");
    query.addBindValue(true);
    query.addBindValue("Caesar mushroom is an edible mushroom. The cap of the mushroom is bright orange or reddish-orange in color,"
                       "its diameter can reach 15 centimeters. The stem of the mushroom is short and thick, white or cream in color."
                       "Caesar mushroom has a rich spicy aroma and slightly bitter taste. It is often found in conifers and "
                       "mixed forests of Europe, as well as in some regions of North America. It is traditionally collected and eaten in"
                       "cheese, salted, pickled and fried");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("orange-cap-boletus");
    query.addBindValue("Подосиновик");
    query.addBindValue(true);
    query.addBindValue("Подосиновик - один из самых узнаваемых и любимых видов грибов. Его крупная, полусферическая или выпуклая шляпка может "
                       "быть темно-красной, бордовой или буро-оранжевой. Ножка гриба толстая, цилиндрическая, белого или светло-коричневого цвета,"
                       " покрытая светлой сеточкой. Твердая мякоть Подосиновика белая, плотная, с приятным ореховым вкусом и ароматом. "
                       "Этот гриб часто встречается в лиственных и смешанных лесах Северного полушария, образуя микоризу с березами, "
                       "осинами и другими деревьями. Подосиновик высоко ценится в кулинарии и широко используется в жареном, вареном, "
                       "сушеном и маринованном виде.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Болетовые\n"
                       "Род:	Обабок\n"
                       "Вид:	Подосиновик");
    query.addBindValue("Желчный гриб");
    query.addBindValue(false);
    query.addBindValue("Желчный гриб, коварный двойник белого гриба, является ядовитым грибом, который можно отличить "
                       "по его чрезвычайно горькому вкусу, розовато-коричневым трубочкам и порам, белой мякоти,"
                       " которая не меняет цвет при разрезании, и более выраженному сетчатому узору на ножке. Несмотря на то, "
                       "что желчный гриб не смертельно ядовит, его горький вкус делает его несъедобным. Если его случайно съесть, "
                       "это может вызвать тошноту, рвоту и диарею. Важно всегда собирать грибы у опытного грибника и тщательно "
                       "проверять их на наличие признаков ядовитости перед употреблением.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("orange-cap-boletus");
    query.addBindValue("Boletus");
    query.addBindValue(true);
    query.addBindValue("Boletus is one of the most recognizable and favorite types of mushrooms. Its large, hemispherical or convex cap can "
                       "be dark red, burgundy or brown-orange. The stem of the mushroom is thick, cylindrical, white or light brown in color,"
                       "covered with a light mesh. The firm flesh of the Boletus is white, dense, with a pleasant nutty taste and aroma."
                       "This fungus is often found in deciduous and mixed forests of the Northern Hemisphere, forming mycorrhizae with birch trees,"
                       "aspens and other trees. Boletus is highly valued in cooking and is widely used in fried, boiled, "
                       "dried and pickled.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Boletov\n"
                       "Family: Boletaceae\n"
                       "Rod: Obabok\n"
                       "Species: Boletus");
    query.addBindValue("Tylopilus felleus");
    query.addBindValue(false);
    query.addBindValue("The gall mushroom, the cep's insidious counterpart, is a poisonous mushroom that can be distinguished "
                       "by its extremely bitter taste, pinkish-brown tubes and pores, white flesh,"
                       "which does not change color when cut, and a more pronounced mesh pattern on the stem. Despite the fact, "
                       "that the gall mushroom is not fatally poisonous, its bitter taste makes it inedible. If it is accidentally eaten, "
                       "this may cause nausea, vomiting and diarrhea. It is important to always collect mushrooms from an experienced mushroom picker and carefully"
                       "check them for signs of toxicity before consumption.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("pale-toadstool");
    query.addBindValue("Бледная поганка");
    query.addBindValue(false);
    query.addBindValue("Бледная поганка — чрезвычайно ядовитый гриб, известный как самый смертоносный в мире. Его отличительные "
                       "черты включают зеленовато-белый колпачок с белыми пластинками, белый стебель с мешковидным основанием и особый "
                       "«воротничок» в верхней части стебля. При попадании в организм токсины бледной поганки повреждают печень и почки, "
                       "вызывая тяжелые симптомы, такие как рвота, диарея, обезвоживание и, в конечном итоге, смерть. Яд этого гриба "
                       "исключительно силен, и даже небольшое количество может быть смертельным.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Агариковые\n"
                       "Семейство:	Мухоморовые\n"
                       "Род:	Мухомор\n"
                       "Вид:	Бледная поганка");
    query.addBindValue("Березовая сыроежка");
    query.addBindValue(true);
    query.addBindValue("Березовая сыроежка - это распространенный пластинчатый гриб из семейства Сыроежковых, "
                       "часто встречающийся в лиственных лесах под березами. Его шляпка обычно имеет диаметр от 5 до 10 см, "
                       "имеет плоскую или слегка вдавленную форму и окрашена в различные оттенки белого, серого или охристо-желтого цвета. "
                       "Пластинки белые, широкие и приросшие. Мякоть белая и твердая, с мягким, ореховым вкусом и запахом. "
                       "Березовая сыроежка считается условно съедобным грибом, но перед употреблением ее следует тщательно отваривать "
                       "и слить воду, так как в сыром виде она слегка ядовита.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("pale-toadstool");
    query.addBindValue("Pale grebe");
    query.addBindValue(false);
    query.addBindValue("The toadstool is an extremely poisonous mushroom, known as the deadliest in the world. Its distinctive "
                       "features include a greenish-white cap with white plates, a white stem with a sac-like base, and a distinctive"
                       "collar at the top of the stem. When ingested, toadstool toxins damage the liver and kidneys,"
                       "causing severe symptoms such as vomiting, diarrhea, dehydration and ultimately death. The poison of this mushroom"
                       "exceptionally strong, and even a small amount can be fatal.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Agaricaceae\n"
                       "Family: Amanita\n"
                       "Genus: Fly Agaric\n"
                       "Species: Pale grebe");
    query.addBindValue("Russula betularum");
    query.addBindValue(true);
    query.addBindValue("Birch russula is a common lamellar mushroom from the Russula family,"
                       "often found in deciduous forests under birch trees. Its cap usually has a diameter of 5 to 10 cm,"
                       "has a flat or slightly depressed shape and is colored in various shades of white, gray or ocher yellow."
                       "The blades are white, wide and adherent. The flesh is white and firm, with a soft, nutty taste and smell."
                       "Birch russula is considered a conditionally edible mushroom, but before eating it should be thoroughly boiled"
                       "and drain the water, as in its raw form it is slightly poisonous.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("pink-waves");
    query.addBindValue("Розовая волнушка");
    query.addBindValue(true);
    query.addBindValue("Розовая волнушка, также известная как кантарель розовая, представляет собой съедобный пластинчатый "
                       "гриб семейства Гигрофоровые. Она отличается яркой розово-оранжевой или красной шляпкой с характерными "
                       "вдавленными краями. Пластинки под шляпкой такие же розовые или оранжевые. Мякоть белая с приятным фруктовым запахом "
                       "и мягким вкусом. Розовая волнушка растёт в хвойных лесах на песчаных почвах. Она является микоризным грибом, "
                       "образующим взаимовыгодное партнерство с корнями деревьев, обеспечивающим их питательными веществами. "
                       "Этот гриб часто собирают и используют в кулинарии из-за его нежного вкуса и яркой окраски.");
    query.addBindValue("Отдел:	Базидиомицеты"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Руссуловые\n"
                       "Семейство:	Сыроежковые\n"
                       "Род:	Млечник\n"
                       "Вид:	Волнушка розовая");
    query.addBindValue("Млечник шиповатый");
    query.addBindValue(false);
    query.addBindValue("Млечник шиповатый — смертельно ядовитый гриб из семейства Сыроежковые. Его шляпка диаметром 5-15 см "
                       "имеет концентрические круги, окрашена в красно-коричневый или оранжево-коричневый цвет. Ножка гладкая,"
                       " ровная, высотой 4-10 см и толщиной 1-2 см. При повреждении выделяет красноватое млечко, которое при "
                       "контакте с кожей вызывает сильное раздражение, покраснение и даже волдыри. Млечник шиповатый часто "
                       "встречается в смешанных и хвойных лесах, образуя микоризу с елями, соснами и березами. Его ядовитые свойства "
                       "обусловлены содержанием лактариовиолина и лакторофиолина, которые повреждают слизистые оболочки и вызывают "
                       "желудочно-кишечные расстройства, в том числе тошноту, рвоту, диарею и боль в животе. Употребление даже "
                       "небольшого количества этого гриба может привести к серьезным проблемам со здоровьем и даже смерти.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("pink-waves");
    query.addBindValue("Pink Wave");
    query.addBindValue(true);
    query.addBindValue("The pink volumi, also known as the pink cantarelle, is an edible plate-shaped "
                       "a mushroom of the Hygrophoraceae family. It is distinguished by a bright pink-orange or red cap with characteristic"
                       "pressed edges. The plates under the cap are the same pink or orange. The pulp is white with a pleasant fruity smell"
                       "and mild taste. Pink volna grows in coniferous forests on sandy soils. It is a mycorrhizal fungus,"
                       "forming a mutually beneficial partnership with the roots of the trees, providing them with nutrients."
                       "This mushroom is often collected and used in cooking because of its delicate flavor and bright color.");
    query.addBindValue("Department: Basidiomycetes"
                       "Class: Agaricomycetes\n"
                       "Order: Russolov\n"
                       "Family: Russula\n"
                       "Genus: Milky\n"
                       "View: Pink Volnushka");
    query.addBindValue("Lactarius torminosus");
    query.addBindValue(false);
    query.addBindValue("The prickly milkweed is a deadly poisonous mushroom from the Russula family. Its cap is 5-15 cm in diameter "
                       "has concentric circles, colored red-brown or orange-brown. The leg is smooth,"
                       "smooth, 4-10 cm high and 1-2 cm thick. When damaged, it produces a reddish milky, which when "
                       "contact with skin causes severe irritation, redness and even blisters. Milk spinosum often "
                       "found in mixed and coniferous forests, forming mycorrhiza with spruce, pine and birch trees. Its poisonous properties"
                       "are caused by the content of lactarioviolin and lactorophiolin, which damage the mucous membranes and cause"
                       "gastrointestinal disorders, including nausea, vomiting, diarrhea and abdominal pain. Use even "
                       "small amounts of this mushroom can cause serious health problems and even death.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("rough");
    query.addBindValue("Подберёзовик");
    query.addBindValue(true);
    query.addBindValue("Подберезовик — съедобный гриб из семейства Болетовые. Его шляпка диаметром 5-15 см имеет выпуклую, "
                       "а затем подушковидную форму, окрашена в коричневый, темно-коричневый или почти черный цвет. "
                       "Поверхность шляпки гладкая или слегка бархатистая. Ножка высотой 5-15 см и толщиной 1-3 см, цилиндрической формы, "
                       "белого или светло-коричневого цвета. При надавливании на ножку или шляпку выделяется белое млечко, которое на "
                       "воздухе не меняет цвет. Подберезовик растет в симбиозе с березами, образуя микоризу. Его "
                       "можно встретить в лиственных и смешанных лесах с июля по октябрь. Гриб отличается приятным вкусом и ароматом,"
                       " используется в кулинарии для приготовления супов, жарки, маринования и соления."
                       " Однако перед употреблением рекомендуется отварить грибы в течение 15-20 минут, чтобы удалить горечь и возможные токсины.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Болетовые\n"
                       "Семейство:	Болетовые\n"
                       "Род:	Обабок\n"
                       "Вид:	Подберёзовик обыкновенный");
    query.addBindValue("Желчный гриб");
    query.addBindValue(false);
    query.addBindValue("Желчный гриб, коварный двойник белого гриба, является ядовитым грибом, который можно отличить "
                       "по его чрезвычайно горькому вкусу, розовато-коричневым трубочкам и порам, белой мякоти,"
                       " которая не меняет цвет при разрезании, и более выраженному сетчатому узору на ножке. Несмотря на то, "
                       "что желчный гриб не смертельно ядовит, его горький вкус делает его несъедобным. Если его случайно съесть, "
                       "это может вызвать тошноту, рвоту и диарею. Важно всегда собирать грибы у опытного грибника и тщательно "
                       "проверять их на наличие признаков ядовитости перед употреблением.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("rough");
    query.addBindValue("Boletus");
    query.addBindValue(true);
    query.addBindValue("Boletus is an edible mushroom from the Boletaceae family. Its cap, 5-15 cm in diameter, has a convex, "
                       "and then cushion-shaped, colored brown, dark brown or almost black."
                       "The surface of the cap is smooth or slightly velvety. The stem is 5-15 cm high and 1-3 cm thick, cylindrical in shape,"
                       "white or light brown in color. When you press on the stem or cap, a white milky material is released, which "
                       "does not change color in the air. The boletus grows in symbiosis with birch trees, forming mycorrhiza. Its "
                       "can be found in deciduous and mixed forests from July to October. The mushroom has a pleasant taste and aroma,"
                       "used in cooking for making soups, frying, pickling and pickling."
                       "However, before eating, it is recommended to boil the mushrooms for 15-20 minutes to remove bitterness and possible toxins.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Boletov\n"
                       "Family: Boletaceae\n"
                       "Rod: Obabok\n"
                       "Species: Common boletus");
    query.addBindValue("Ball mushroom");
    query.addBindValue(false);
    query.addBindValue("The gall mushroom, the cep's insidious counterpart, is a poisonous mushroom that can be distinguished "
                       "by its extremely bitter taste, pinkish-brown tubes and pores, white flesh,"
                       "which does not change color when cut, and a more pronounced mesh pattern on the stem. Despite the fact, "
                       "that the gall mushroom is not fatally poisonous, its bitter taste makes it inedible. If it is accidentally eaten, "
                       "this may cause nausea, vomiting and diarrhea. It is important to always collect mushrooms from an experienced mushroom picker and carefully"
                       "check them for signs of toxicity before consumption.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }


    query.prepare("INSERT INTO Rus (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("valui");
    query.addBindValue("Валуй");
    query.addBindValue(true);
    query.addBindValue("Валуй (Russula foetens) — съедобный гриб семейства Сыроежковые. Шляпка диаметром 5–15 см, "
                       "сначала выпуклая, затем распростертая, с вдавленным центром, окрашена в красновато-оранжевый,"
                       " фиолетово-бурый, желтовато-бурый или серо-зеленый цвет. Края шляпки ровные или волнистые. "
                       "Кожица с шляпки легко снимается. Ножка высотой 5–10 см, цилиндрической формы, иногда расширенная у"
                       " основания, белого, кремового или светло-оранжевого цвета. Мякоть белая, плотная, со своеобразным "
                       "фруктовым запахом и горьковатым вкусом. Валуй растет в хвойных и смешанных лесах с июня по сентябрь,"
                       " образуя микоризу с хвойными деревьями. Гриб условно съедобен, перед употреблением его необходимо "
                       "отварить в течение 15–20 минут для удаления горечи.");
    query.addBindValue("Отдел:	Базидиомицеты\n"
                       "Класс:	Агарикомицеты\n"
                       "Порядок:	Руссуловые\n"
                       "Семейство:	Сыроежковые\n"
                       "Род:	Сыроежка\n"
                       "Вид:	Валуй");
    query.addBindValue("Ложный валуй");
    query.addBindValue(false);
    query.addBindValue("В тенистом лесу возвышался исполинский Ложный валуй, его раскидистые листья возвышались ввысь, "
                       "как гигантское зонтообразное создание. Его ствол был покрыт толстой корой, испещрённой бороздами времени, "
                       "свидетельствующими о его почтенном возрасте. Под широкой кроной простиралась густая ковровая трава, превращая "
                       "окрестности в изумрудный рай. Птицы летали вокруг, их пение наполняло воздух мелодичными трелями, сливаясь "
                       "с шелестом ветра, проходящего сквозь пышную листву. Этот величественный Ложный валуй стоял здесь веками, "
                       "невозмутимый свидетель бесчисленных событий, происходивших в лесу. Это было святилище природы, где мир "
                       "и спокойствие царили неоспоримо.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    query.prepare("INSERT INTO Eng (English_Name, Name, Edeble, Description, Description2, Lie_Name, Lie_Edeble, Lie_Description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("valui");
    query.addBindValue("Valui");
    query.addBindValue(true);
    query.addBindValue("Valui (Russula foetens) is an edible mushroom of the Russula family. The cap is 5–15 cm in diameter, "
                       "at first convex, then prostrate, with a depressed center, colored reddish-orange,"
                       "violet-brown, yellowish-brown or gray-green color. The edges of the cap are smooth or wavy."
                       "The skin of the cap is easily removed. The stem is 5–10 cm high, cylindrical in shape, sometimes widened"
                       "base, white, cream or light orange in color. The pulp is white, dense, with a peculiar "
                       "fruity smell and bitter taste. Valuy grows in coniferous and mixed forests from June to September,"
                       "forming mycorrhiza with coniferous trees. The mushroom is conditionally edible, before consuming it must be "
                       "boil for 15–20 minutes to remove bitterness.");
    query.addBindValue("Department: Basidiomycetes\n"
                       "Class: Agaricomycetes\n"
                       "Order: Russolov\n"
                       "Family: Russula\n"
                       "Genus: Russula\n"
                       "View: Valuy");
    query.addBindValue("False valui");
    query.addBindValue(false);
    query.addBindValue("In the shady forest stood the gigantic False Value, its spreading leaves towering high,"
                       "like a giant umbrella-shaped creature. Its trunk was covered with thick bark, riddled with furrows of time,"
                       "testifying to his venerable age. A thick carpet of grass stretched under the wide crown, turning "
                       "the surroundings into an emerald paradise. Birds flew around, their singing filled the air with melodic trills, merging"
                       "with the rustle of the wind passing through the lush foliage. This majestic False Valuy has stood here for centuries,"
                       "a calm witness to the countless events that took place in the forest. It was a sanctuary of nature, where peace"
                       "and calm reigned undeniably.");
    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }
    qDebug() << "Data inserted successfully.";
}



