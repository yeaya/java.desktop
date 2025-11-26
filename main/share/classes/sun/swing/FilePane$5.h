#ifndef _sun_swing_FilePane$5_h_
#define _sun_swing_FilePane$5_h_
//$ class sun.swing.FilePane$5
//$ extends javax.swing.event.ListDataListener

#include <javax/swing/event/ListDataListener.h>

namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
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

class FilePane$5 : public ::javax::swing::event::ListDataListener {
	$class(FilePane$5, $NO_CLASS_INIT, ::javax::swing::event::ListDataListener)
public:
	FilePane$5();
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::JList* val$list);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JList* val$list = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$5_h_