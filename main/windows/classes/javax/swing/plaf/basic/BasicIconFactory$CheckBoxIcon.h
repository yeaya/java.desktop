#ifndef _javax_swing_plaf_basic_BasicIconFactory$CheckBoxIcon_h_
#define _javax_swing_plaf_basic_BasicIconFactory$CheckBoxIcon_h_
//$ class javax.swing.plaf.basic.BasicIconFactory$CheckBoxIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicIconFactory$CheckBoxIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(BasicIconFactory$CheckBoxIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	BasicIconFactory$CheckBoxIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t csize = 13;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicIconFactory$CheckBoxIcon_h_