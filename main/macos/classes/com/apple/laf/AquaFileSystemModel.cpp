#include <com/apple/laf/AquaFileSystemModel.h>

#include <com/apple/laf/AquaFileSystemModel$FilesLoader.h>
#include <com/apple/laf/AquaFileSystemModel$QuickSortDates.h>
#include <com/apple/laf/AquaFileSystemModel$QuickSortNames.h>
#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/File.h>
#include <java/lang/Runnable.h>
#include <java/util/Date.h>
#include <java/util/Vector.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_HIDING_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef FILE_VIEW_CHANGED_PROPERTY
#undef MULTIPLE_INTERVAL_SELECTION
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef SAVE_DIALOG
#undef SINGLE_SELECTION
#undef SORT_ASCENDING_CHANGED
#undef SORT_BY_CHANGED

using $AquaFileSystemModel$FilesLoader = ::com::apple::laf::AquaFileSystemModel$FilesLoader;
using $AquaFileSystemModel$QuickSortDates = ::com::apple::laf::AquaFileSystemModel$QuickSortDates;
using $AquaFileSystemModel$QuickSortNames = ::com::apple::laf::AquaFileSystemModel$QuickSortNames;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Date = ::java::util::Date;
using $Vector = ::java::util::Vector;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel_FieldInfo_[] = {
	{"fFileList", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel, fFileList)},
	{"filesLoader", "Lcom/apple/laf/AquaFileSystemModel$FilesLoader;", nullptr, $PRIVATE, $field(AquaFileSystemModel, filesLoader)},
	{"files", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", $PRIVATE, $field(AquaFileSystemModel, files)},
	{"filechooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(AquaFileSystemModel, filechooser)},
	{"fileCache", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$SortableFile;>;", 0, $field(AquaFileSystemModel, fileCache)},
	{"fileCacheLock", "Ljava/lang/Object;", nullptr, 0, $field(AquaFileSystemModel, fileCacheLock)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(AquaFileSystemModel, directories)},
	{"fetchID", "I", nullptr, 0, $field(AquaFileSystemModel, fetchID)},
	{"fSortAscending", "[Z", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel, fSortAscending)},
	{"fSortNames", "Z", nullptr, $PRIVATE, $field(AquaFileSystemModel, fSortNames)},
	{"fColumnNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel, fColumnNames)},
	{"SORT_BY_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AquaFileSystemModel, SORT_BY_CHANGED)},
	{"SORT_ASCENDING_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AquaFileSystemModel, SORT_ASCENDING_CHANGED)},
	{"sSortNames", "Lcom/apple/laf/AquaFileSystemModel$QuickSortNames;", nullptr, $FINAL, $field(AquaFileSystemModel, sSortNames)},
	{"sSortDates", "Lcom/apple/laf/AquaFileSystemModel$QuickSortDates;", nullptr, $FINAL, $field(AquaFileSystemModel, sSortDates)},
	{}
};

$MethodInfo _AquaFileSystemModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFileChooser;Ljavax/swing/JTable;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileSystemModel::*)($JFileChooser*,$JTable*,$StringArray*)>(&AquaFileSystemModel::init$))},
	{"contains", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<+Ljava/lang/Object;>;", $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDirectories", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/io/File;>;", $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFiles", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/io/File;>;", $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"invalidateFileCache", "()V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"runWhenDone", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSelectionMode", "()V", nullptr, 0},
	{"validateFileCache", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileSystemModel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$DoChangeContents", "com.apple.laf.AquaFileSystemModel", "DoChangeContents", 0},
	{"com.apple.laf.AquaFileSystemModel$FilesLoader", "com.apple.laf.AquaFileSystemModel", "FilesLoader", 0},
	{"com.apple.laf.AquaFileSystemModel$SortableFile", "com.apple.laf.AquaFileSystemModel", "SortableFile", 0},
	{"com.apple.laf.AquaFileSystemModel$QuickSortDates", "com.apple.laf.AquaFileSystemModel", "QuickSortDates", 0},
	{"com.apple.laf.AquaFileSystemModel$QuickSortNames", "com.apple.laf.AquaFileSystemModel", "QuickSortNames", 0},
	{"com.apple.laf.AquaFileSystemModel$QuickSort", "com.apple.laf.AquaFileSystemModel", "QuickSort", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileSystemModel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel",
	"javax.swing.table.AbstractTableModel",
	"java.beans.PropertyChangeListener",
	_AquaFileSystemModel_FieldInfo_,
	_AquaFileSystemModel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel$DoChangeContents,com.apple.laf.AquaFileSystemModel$FilesLoader,com.apple.laf.AquaFileSystemModel$SortableFile,com.apple.laf.AquaFileSystemModel$QuickSortDates,com.apple.laf.AquaFileSystemModel$QuickSortNames,com.apple.laf.AquaFileSystemModel$QuickSort"
};

$Object* allocate$AquaFileSystemModel($Class* clazz) {
	return $of($alloc(AquaFileSystemModel));
}

int32_t AquaFileSystemModel::hashCode() {
	 return this->$AbstractTableModel::hashCode();
}

bool AquaFileSystemModel::equals(Object$* arg0) {
	 return this->$AbstractTableModel::equals(arg0);
}

$Object* AquaFileSystemModel::clone() {
	 return this->$AbstractTableModel::clone();
}

$String* AquaFileSystemModel::toString() {
	 return this->$AbstractTableModel::toString();
}

void AquaFileSystemModel::finalize() {
	this->$AbstractTableModel::finalize();
}

$String* AquaFileSystemModel::SORT_BY_CHANGED = nullptr;
$String* AquaFileSystemModel::SORT_ASCENDING_CHANGED = nullptr;

void AquaFileSystemModel::init$($JFileChooser* filechooser, $JTable* filelist, $StringArray* colNames) {
	$AbstractTableModel::init$();
	$set(this, filesLoader, nullptr);
	$set(this, files, nullptr);
	$set(this, filechooser, nullptr);
	$set(this, fileCache, nullptr);
	$set(this, directories, nullptr);
	this->fetchID = 0;
	$set(this, fSortAscending, $new($booleans, {
		true,
		true
	}));
	this->fSortNames = true;
	$set(this, sSortNames, $new($AquaFileSystemModel$QuickSortNames, this));
	$set(this, sSortDates, $new($AquaFileSystemModel$QuickSortDates, this));
	$set(this, fileCacheLock, $new($Object));
	$set(this, filechooser, filechooser);
	$set(this, fFileList, filelist);
	$set(this, fColumnNames, colNames);
	validateFileCache();
	updateSelectionMode();
}

void AquaFileSystemModel::updateSelectionMode() {
	bool var$0 = $nc(this->filechooser)->isMultiSelectionEnabled();
	bool b = var$0 && $nc(this->filechooser)->getDialogType() != $JFileChooser::SAVE_DIALOG;
	$nc(this->fFileList)->setSelectionMode(b ? $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION : $ListSelectionModel::SINGLE_SELECTION);
}

void AquaFileSystemModel::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::DIRECTORY_CHANGED_PROPERTY || prop == $JFileChooser::FILE_VIEW_CHANGED_PROPERTY || prop == $JFileChooser::FILE_FILTER_CHANGED_PROPERTY || prop == $JFileChooser::FILE_HIDING_CHANGED_PROPERTY) {
		invalidateFileCache();
		validateFileCache();
	} else {
		if ($nc(prop)->equals($JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)) {
			updateSelectionMode();
		} else {
			if (prop == $JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY) {
				invalidateFileCache();
				validateFileCache();
			} else if (prop->equals("componentOrientation"_s)) {
				$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
				$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
				if (!$equals(o, e->getOldValue())) {
					$nc(cc)->applyComponentOrientation(o);
				}
				$nc(this->fFileList)->setComponentOrientation(o);
				$nc($($nc($($nc(this->fFileList)->getParent()))->getParent()))->setComponentOrientation(o);
			}
		}
	}
	if (prop == AquaFileSystemModel::SORT_BY_CHANGED) {
		this->fSortNames = ($nc(($cast($Integer, $(e->getNewValue()))))->intValue() == 0);
		invalidateFileCache();
		validateFileCache();
		$nc(this->fFileList)->repaint();
	}
	if (prop == AquaFileSystemModel::SORT_ASCENDING_CHANGED) {
		int32_t sortColumn = (this->fSortNames ? 0 : 1);
		$nc(this->fSortAscending)->set(sortColumn, $nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue());
		invalidateFileCache();
		validateFileCache();
		$nc(this->fFileList)->repaint();
	}
}

void AquaFileSystemModel::invalidateFileCache() {
	$set(this, files, nullptr);
	$set(this, directories, nullptr);
	$synchronized(this->fileCacheLock) {
		if (this->fileCache != nullptr) {
			int32_t lastRow = $nc(this->fileCache)->size();
			$set(this, fileCache, nullptr);
			fireTableRowsDeleted(0, lastRow);
		}
	}
}

$Vector* AquaFileSystemModel::getDirectories() {
	if (this->directories != nullptr) {
		return this->directories;
	}
	return this->directories;
}

$Vector* AquaFileSystemModel::getFiles() {
	$useLocalCurrentObjectStackCache();
	if (this->files != nullptr) {
		return this->files;
	}
	$set(this, files, $new($Vector));
	$set(this, directories, $new($Vector));
	$nc(this->directories)->addElement($($nc($($nc(this->filechooser)->getFileSystemView()))->createFileObject($($nc(this->filechooser)->getCurrentDirectory()), ".."_s)));
	$synchronized(this->fileCacheLock) {
		for (int32_t i = 0; i < $nc(this->fileCache)->size(); ++i) {
			$var($AquaFileSystemModel$SortableFile, sf, $cast($AquaFileSystemModel$SortableFile, $nc(this->fileCache)->elementAt(i)));
			$var($File, f, $nc(sf)->fFile);
			if ($nc(this->filechooser)->isTraversable(f)) {
				$nc(this->directories)->addElement(f);
			} else {
				$nc(this->files)->addElement(f);
			}
		}
	}
	return this->files;
}

void AquaFileSystemModel::runWhenDone($Runnable* runnable) {
	$synchronized(this->fileCacheLock) {
		if (this->filesLoader != nullptr) {
			if ($nc($nc(this->filesLoader)->loadThread)->isAlive()) {
				$nc($nc(this->filesLoader)->queuedTasks)->add(runnable);
				return;
			}
		}
		$SwingUtilities::invokeLater(runnable);
	}
}

void AquaFileSystemModel::validateFileCache() {
	$var($File, currentDirectory, $nc(this->filechooser)->getCurrentDirectory());
	if (currentDirectory == nullptr) {
		invalidateFileCache();
		return;
	}
	if (this->filesLoader != nullptr) {
		$nc($nc(this->filesLoader)->loadThread)->interrupt();
	}
	++this->fetchID;
	invalidateFileCache();
	$synchronized(this->fileCacheLock) {
		$set(this, fileCache, $new($Vector, 50));
	}
	$set(this, filesLoader, $new($AquaFileSystemModel$FilesLoader, this, currentDirectory, this->fetchID));
}

int32_t AquaFileSystemModel::getColumnCount() {
	return 2;
}

$String* AquaFileSystemModel::getColumnName(int32_t col) {
	return $nc(this->fColumnNames)->get(col);
}

$Class* AquaFileSystemModel::getColumnClass(int32_t col) {
	if (col == 0) {
		$load($File);
		return $File::class$;
	}
	$load($Date);
	return $Date::class$;
}

int32_t AquaFileSystemModel::getRowCount() {
	$synchronized(this->fileCacheLock) {
		if (this->fileCache != nullptr) {
			return $nc(this->fileCache)->size();
		}
		return 0;
	}
}

bool AquaFileSystemModel::contains($File* o) {
	$synchronized(this->fileCacheLock) {
		if (this->fileCache != nullptr) {
			return $nc(this->fileCache)->contains($$new($AquaFileSystemModel$SortableFile, this, o));
		}
		return false;
	}
}

int32_t AquaFileSystemModel::indexOf($File* o) {
	$synchronized(this->fileCacheLock) {
		if (this->fileCache != nullptr) {
			bool isAscending = this->fSortNames ? $nc(this->fSortAscending)->get(0) : $nc(this->fSortAscending)->get(1);
			int32_t row = $nc(this->fileCache)->indexOf($$new($AquaFileSystemModel$SortableFile, this, o));
			return isAscending ? row : $nc(this->fileCache)->size() - row - 1;
		}
		return 0;
	}
}

$Object* AquaFileSystemModel::getElementAt(int32_t row) {
	return $of(getValueAt(row, 0));
}

$Object* AquaFileSystemModel::getValueAt(int32_t row, int32_t col) {
	if (row < 0 || col < 0) {
		return $of(nullptr);
	}
	bool isAscending = this->fSortNames ? $nc(this->fSortAscending)->get(0) : $nc(this->fSortAscending)->get(1);
	$synchronized(this->fileCacheLock) {
		if (this->fileCache != nullptr) {
			if (!isAscending) {
				row = $nc(this->fileCache)->size() - row - 1;
			}
			return $of($nc(($cast($AquaFileSystemModel$SortableFile, $($nc(this->fileCache)->elementAt(row)))))->getValueAt(col));
		}
		return $of(nullptr);
	}
}

void AquaFileSystemModel::intervalAdded($ListDataEvent* e) {
}

void AquaFileSystemModel::intervalRemoved($ListDataEvent* e) {
}

void AquaFileSystemModel::sort($Vector* v) {
	if (this->fSortNames) {
		$nc(this->sSortNames)->quickSort(v, 0, $nc(v)->size() - 1);
	} else {
		$nc(this->sSortDates)->quickSort(v, 0, $nc(v)->size() - 1);
	}
}

AquaFileSystemModel::AquaFileSystemModel() {
}

void clinit$AquaFileSystemModel($Class* class$) {
	$assignStatic(AquaFileSystemModel::SORT_BY_CHANGED, "sortByChanged"_s);
	$assignStatic(AquaFileSystemModel::SORT_ASCENDING_CHANGED, "sortAscendingChanged"_s);
}

$Class* AquaFileSystemModel::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel, name, initialize, &_AquaFileSystemModel_ClassInfo_, clinit$AquaFileSystemModel, allocate$AquaFileSystemModel);
	return class$;
}

$Class* AquaFileSystemModel::class$ = nullptr;

		} // laf
	} // apple
} // com