#ifndef _sun_swing_FilePane$SortableListModel_h_
#define _sun_swing_FilePane$SortableListModel_h_
//$ class sun.swing.FilePane$SortableListModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.event.TableModelListener,javax.swing.event.RowSorterListener

#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/RowSorterListener.h>
#include <javax/swing/event/TableModelListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class RowSorterEvent;
			class TableModelEvent;
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

class FilePane$SortableListModel : public ::javax::swing::AbstractListModel, public ::javax::swing::event::TableModelListener, public ::javax::swing::event::RowSorterListener {
	$class(FilePane$SortableListModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::event::TableModelListener, ::javax::swing::event::RowSorterListener)
public:
	FilePane$SortableListModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::FilePane* this$0);
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
	virtual void sorterChanged(::javax::swing::event::RowSorterEvent* e) override;
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) override;
	virtual $String* toString() override;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$SortableListModel_h_