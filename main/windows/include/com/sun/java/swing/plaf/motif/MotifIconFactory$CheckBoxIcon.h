#ifndef _com_sun_java_swing_plaf_motif_MotifIconFactory$CheckBoxIcon_h_
#define _com_sun_java_swing_plaf_motif_MotifIconFactory$CheckBoxIcon_h_
//$ class com.sun.java.swing.plaf.motif.MotifIconFactory$CheckBoxIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifIconFactory$CheckBoxIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(MotifIconFactory$CheckBoxIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	MotifIconFactory$CheckBoxIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void drawCheckBezel(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t csize, bool shade, bool out, bool check, bool flat);
	virtual void drawCheckBezelOut(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t csize);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t csize = 13;
	::java::awt::Color* control = nullptr;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* lightShadow = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifIconFactory$CheckBoxIcon_h_