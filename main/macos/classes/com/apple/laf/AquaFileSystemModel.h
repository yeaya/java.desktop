#ifndef _com_apple_laf_AquaFileSystemModel_h_
#define _com_apple_laf_AquaFileSystemModel_h_
//$ class com.apple.laf.AquaFileSystemModel
//$ extends javax.swing.table.AbstractTableModel
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

#pragma push_macro("SORT_ASCENDING_CHANGED")
#undef SORT_ASCENDING_CHANGED
#pragma push_macro("SORT_BY_CHANGED")
#undef SORT_BY_CHANGED

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel$FilesLoader;
			class AquaFileSystemModel$QuickSortDates;
			class AquaFileSystemModel$QuickSortNames;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel : public ::javax::swing::table::AbstractTableModel, public ::java::beans::PropertyChangeListener {
	$class(AquaFileSystemModel, 0, ::javax::swing::table::AbstractTableModel, ::java::beans::PropertyChangeListener)
public:
	AquaFileSystemModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFileChooser* filechooser, ::javax::swing::JTable* filelist, $StringArray* colNames);
	virtual bool contains(::java::io::File* o);
	virtual $Class* getColumnClass(int32_t col) override;
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t col) override;
	virtual ::java::util::Vector* getDirectories();
	virtual $Object* getElementAt(int32_t row);
	virtual ::java::util::Vector* getFiles();
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual int32_t indexOf(::java::io::File* o);
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e);
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e);
	virtual void invalidateFileCache();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void runWhenDone(::java::lang::Runnable* runnable);
	virtual void sort(::java::util::Vector* v);
	virtual $String* toString() override;
	virtual void updateSelectionMode();
	virtual void validateFileCache();
	::javax::swing::JTable* fFileList = nullptr;
	::com::apple::laf::AquaFileSystemModel$FilesLoader* filesLoader = nullptr;
	::java::util::Vector* files = nullptr;
	::javax::swing::JFileChooser* filechooser = nullptr;
	::java::util::Vector* fileCache = nullptr;
	$Object* fileCacheLock = nullptr;
	::java::util::Vector* directories = nullptr;
	int32_t fetchID = 0;
	$booleans* fSortAscending = nullptr;
	bool fSortNames = false;
	$StringArray* fColumnNames = nullptr;
	static $String* SORT_BY_CHANGED;
	static $String* SORT_ASCENDING_CHANGED;
	::com::apple::laf::AquaFileSystemModel$QuickSortNames* sSortNames = nullptr;
	::com::apple::laf::AquaFileSystemModel$QuickSortDates* sSortDates = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("SORT_ASCENDING_CHANGED")
#pragma pop_macro("SORT_BY_CHANGED")

#endif // _com_apple_laf_AquaFileSystemModel_h_