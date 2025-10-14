#ifndef _Bug8134116$BadPane_h_
#define _Bug8134116$BadPane_h_
//$ class Bug8134116$BadPane
//$ extends javax.swing.JTabbedPane

#include <javax/swing/JTabbedPane.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

class $export Bug8134116$BadPane : public ::javax::swing::JTabbedPane {
	$class(Bug8134116$BadPane, $NO_CLASS_INIT, ::javax::swing::JTabbedPane)
public:
	Bug8134116$BadPane();
	using ::javax::swing::JTabbedPane::add;
	using ::javax::swing::JTabbedPane::getComponentAt;
	using ::javax::swing::JTabbedPane::getToolTipText;
	using ::javax::swing::JTabbedPane::contains;
	using ::javax::swing::JTabbedPane::enable;
	using ::javax::swing::JTabbedPane::getBounds;
	using ::javax::swing::JTabbedPane::getSize;
	using ::javax::swing::JTabbedPane::getLocation;
	using ::javax::swing::JTabbedPane::firePropertyChange;
	using ::javax::swing::JTabbedPane::getMousePosition;
	void init$();
	virtual $String* getTitleAt(int32_t i) override;
	virtual void insertTab($String* title, ::javax::swing::Icon* icon, ::java::awt::Component* component, $String* tip, int32_t index) override;
	using ::javax::swing::JTabbedPane::setUI;
	using ::javax::swing::JTabbedPane::remove;
	using ::javax::swing::JTabbedPane::requestFocus;
	using ::javax::swing::JTabbedPane::requestFocusInWindow;
	using ::javax::swing::JTabbedPane::repaint;
	using ::javax::swing::JTabbedPane::list;
	::java::util::List* titles = nullptr;
};

#endif // _Bug8134116$BadPane_h_