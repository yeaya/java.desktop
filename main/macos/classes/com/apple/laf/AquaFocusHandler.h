#ifndef _com_apple_laf_AquaFocusHandler_h_
#define _com_apple_laf_AquaFocusHandler_h_
//$ class com.apple.laf.AquaFocusHandler
//$ extends java.awt.event.FocusListener
//$ implements java.beans.PropertyChangeListener

#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>

#pragma push_macro("FRAME_ACTIVE_PROPERTY")
#undef FRAME_ACTIVE_PROPERTY
#pragma push_macro("REPAINT_LISTENER")
#undef REPAINT_LISTENER

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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
		class JComponent;
		class JList;
		class JTable;
		class JTree;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFocusHandler : public ::java::awt::event::FocusListener, public ::java::beans::PropertyChangeListener {
	$class(AquaFocusHandler, 0, ::java::awt::event::FocusListener, ::java::beans::PropertyChangeListener)
public:
	AquaFocusHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* ev) override;
	virtual void focusLost(::java::awt::event::FocusEvent* ev) override;
	static void install(::javax::swing::JComponent* c);
	static bool isActive(::javax::swing::JComponent* c);
	static bool isComponentValid(::javax::swing::JComponent* c);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	static void setSelectionColors(::javax::swing::JTable* c, $String* fgName, $String* bgName);
	static void setSelectionColors(::javax::swing::JList* c, $String* fgName, $String* bgName);
	static void swapSelectionColors($String* prefix, ::javax::swing::JTree* c, Object$* value);
	static void swapSelectionColors($String* prefix, ::javax::swing::JTable* c, Object$* value);
	static void swapSelectionColors($String* prefix, ::javax::swing::JList* c, Object$* value);
	virtual $String* toString() override;
	static void uninstall(::javax::swing::JComponent* c);
	bool wasTemporary = false;
	bool repaintBorder = false;
	static $String* FRAME_ACTIVE_PROPERTY;
	static ::java::beans::PropertyChangeListener* REPAINT_LISTENER;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("FRAME_ACTIVE_PROPERTY")
#pragma pop_macro("REPAINT_LISTENER")

#endif // _com_apple_laf_AquaFocusHandler_h_