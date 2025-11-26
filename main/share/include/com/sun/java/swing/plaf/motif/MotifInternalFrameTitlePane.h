#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane
//$ implements java.awt.LayoutManager,java.awt.event.ActionListener,java.beans.PropertyChangeListener

#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

#pragma push_macro("BUTTON_SIZE")
#undef BUTTON_SIZE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane$MaximizeButton;
						class MotifInternalFrameTitlePane$MinimizeButton;
						class MotifInternalFrameTitlePane$SystemButton;
						class MotifInternalFrameTitlePane$Title;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Dimension;
		class Graphics;
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
namespace javax {
	namespace swing {
		class Action;
		class JInternalFrame;
		class JPopupMenu;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifInternalFrameTitlePane : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane, public ::java::awt::LayoutManager, public ::java::awt::event::ActionListener, public ::java::beans::PropertyChangeListener {
	$class(MotifInternalFrameTitlePane, 0, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane, ::java::awt::LayoutManager, ::java::awt::event::ActionListener, ::java::beans::PropertyChangeListener)
public:
	MotifInternalFrameTitlePane();
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::contains;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::enable;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getBounds;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getSize;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getLocation;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::add;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getMousePosition;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* frame);
	static ::javax::swing::JInternalFrame* access$000(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	static ::javax::swing::Action* access$100(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$200(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$300(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$400(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$500(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* x0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void addSubComponents() override;
	virtual void assembleSystemMenu() override;
	virtual void createButtons() override;
	virtual ::java::awt::LayoutManager* createLayout() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static int32_t getButtonMnemonic($String* button);
	virtual ::javax::swing::JPopupMenu* getSystemMenu();
	virtual void hideSystemMenu();
	virtual void installDefaults() override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::remove;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocus;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::repaint;
	virtual void setColors(::java::awt::Color* c, ::java::awt::Color* h, ::java::awt::Color* s);
	virtual void showSystemMenu() override;
	virtual $String* toString() override;
	virtual void uninstallListeners() override;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$SystemButton* systemButton = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$MinimizeButton* minimizeButton = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$MaximizeButton* maximizeButton = nullptr;
	::javax::swing::JPopupMenu* systemMenu = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title* title = nullptr;
	::java::awt::Color* color = nullptr;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* shadow = nullptr;
	static const int32_t BUTTON_SIZE = 19;
	static ::java::awt::Dimension* buttonDimension;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BUTTON_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane_h_