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

#pragma once

#include <QString>

namespace synergy::gui {

/**
 * @brief The root of the license API on the website.
 * @return The test settings override when set, otherwise staging in a development build and
 * production in any other.
 */
QString apiUrl();

/**
 * @brief The website root that links in the GUI open.
 * @return The test settings override when set, otherwise staging in a development build and
 * production in any other.
 */
QString websiteUrl();

/**
 * @brief The contact page on the website.
 */
QString contactUrl();

/**
 * @brief The account page on the website, where a customer manages licenses and activations.
 */
QString accountUrl();

/**
 * @brief The page on the website where a customer buys a license.
 */
QString purchaseUrl();

/**
 * @brief The end user license agreement on the website.
 */
QString eulaUrl();

} // namespace synergy::gui
