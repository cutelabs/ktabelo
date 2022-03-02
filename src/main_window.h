/*
    SPDX-FileCopyrightText: 2022 naracanto https://naracanto.github.io

    SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <KXmlGuiWindow>


class MainWindow : public KXmlGuiWindow
{
public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    void setupActions();
};

#endif // MAIN_WINDOW_H
