/*
 * Synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2016 - 2026 Synergy App Ltd
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "CancelActivationDialog.h"

#include "synergy/gui/website_urls.h"
#include "ui_CancelActivationDialog.h"

#include "QPushButton"

using namespace synergy::gui;

CancelActivationDialog::CancelActivationDialog(QWidget *parent) : QDialog(parent), ui(new Ui::CancelActivationDialog)
{
  ui->setupUi(this);

  ui->label->setText(
      tr(R"(<p>You'll need to purchase a license to use Synergy.</p>)"
         R"(<p><a href="%1"><span style="text-decoration: underline; color:#007af4;">Contact us</span></a></p>)"
         R"(<p>The application will now exit.</p>)")
          .arg(contactUrl())
  );

  ui->m_pButtonBox->button(QDialogButtonBox::Cancel)->setText("&Back");
  ui->m_pButtonBox->button(QDialogButtonBox::Ok)->setText("&Exit");
}

CancelActivationDialog::~CancelActivationDialog()
{
  delete ui;
}
