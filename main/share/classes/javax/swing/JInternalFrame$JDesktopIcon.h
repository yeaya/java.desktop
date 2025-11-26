#ifndef _javax_swing_JInternalFrame$JDesktopIcon_h_
#define _javax_swing_JInternalFrame$JDesktopIcon_h_
//$ class javax.swing.JInternalFrame$JDesktopIcon
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
		class JInternalFrame;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class DesktopIconUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JInternalFrame$JDesktopIcon : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JInternalFrame$JDesktopIcon, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JInternalFrame$JDesktopIcon();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* f);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::JDesktopPane* getDesktopPane();
	virtual ::javax::swing::JInternalFrame* getInternalFrame();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	using ::javax::swing::JComponent::list;
	virtual void setInternalFrame(::javax::swing::JInternalFrame* f);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::DesktopIconUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	virtual void updateUIWhenHidden();
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::JInternalFrame* internalFrame = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JInternalFrame$JDesktopIcon_h_