/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef UBBLACKOUTWIDGET_H_
#define UBBLACKOUTWIDGET_H_

#include <QWidget>

class UBBlackoutWidget : public QWidget
{
    Q_OBJECT

    public:
        UBBlackoutWidget(QWidget *parent = 0);
        virtual void mousePressEvent(QMouseEvent *event);
        virtual void keyPressEvent(QKeyEvent *event);

    signals:
        void activity();

    public slots:
        void doActivity();
};


#endif /* UBBLACKOUTWIDGET_H_ */
