#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI
//$ extends javax.swing.plaf.ScrollPaneUI
//$ implements javax.swing.ScrollPaneConstants

#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/plaf/ScrollPaneUI.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseWheelListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JComponent;
		class JScrollPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollPaneUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollPaneUI : public ::javax::swing::plaf::ScrollPaneUI, public ::javax::swing::ScrollPaneConstants {
	$class(BasicScrollPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::ScrollPaneUI, ::javax::swing::ScrollPaneConstants)
public:
	BasicScrollPaneUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::event::ChangeListener* createHSBChangeListener();
	::java::beans::PropertyChangeListener* createHSBPropertyChangeListener();
	virtual ::java::awt::event::MouseWheelListener* createMouseWheelListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::javax::swing::event::ChangeListener* createVSBChangeListener();
	::java::beans::PropertyChangeListener* createVSBPropertyChangeListener();
	virtual ::javax::swing::event::ChangeListener* createViewportChangeListener();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::basic::BasicScrollPaneUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::JScrollPane* scrollpane);
	virtual void installKeyboardActions(::javax::swing::JScrollPane* c);
	virtual void installListeners(::javax::swing::JScrollPane* c);
	virtual void installUI(::javax::swing::JComponent* x) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void syncScrollPaneWithViewport();
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::JScrollPane* c);
	virtual void uninstallKeyboardActions(::javax::swing::JScrollPane* c);
	virtual void uninstallListeners(::javax::swing::JComponent* c);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateColumnHeader(::java::beans::PropertyChangeEvent* e);
	void updateHorizontalScrollBar(::java::beans::PropertyChangeEvent* pce);
	virtual void updateRowHeader(::java::beans::PropertyChangeEvent* e);
	void updateScrollBar(::java::beans::PropertyChangeEvent* pce, ::javax::swing::event::ChangeListener* cl, ::java::beans::PropertyChangeListener* pcl);
	virtual void updateScrollBarDisplayPolicy(::java::beans::PropertyChangeEvent* e);
	void updateVerticalScrollBar(::java::beans::PropertyChangeEvent* pce);
	virtual void updateViewport(::java::beans::PropertyChangeEvent* e);
	::javax::swing::JScrollPane* scrollpane = nullptr;
	::javax::swing::event::ChangeListener* vsbChangeListener = nullptr;
	::javax::swing::event::ChangeListener* hsbChangeListener = nullptr;
	::javax::swing::event::ChangeListener* viewportChangeListener = nullptr;
	::java::beans::PropertyChangeListener* spPropertyChangeListener = nullptr;
	::java::awt::event::MouseWheelListener* mouseScrollListener = nullptr;
	int32_t oldExtent = 0;
	::java::beans::PropertyChangeListener* vsbPropertyChangeListener = nullptr;
	::java::beans::PropertyChangeListener* hsbPropertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicScrollPaneUI$Handler* handler = nullptr;
	bool setValueCalled = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI_h_