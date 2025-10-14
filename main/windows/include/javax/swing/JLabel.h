#ifndef _javax_swing_JLabel_h_
#define _javax_swing_JLabel_h_
//$ class javax.swing.JLabel
//$ extends javax.swing.JComponent
//$ implements javax.swing.SwingConstants,javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

#pragma push_macro("LABELED_BY_PROPERTY")
#undef LABELED_BY_PROPERTY

namespace java {
	namespace awt {
		class Component;
		class Image;
	}
}
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
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class LabelUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JLabel : public ::javax::swing::JComponent, public ::javax::swing::SwingConstants, public ::javax::accessibility::Accessible {
	$class(JLabel, 0, ::javax::swing::JComponent, ::javax::swing::SwingConstants, ::javax::accessibility::Accessible)
public:
	JLabel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$($String* text, ::javax::swing::Icon* icon, int32_t horizontalAlignment);
	void init$($String* text, int32_t horizontalAlignment);
	void init$($String* text);
	void init$(::javax::swing::Icon* image, int32_t horizontalAlignment);
	void init$(::javax::swing::Icon* image);
	void init$();
	static ::javax::accessibility::AccessibleContext* access$000(::javax::swing::JLabel* x0);
	virtual int32_t checkHorizontalKey(int32_t key, $String* message);
	virtual int32_t checkVerticalKey(int32_t key, $String* message);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::Icon* getDisabledIcon();
	virtual int32_t getDisplayedMnemonic();
	virtual int32_t getDisplayedMnemonicIndex();
	virtual int32_t getHorizontalAlignment();
	virtual int32_t getHorizontalTextPosition();
	virtual ::javax::swing::Icon* getIcon();
	virtual int32_t getIconTextGap();
	virtual ::java::awt::Component* getLabelFor();
	virtual $String* getText();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t getVerticalAlignment();
	virtual int32_t getVerticalTextPosition();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setDisabledIcon(::javax::swing::Icon* disabledIcon);
	virtual void setDisplayedMnemonic(int32_t key);
	virtual void setDisplayedMnemonic(char16_t aChar);
	virtual void setDisplayedMnemonicIndex(int32_t index);
	virtual void setHorizontalAlignment(int32_t alignment);
	virtual void setHorizontalTextPosition(int32_t textPosition);
	virtual void setIcon(::javax::swing::Icon* icon);
	virtual void setIconTextGap(int32_t iconTextGap);
	virtual void setLabelFor(::java::awt::Component* c);
	virtual void setText($String* text);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::LabelUI* ui);
	virtual void setVerticalAlignment(int32_t alignment);
	virtual void setVerticalTextPosition(int32_t textPosition);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	int32_t mnemonic = 0;
	int32_t mnemonicIndex = 0;
	$String* text = nullptr;
	::javax::swing::Icon* defaultIcon = nullptr;
	::javax::swing::Icon* disabledIcon = nullptr;
	bool disabledIconSet = false;
	int32_t verticalAlignment = 0;
	int32_t horizontalAlignment = 0;
	int32_t verticalTextPosition = 0;
	int32_t horizontalTextPosition = 0;
	int32_t iconTextGap = 0;
	::java::awt::Component* labelFor = nullptr;
	static $String* LABELED_BY_PROPERTY;
};

	} // swing
} // javax

#pragma pop_macro("LABELED_BY_PROPERTY")

#endif // _javax_swing_JLabel_h_