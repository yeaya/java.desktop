#ifndef _javax_swing_JDesktopPane_h_
#define _javax_swing_JDesktopPane_h_
//$ class javax.swing.JDesktopPane
//$ extends javax.swing.JLayeredPane

#include <java/lang/Array.h>
#include <javax/swing/JLayeredPane.h>

#pragma push_macro("LIVE_DRAG_MODE")
#undef LIVE_DRAG_MODE
#pragma push_macro("OUTLINE_DRAG_MODE")
#undef OUTLINE_DRAG_MODE

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class DesktopManager;
		class JInternalFrame;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class DesktopPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JDesktopPane : public ::javax::swing::JLayeredPane {
	$class(JDesktopPane, 0, ::javax::swing::JLayeredPane)
public:
	JDesktopPane();
	using ::javax::swing::JLayeredPane::contains;
	using ::javax::swing::JLayeredPane::enable;
	using ::javax::swing::JLayeredPane::getBounds;
	using ::javax::swing::JLayeredPane::getSize;
	using ::javax::swing::JLayeredPane::getLocation;
	using ::javax::swing::JLayeredPane::firePropertyChange;
	using ::javax::swing::JLayeredPane::add;
	using ::javax::swing::JLayeredPane::getMousePosition;
	void init$();
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	void checkComponentAttributes(::java::awt::Component* comp);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::JInternalFrame>* getAllFrames();
	static ::java::util::Collection* getAllFrames(::java::awt::Container* parent);
	virtual $Array<::javax::swing::JInternalFrame>* getAllFramesInLayer(int32_t layer);
	virtual ::javax::swing::DesktopManager* getDesktopManager();
	virtual int32_t getDragMode();
	::java::util::List* getFrames();
	::javax::swing::JInternalFrame* getNextFrame(::javax::swing::JInternalFrame* f, bool forward);
	virtual ::javax::swing::JInternalFrame* getNextFrame(::javax::swing::JInternalFrame* f);
	virtual ::javax::swing::JInternalFrame* getSelectedFrame();
	::javax::swing::JInternalFrame* getTopInternalFrame();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JLayeredPane::list;
	virtual $String* paramString() override;
	using ::javax::swing::JLayeredPane::remove;
	virtual void remove(::java::awt::Component* comp) override;
	virtual void remove(int32_t index) override;
	virtual void removeAll() override;
	using ::javax::swing::JLayeredPane::requestFocus;
	using ::javax::swing::JLayeredPane::requestFocusInWindow;
	using ::javax::swing::JLayeredPane::repaint;
	virtual ::javax::swing::JInternalFrame* selectFrame(bool forward);
	virtual void setComponentOrderCheckingEnabled(bool enable);
	virtual void setComponentZOrder(::java::awt::Component* comp, int32_t index) override;
	virtual void setDesktopManager(::javax::swing::DesktopManager* d);
	virtual void setDragMode(int32_t dragMode);
	virtual void setSelectedFrame(::javax::swing::JInternalFrame* f);
	using ::javax::swing::JLayeredPane::setUI;
	virtual void setUI(::javax::swing::plaf::DesktopPaneUI* ui);
	virtual void setUIProperty($String* propertyName, Object$* value) override;
	void updateFramesCache();
	virtual void updateUI() override;
	void verifyFramesCache();
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::DesktopManager* desktopManager = nullptr;
	::javax::swing::JInternalFrame* selectedFrame = nullptr;
	static const int32_t LIVE_DRAG_MODE = 0;
	static const int32_t OUTLINE_DRAG_MODE = 1;
	int32_t dragMode = 0;
	bool dragModeSet = false;
	::java::util::List* framesCache = nullptr;
	bool componentOrderCheckingEnabled = false;
	bool componentOrderChanged = false;
};

	} // swing
} // javax

#pragma pop_macro("LIVE_DRAG_MODE")
#pragma pop_macro("OUTLINE_DRAG_MODE")

#endif // _javax_swing_JDesktopPane_h_