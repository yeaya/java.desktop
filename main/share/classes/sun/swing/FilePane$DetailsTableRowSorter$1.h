#ifndef _sun_swing_FilePane$DetailsTableRowSorter$1_h_
#define _sun_swing_FilePane$DetailsTableRowSorter$1_h_
//$ class sun.swing.FilePane$DetailsTableRowSorter$1
//$ extends javax.swing.event.TableModelListener

#include <javax/swing/event/TableModelListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TableModelEvent;
		}
	}
}
namespace sun {
	namespace swing {
		class FilePane;
		class FilePane$DetailsTableRowSorter;
	}
}

namespace sun {
	namespace swing {

class FilePane$DetailsTableRowSorter$1 : public ::javax::swing::event::TableModelListener {
	$class(FilePane$DetailsTableRowSorter$1, $NO_CLASS_INIT, ::javax::swing::event::TableModelListener)
public:
	FilePane$DetailsTableRowSorter$1();
	void init$(::sun::swing::FilePane$DetailsTableRowSorter* this$1, ::sun::swing::FilePane* val$this$0);
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) override;
	::sun::swing::FilePane$DetailsTableRowSorter* this$1 = nullptr;
	::sun::swing::FilePane* val$this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableRowSorter$1_h_