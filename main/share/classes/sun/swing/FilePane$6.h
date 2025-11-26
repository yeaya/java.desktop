#ifndef _sun_swing_FilePane$6_h_
#define _sun_swing_FilePane$6_h_
//$ class sun.swing.FilePane$6
//$ extends javax.swing.JTable

#include <javax/swing/JTable.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class KeyStroke;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TableModelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
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

class FilePane$6 : public ::javax::swing::JTable {
	$class(FilePane$6, $NO_CLASS_INIT, ::javax::swing::JTable)
public:
	FilePane$6();
	using ::javax::swing::JTable::getToolTipText;
	using ::javax::swing::JTable::contains;
	using ::javax::swing::JTable::enable;
	using ::javax::swing::JTable::getBounds;
	using ::javax::swing::JTable::getSize;
	using ::javax::swing::JTable::getLocation;
	using ::javax::swing::JTable::firePropertyChange;
	using ::javax::swing::JTable::add;
	using ::javax::swing::JTable::getMousePosition;
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::table::TableModel* dm, ::javax::swing::JFileChooser* val$chooser);
	using ::javax::swing::JTable::print;
	using ::javax::swing::JTable::list;
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed) override;
	using ::javax::swing::JTable::setUI;
	using ::javax::swing::JTable::requestFocus;
	using ::javax::swing::JTable::requestFocusInWindow;
	using ::javax::swing::JTable::repaint;
	using ::javax::swing::JTable::remove;
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JFileChooser* val$chooser = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$6_h_