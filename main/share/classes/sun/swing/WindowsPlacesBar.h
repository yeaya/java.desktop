#ifndef _sun_swing_WindowsPlacesBar_h_
#define _sun_swing_WindowsPlacesBar_h_
//$ class sun.swing.WindowsPlacesBar
//$ extends javax.swing.JToolBar
//$ implements java.awt.event.ActionListener,java.beans.PropertyChangeListener

#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JToolBar.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
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
namespace javax {
	namespace swing {
		class ButtonGroup;
		class JFileChooser;
		class JToggleButton;
	}
}

namespace sun {
	namespace swing {

class $export WindowsPlacesBar : public ::javax::swing::JToolBar, public ::java::awt::event::ActionListener, public ::java::beans::PropertyChangeListener {
	$class(WindowsPlacesBar, $NO_CLASS_INIT, ::javax::swing::JToolBar, ::java::awt::event::ActionListener, ::java::beans::PropertyChangeListener)
public:
	WindowsPlacesBar();
	using ::javax::swing::JToolBar::add;
	using ::javax::swing::JToolBar::contains;
	using ::javax::swing::JToolBar::enable;
	using ::javax::swing::JToolBar::getBounds;
	using ::javax::swing::JToolBar::getSize;
	using ::javax::swing::JToolBar::getLocation;
	using ::javax::swing::JToolBar::firePropertyChange;
	using ::javax::swing::JToolBar::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFileChooser* fc, bool isXPStyle);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void doDirectoryChanged(::java::io::File* f);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JToolBar::list;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	using ::javax::swing::JToolBar::setUI;
	using ::javax::swing::JToolBar::requestFocus;
	using ::javax::swing::JToolBar::requestFocusInWindow;
	using ::javax::swing::JToolBar::repaint;
	using ::javax::swing::JToolBar::remove;
	virtual $String* toString() override;
	::javax::swing::JFileChooser* fc = nullptr;
	$Array<::javax::swing::JToggleButton>* buttons = nullptr;
	::javax::swing::ButtonGroup* buttonGroup = nullptr;
	$Array<::java::io::File>* files = nullptr;
	::java::awt::Dimension* buttonSize = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_WindowsPlacesBar_h_