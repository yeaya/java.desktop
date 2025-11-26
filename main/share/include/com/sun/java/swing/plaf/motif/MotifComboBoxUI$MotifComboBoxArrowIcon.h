#ifndef _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboBoxArrowIcon_h_
#define _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboBoxArrowIcon_h_
//$ class com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboBoxArrowIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

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

class $import MotifComboBoxUI$MotifComboBoxArrowIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(MotifComboBoxUI$MotifComboBoxArrowIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	MotifComboBoxUI$MotifComboBoxArrowIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* lightShadow, ::java::awt::Color* darkShadow, ::java::awt::Color* fill);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t xo, int32_t yo) override;
	virtual $String* toString() override;
	::java::awt::Color* lightShadow = nullptr;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* fill = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboBoxArrowIcon_h_