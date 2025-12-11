#ifndef _sun_lwawt_LWListPeer$ScrollableJList_h_
#define _sun_lwawt_LWListPeer$ScrollableJList_h_
//$ class sun.lwawt.LWListPeer$ScrollableJList
//$ extends javax.swing.JScrollPane
//$ implements javax.swing.event.ListSelectionListener

#include <java/lang/Array.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/event/ListSelectionListener.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace javax {
	namespace swing {
		class DefaultListModel;
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWListPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWListPeer$ScrollableJList : public ::javax::swing::JScrollPane, public ::javax::swing::event::ListSelectionListener {
	$class(LWListPeer$ScrollableJList, $NO_CLASS_INIT, ::javax::swing::JScrollPane, ::javax::swing::event::ListSelectionListener)
public:
	LWListPeer$ScrollableJList();
	using ::javax::swing::JScrollPane::contains;
	using ::javax::swing::JScrollPane::enable;
	using ::javax::swing::JScrollPane::getBounds;
	using ::javax::swing::JScrollPane::getSize;
	using ::javax::swing::JScrollPane::getLocation;
	using ::javax::swing::JScrollPane::firePropertyChange;
	using ::javax::swing::JScrollPane::add;
	using ::javax::swing::JScrollPane::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::lwawt::LWListPeer* this$0);
	::javax::swing::DefaultListModel* getModel();
	::javax::swing::JList* getView();
	bool isSkipStateChangedEvent();
	using ::javax::swing::JScrollPane::requestFocus;
	using ::javax::swing::JScrollPane::requestFocusInWindow;
	using ::javax::swing::JScrollPane::repaint;
	using ::javax::swing::JScrollPane::remove;
	using ::javax::swing::JScrollPane::list;
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setOpaque(bool isOpaque) override;
	void setSkipStateChangedEvent(bool skipStateChangedEvent);
	using ::javax::swing::JScrollPane::setUI;
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::sun::lwawt::LWListPeer* this$0 = nullptr;
	bool skipStateChangedEvent = false;
	::javax::swing::DefaultListModel* model = nullptr;
	$ints* oldSelectedIndices = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWListPeer$ScrollableJList_h_