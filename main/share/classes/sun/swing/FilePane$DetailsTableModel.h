#ifndef _sun_swing_FilePane$DetailsTableModel_h_
#define _sun_swing_FilePane$DetailsTableModel_h_
//$ class sun.swing.FilePane$DetailsTableModel
//$ extends javax.swing.table.AbstractTableModel
//$ implements javax.swing.event.ListDataListener

#include <java/lang/Array.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/table/AbstractTableModel.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
			}
		}
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class ShellFolderColumnInfo;
		}
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class $export FilePane$DetailsTableModel : public ::javax::swing::table::AbstractTableModel, public ::javax::swing::event::ListDataListener {
	$class(FilePane$DetailsTableModel, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel, ::javax::swing::event::ListDataListener)
public:
	FilePane$DetailsTableModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::JFileChooser* fc);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual int32_t getColumnCount() override;
	virtual $Array<::sun::awt::shell::ShellFolderColumnInfo>* getColumns();
	$Object* getFileColumnValue(::java::io::File* f, int32_t col);
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	virtual bool isCellEditable(int32_t row, int32_t column) override;
	void restoreSortKeys(::java::util::List* sortKeys);
	virtual void setValueAt(Object$* value, int32_t row, int32_t col) override;
	virtual $String* toString() override;
	virtual void updateColumnInfo();
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
	::javax::swing::plaf::basic::BasicDirectoryModel* directoryModel = nullptr;
	$Array<::sun::awt::shell::ShellFolderColumnInfo>* columns = nullptr;
	$ints* columnMap = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableModel_h_