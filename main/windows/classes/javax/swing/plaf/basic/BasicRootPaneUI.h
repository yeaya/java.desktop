#ifndef _javax_swing_plaf_basic_BasicRootPaneUI_h_
#define _javax_swing_plaf_basic_BasicRootPaneUI_h_
//$ class javax.swing.plaf.basic.BasicRootPaneUI
//$ extends javax.swing.plaf.RootPaneUI
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/RootPaneUI.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class ComponentInputMap;
		class InputMap;
		class JComponent;
		class JRootPane;
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
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicRootPaneUI : public ::javax::swing::plaf::RootPaneUI, public ::java::beans::PropertyChangeListener {
	$class(BasicRootPaneUI, 0, ::javax::swing::plaf::RootPaneUI, ::java::beans::PropertyChangeListener)
public:
	BasicRootPaneUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::ComponentInputMap* createInputMap(int32_t condition, ::javax::swing::JComponent* c);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition, ::javax::swing::JComponent* c);
	virtual void installComponents(::javax::swing::JRootPane* root);
	virtual void installDefaults(::javax::swing::JRootPane* c);
	virtual void installKeyboardActions(::javax::swing::JRootPane* root);
	virtual void installListeners(::javax::swing::JRootPane* root);
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallComponents(::javax::swing::JRootPane* root);
	virtual void uninstallDefaults(::javax::swing::JRootPane* root);
	virtual void uninstallKeyboardActions(::javax::swing::JRootPane* root);
	virtual void uninstallListeners(::javax::swing::JRootPane* root);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateDefaultButtonBindings(::javax::swing::JRootPane* root);
	static ::javax::swing::plaf::RootPaneUI* rootPaneUI;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicRootPaneUI_h_