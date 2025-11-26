#ifndef _sun_swing_FilePane$4_h_
#define _sun_swing_FilePane$4_h_
//$ class sun.swing.FilePane$4
//$ extends javax.swing.JList

#include <javax/swing/JList.h>

namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Position$Bias;
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

class FilePane$4 : public ::javax::swing::JList {
	$class(FilePane$4, $NO_CLASS_INIT, ::javax::swing::JList)
public:
	FilePane$4();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::JFileChooser* val$fileChooser);
	virtual int32_t getNextMatch($String* prefix, int32_t startIndex, ::javax::swing::text::Position$Bias* bias) override;
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
	using ::javax::swing::JList::list;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JFileChooser* val$fileChooser = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$4_h_