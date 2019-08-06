// Copyright (c) 2012-2019 hors<horsicq@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#ifndef DIALOGPEEXPORTFUNCTION_H
#define DIALOGPEEXPORTFUNCTION_H

#include "dialogpegeneric.h"

namespace Ui
{
class DialogPEExportFunction;
}

class DialogPEExportFunction : public DialogPEGeneric
{
    Q_OBJECT

public:
    explicit DialogPEExportFunction(QWidget *parent);
    ~DialogPEExportFunction();
    void setData(__DIE_OPTIONS *pOptions,PEFile *pefile,int nNumber);

private slots:
    void on_checkBoxReadOnly_stateChanged(int arg1);
    void on_pushButtonOK_clicked();

    bool reload();

    void on_pushButtonCancel_clicked();
    void on_pushButtonApply_clicked();
    void applyEnable();

private:
    Ui::DialogPEExportFunction *ui;

    QLineEditX *lineEditOrdinal;
    QLineEditX *lineEditRVA;
    QLineEditX *lineEditName;

    int nNumber;
};

#endif // DIALOGPEEXPORTFUNCTION_H
