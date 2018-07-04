// Copyright (C) 2018 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma once

#include "ui_snapshot-page.h"

#include "android/snapshot/proto/snapshot.pb.h"

#include <QDateTime>
#include <QSemaphore>
#include <QString>
#include <QWidget>
#include <memory>

class SnapshotPage : public QWidget
{
    Q_OBJECT

public:
    explicit SnapshotPage(QWidget* parent = 0, bool standAlone = false);

public slots:
    void slot_snapshotLoadCompleted(int status, const QString& name);
    void slot_snapshotSaveCompleted(int status, const QString& name);
    void slot_snapshotDeleteCompleted();
    void slot_askAboutInvalidSnapshots(QStringList names);

signals:
    void loadCompleted(int status, const QString& name);
    void saveCompleted(int status, const QString& name);
    void deleteCompleted();
    void askAboutInvalidSnapshots(QStringList names);

private slots:
    void on_defaultSnapshotDisplay_itemSelectionChanged();
    void on_deleteInvalidSnapshots_currentIndexChanged(int index);
    void on_deleteSnapshot_clicked();
    void on_editSnapshot_clicked();
    void on_enlargeInfoButton_clicked();
    void on_loadQuickBootNowButton_clicked();
    void on_loadSnapshot_clicked();
    void on_reduceInfoButton_clicked();
    void on_saveQuickBootNowButton_clicked();
    void on_saveQuickBootOnExit_currentIndexChanged(int index);
    void on_snapshotDisplay_itemSelectionChanged();
    void on_tabWidget_currentChanged(int index);
    void on_takeSnapshotButton_clicked();

private:

    enum class SelectionStatus {
        NoSelection, Valid, Invalid
    };

    class WidgetSnapshotItem;

    static constexpr int COLUMN_ICON = 0;
    static constexpr int COLUMN_NAME = 1;

    void    showEvent(QShowEvent* ee) override;

    void    populateSnapshotDisplay();
    void    populateSnapshotDisplay_flat();

    QString formattedSize(qint64 theSize);
    QString getDescription(const QString& fileName);

    void    adjustIcons(QTreeWidget* theDisplayList);
    void    closeEvent(QCloseEvent* closeEvent);
    void    deleteSnapshot(const WidgetSnapshotItem* theItem);
    void    disableActions();
    void    editSnapshot(const WidgetSnapshotItem* theItem);
    QString elideSnapshotInfo(QString fullString);
    void    enableActions();
    void    getOutputFileName();
    void    highlightItemWithFilename(const QString& fileName);
    void    showPreviewImage(const QString& snapshotName, SelectionStatus itemStatus);
    void    updateAfterSelectionChanged();
    void    writeLogicalNameToProtobuf(const QString& fileName, const QString& logicalName);
    void    writeParentToProtobuf(const QString& fileName, const QString& parentName);
    void    writeLogicalNameAndParentToProtobuf(const QString& fileName,
                                                const QString& logicalName,
                                                const QString& parentName);

    const WidgetSnapshotItem* getSelectedSnapshot();

    bool mIsStandAlone = false;
    bool mAllowEdit = false;
    bool mAllowLoad = false;
    bool mAllowTake = true;
    bool mAllowDelete = false;
    bool mMadeSelection = false;
    bool mInfoWindowIsBig = false;
    bool mDidInitialInvalidCheck = false;

    qreal mSmallInfoRegionSize = 0.0; // The size that fits in the small snashot-info region

    QRect mInfoPanelSmallGeo; // Location and size of the info panel when it is small
    QRect mInfoPanelLargeGeo; // Location and size of the info panel when it is big

    QString mOutputFileName = ""; // Used to provide our output in stand-alone mode

    std::unique_ptr<emulator_snapshot::Snapshot> loadProtobuf(const QString& fileName);

    void writeProtobuf(const QString& fileName,
                       const std::unique_ptr<emulator_snapshot::Snapshot>& protobuf);

    std::unique_ptr<Ui::SnapshotPage> mUi;

    QGraphicsScene mPreviewScene;     // Used to render the preview screenshot
};