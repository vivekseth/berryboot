#ifndef LOCALEDIALOG_H
#define LOCALEDIALOG_H

/* Berryboot -- welcome dialog
 *
 * Copyright (c) 2012, Floris Bos
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <QDialog>

namespace Ui {
class LocaleDialog;
}
class Installer;
class GreenBorderDialog;

class LocaleDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LocaleDialog(Installer *i, QWidget *parent = 0);
    ~LocaleDialog();
    
protected:
    Ui::LocaleDialog *ui;
    Installer *_i;
    GreenBorderDialog *_gbd;

protected slots:
    void downloadComplete();
    void checkIfNetworkIsUp();
    void checkIfNetworkNeedsDrivers();
    virtual void accept();
    virtual void reject();
private slots:
    void on_keybCombo_currentIndexChanged(const QString &arg1);
};

#endif // LOCALEDIALOG_H
