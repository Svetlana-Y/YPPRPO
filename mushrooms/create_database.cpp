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
    query.addBindValue("chaterelles");
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
    query.addBindValue("chaterelles");
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
    query.addBindValue("black_milk_mushrooms");
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
    query.addBindValue("black_milk_mushrooms");
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
    query.addBindValue("white_milk_mushrooms");
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
    query.addBindValue("white_milk_mushrooms");
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
    qDebug() << "Data inserted successfully.";
}



