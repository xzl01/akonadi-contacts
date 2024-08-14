/*
    This file is part of Contact Editor.

    SPDX-FileCopyrightText: 2016-2022 Laurent Montel <montel@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#pragma once

#include <QObject>

class ContactSelectTypeComboboxTest : public QObject
{
    Q_OBJECT
public:
    explicit ContactSelectTypeComboboxTest(QObject *parent = nullptr);
    ~ContactSelectTypeComboboxTest() override;
private Q_SLOTS:
    void shouldHaveDefaultValue();
};
