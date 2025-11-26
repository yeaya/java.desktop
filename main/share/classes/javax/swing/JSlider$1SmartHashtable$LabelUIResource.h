#ifndef _javax_swing_JSlider$1SmartHashtable$LabelUIResource_h_
#define _javax_swing_JSlider$1SmartHashtable$LabelUIResource_h_
//$ class javax.swing.JSlider$1SmartHashtable$LabelUIResource
//$ extends javax.swing.JLabel
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace javax {
	namespace swing {
		class JSlider$1SmartHashtable;
	}
}

namespace javax {
	namespace swing {

class JSlider$1SmartHashtable$LabelUIResource : public ::javax::swing::JLabel, public ::javax::swing::plaf::UIResource {
	$class(JSlider$1SmartHashtable$LabelUIResource, $NO_CLASS_INIT, ::javax::swing::JLabel, ::javax::swing::plaf::UIResource)
public:
	JSlider$1SmartHashtable$LabelUIResource();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSlider$1SmartHashtable* this$1, $String* text, int32_t alignment);
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::Color* getForeground() override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	virtual $String* toString() override;
	::javax::swing::JSlider$1SmartHashtable* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSlider$1SmartHashtable$LabelUIResource_h_