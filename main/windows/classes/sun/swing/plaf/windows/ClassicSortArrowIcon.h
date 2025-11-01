#ifndef _sun_swing_plaf_windows_ClassicSortArrowIcon_h_
#define _sun_swing_plaf_windows_ClassicSortArrowIcon_h_
//$ class sun.swing.plaf.windows.ClassicSortArrowIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

#pragma push_macro("X_OFFSET")
#undef X_OFFSET

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace windows {

class ClassicSortArrowIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(ClassicSortArrowIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	ClassicSortArrowIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool ascending);
	void drawSide(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t xIncrement);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t X_OFFSET = 9;
	bool ascending = false;
};

			} // windows
		} // plaf
	} // swing
} // sun

#pragma pop_macro("X_OFFSET")

#endif // _sun_swing_plaf_windows_ClassicSortArrowIcon_h_