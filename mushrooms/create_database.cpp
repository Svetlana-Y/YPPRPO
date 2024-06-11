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

    qDebug() << "Data inserted successfully.";

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

    qDebug() << "Data inserted successfully.";
}
