#ifndef _sun_swing_FilePane$DetailsTableRowSorter_h_
#define _sun_swing_FilePane$DetailsTableRowSorter_h_
//$ class sun.swing.FilePane$DetailsTableRowSorter
//$ extends javax.swing.table.TableRowSorter

#include <java/lang/Array.h>
#include <javax/swing/table/TableRowSorter.h>

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

class FilePane$DetailsTableRowSorter : public ::javax::swing::table::TableRowSorter {
	$class(FilePane$DetailsTableRowSorter, $NO_CLASS_INIT, ::javax::swing::table::TableRowSorter)
public:
	FilePane$DetailsTableRowSorter();
	void init$(::sun::swing::FilePane* this$0);
	static void access$001(::sun::swing::FilePane$DetailsTableRowSorter* x0);
	virtual void modelStructureChanged() override;
	virtual void sort() override;
	virtual void updateComparators($Array<::sun::awt::shell::ShellFolderColumnInfo>* columns);
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableRowSorter_h_