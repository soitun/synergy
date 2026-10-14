/*
 * Synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2026 Synergy App Ltd
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

#include "website_urls.h"

#include "TestSettings.h"
#include "constants.h"
#include "synergy/build_config.h"

namespace synergy::gui {

QString apiUrl()
{
  if (const auto testBase = TestSettings::instance().apiUrlBase(); !testBase.isEmpty()) {
    return testBase;
  }
  return QString::fromUtf8(kIsDevBuild ? kUrlApiStaging : kUrlApi);
}

QString websiteUrl()
{
  if (const auto testBase = TestSettings::instance().websiteUrlBase(); !testBase.isEmpty()) {
    return testBase;
  }
  return QString::fromUtf8(kIsDevBuild ? kUrlWebsiteStaging : kUrlWebsite);
}

QString contactUrl()
{
  return QStringLiteral("%1/contact?%2").arg(websiteUrl(), kUrlSourceQuery);
}

QString accountUrl()
{
  return QStringLiteral("%1/account?%2").arg(websiteUrl(), kUrlSourceQuery);
}

QString purchaseUrl()
{
  return QStringLiteral("%1/purchase?%2").arg(websiteUrl(), kUrlSourceQuery);
}

QString eulaUrl()
{
  return QStringLiteral("%1/eula").arg(websiteUrl());
}

} // namespace synergy::gui
