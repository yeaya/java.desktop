#ifndef _sun_swing_icon_SortArrowIcon_h_
#define _sun_swing_icon_SortArrowIcon_h_
//$ class sun.swing.icon.SortArrowIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

#pragma push_macro("ARROW_HEIGHT")
#undef ARROW_HEIGHT
#pragma push_macro("X_PADDING")
#undef X_PADDING

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
	}
}

namespace sun {
	namespace swing {
		namespace icon {

class SortArrowIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(SortArrowIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	SortArrowIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool ascending, ::java::awt::Color* color);
	void init$(bool ascending, $String* colorKey);
	::java::awt::Color* getColor();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t ARROW_HEIGHT = 5;
	static const int32_t X_PADDING = 7;
	bool ascending = false;
	::java::awt::Color* color = nullptr;
	$String* colorKey = nullptr;
};

		} // icon
	} // swing
} // sun

#pragma pop_macro("ARROW_HEIGHT")
#pragma pop_macro("X_PADDING")

#endif // _sun_swing_icon_SortArrowIcon_h_