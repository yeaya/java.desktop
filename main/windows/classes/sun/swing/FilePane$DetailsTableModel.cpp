#include <sun/swing/FilePane$DetailsTableModel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/Runnable.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DelayedSelectionUpdater.h>
#include <sun/swing/FilePane$DetailsTableModel$1.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ERROR_MESSAGE

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DelayedSelectionUpdater = ::sun::swing::FilePane$DelayedSelectionUpdater;
using $FilePane$DetailsTableModel$1 = ::sun::swing::FilePane$DetailsTableModel$1;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableModel_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableModel, this$0)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(FilePane$DetailsTableModel, chooser)},
	{"directoryModel", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PRIVATE | $FINAL, $field(FilePane$DetailsTableModel, directoryModel)},
	{"columns", "[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, 0, $field(FilePane$DetailsTableModel, columns)},
	{"columnMap", "[I", nullptr, 0, $field(FilePane$DetailsTableModel, columnMap)},
	{}
};

$MethodInfo _FilePane$DetailsTableModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(FilePane$DetailsTableModel::*)($FilePane*,$JFileChooser*)>(&FilePane$DetailsTableModel::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumns", "()[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC},
	{"getFileColumnValue", "(Ljava/io/File;I)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(FilePane$DetailsTableModel::*)($File*,int32_t)>(&FilePane$DetailsTableModel::getFileColumnValue))},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"restoreSortKeys", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;)V", $PRIVATE, $method(static_cast<void(FilePane$DetailsTableModel::*)($List*)>(&FilePane$DetailsTableModel::restoreSortKeys))},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateColumnInfo", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _FilePane$DetailsTableModel_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableModel", "sun.swing.FilePane", "DetailsTableModel", 0},
	{"sun.swing.FilePane$DetailsTableModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$DetailsTableModel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableModel",
	"javax.swing.table.AbstractTableModel",
	"javax.swing.event.ListDataListener",
	_FilePane$DetailsTableModel_FieldInfo_,
	_FilePane$DetailsTableModel_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$DetailsTableModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableModel($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableModel));
}

int32_t FilePane$DetailsTableModel::hashCode() {
	 return this->$AbstractTableModel::hashCode();
}

bool FilePane$DetailsTableModel::equals(Object$* arg0) {
	 return this->$AbstractTableModel::equals(arg0);
}

$Object* FilePane$DetailsTableModel::clone() {
	 return this->$AbstractTableModel::clone();
}

$String* FilePane$DetailsTableModel::toString() {
	 return this->$AbstractTableModel::toString();
}

void FilePane$DetailsTableModel::finalize() {
	this->$AbstractTableModel::finalize();
}

void FilePane$DetailsTableModel::init$($FilePane* this$0, $JFileChooser* fc) {
	$set(this, this$0, this$0);
	$AbstractTableModel::init$();
	$set(this, chooser, fc);
	$set(this, directoryModel, this$0->getModel());
	$nc(this->directoryModel)->addListDataListener(this);
	updateColumnInfo();
}

void FilePane$DetailsTableModel::updateColumnInfo() {
	$useLocalCurrentObjectStackCache();
	$var($File, dir, $nc(this->chooser)->getCurrentDirectory());
	if (dir != nullptr && $FilePane::usesShellFolder(this->chooser)) {
		try {
			$assign(dir, $ShellFolder::getShellFolder(dir));
		} catch ($FileNotFoundException& e) {
		}
	}
	$var($ShellFolderColumnInfoArray, allColumns, $ShellFolder::getFolderColumns(dir));
	$var($ArrayList, visibleColumns, $new($ArrayList));
	$set(this, columnMap, $new($ints, $nc(allColumns)->length));
	for (int32_t i = 0; i < allColumns->length; ++i) {
		$var($ShellFolderColumnInfo, column, allColumns->get(i));
		if ($nc(column)->isVisible()) {
			$nc(this->columnMap)->set(visibleColumns->size(), i);
			visibleColumns->add(column);
		}
	}
	$set(this, columns, $new($ShellFolderColumnInfoArray, visibleColumns->size()));
	visibleColumns->toArray(this->columns);
	$set(this, columnMap, $Arrays::copyOf(this->columnMap, $nc(this->columns)->length));
	$var($List, sortKeys, (this->this$0->rowSorter == nullptr) ? ($List*)nullptr : $nc(this->this$0->rowSorter)->getSortKeys());
	fireTableStructureChanged();
	restoreSortKeys(sortKeys);
}

void FilePane$DetailsTableModel::restoreSortKeys($List* sortKeys$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, sortKeys, sortKeys$renamed);
	if (sortKeys != nullptr) {
		for (int32_t i = 0; i < $nc(sortKeys)->size(); ++i) {
			$var($RowSorter$SortKey, sortKey, $cast($RowSorter$SortKey, sortKeys->get(i)));
			if ($nc(sortKey)->getColumn() >= $nc(this->columns)->length) {
				$assign(sortKeys, nullptr);
				break;
			}
		}
		if (sortKeys != nullptr) {
			$nc(this->this$0->rowSorter)->setSortKeys(sortKeys);
		}
	}
}

int32_t FilePane$DetailsTableModel::getRowCount() {
	return $nc(this->directoryModel)->getSize();
}

int32_t FilePane$DetailsTableModel::getColumnCount() {
	return $nc(this->columns)->length;
}

$Object* FilePane$DetailsTableModel::getValueAt(int32_t row, int32_t col) {
	return $of(getFileColumnValue($cast($File, $($nc(this->directoryModel)->getElementAt(row))), col));
}

$Object* FilePane$DetailsTableModel::getFileColumnValue($File* f, int32_t col) {
	return $of((col == 0) ? $of(f) : $ShellFolder::getFolderColumnValue(f, $nc(this->columnMap)->get(col)));
}

void FilePane$DetailsTableModel::setValueAt(Object$* value, int32_t row, int32_t col) {
	$useLocalCurrentObjectStackCache();
	if (col == 0) {
		$var($JFileChooser, chooser, this->this$0->getFileChooser());
		$var($File, f, $cast($File, getValueAt(row, col)));
		if (f != nullptr) {
			$var($String, oldDisplayName, $nc(chooser)->getName(f));
			$var($String, oldFileName, f->getName());
			$var($String, newDisplayName, $nc(($cast($String, value)))->trim());
			$var($String, newFileName, nullptr);
			if (!newDisplayName->equals(oldDisplayName)) {
				$assign(newFileName, newDisplayName);
				int32_t i1 = $nc(oldFileName)->length();
				int32_t i2 = $nc(oldDisplayName)->length();
				if (i1 > i2 && oldFileName->charAt(i2) == u'.') {
					$assign(newFileName, $str({newDisplayName, $(oldFileName->substring(i2))}));
				}
				$var($FileSystemView, fsv, chooser->getFileSystemView());
				$var($File, f2, $nc(fsv)->createFileObject($(f->getParentFile()), newFileName));
				if ($nc(f2)->exists()) {
					$JOptionPane::showMessageDialog(chooser, $($MessageFormat::format(this->this$0->renameErrorFileExistsText, $$new($ObjectArray, {$of(oldFileName)}))), this->this$0->renameErrorTitleText, $JOptionPane::ERROR_MESSAGE);
				} else if ($nc(this->directoryModel)->renameFile(f, f2)) {
					if (fsv->isParent($(chooser->getCurrentDirectory()), f2)) {
						$SwingUtilities::invokeLater($$new($FilePane$DetailsTableModel$1, this, chooser, f2));
					} else {
					}
				} else {
					$JOptionPane::showMessageDialog(chooser, $($MessageFormat::format(this->this$0->renameErrorText, $$new($ObjectArray, {$of(oldFileName)}))), this->this$0->renameErrorTitleText, $JOptionPane::ERROR_MESSAGE);
				}
			}
		}
	}
}

bool FilePane$DetailsTableModel::isCellEditable(int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($File, currentDirectory, $nc($(this->this$0->getFileChooser()))->getCurrentDirectory());
	return (!this->this$0->readOnly && column == 0 && this->this$0->canWrite(currentDirectory));
}

void FilePane$DetailsTableModel::contentsChanged($ListDataEvent* e) {
	$new($FilePane$DelayedSelectionUpdater, this->this$0);
	fireTableDataChanged();
}

void FilePane$DetailsTableModel::intervalAdded($ListDataEvent* e) {
	int32_t i0 = $nc(e)->getIndex0();
	int32_t i1 = e->getIndex1();
	if (i0 == i1) {
		$var($File, file, $cast($File, $nc(this->directoryModel)->getElementAt(i0)));
		if ($nc(file)->equals(this->this$0->newFolderFile)) {
			$new($FilePane$DelayedSelectionUpdater, this->this$0, file);
			$set(this->this$0, newFolderFile, nullptr);
		}
	}
	int32_t var$0 = e->getIndex0();
	fireTableRowsInserted(var$0, e->getIndex1());
}

void FilePane$DetailsTableModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireTableRowsDeleted(var$0, e->getIndex1());
}

$ShellFolderColumnInfoArray* FilePane$DetailsTableModel::getColumns() {
	return this->columns;
}

FilePane$DetailsTableModel::FilePane$DetailsTableModel() {
}

$Class* FilePane$DetailsTableModel::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableModel, name, initialize, &_FilePane$DetailsTableModel_ClassInfo_, allocate$FilePane$DetailsTableModel);
	return class$;
}

$Class* FilePane$DetailsTableModel::class$ = nullptr;

	} // swing
} // sun