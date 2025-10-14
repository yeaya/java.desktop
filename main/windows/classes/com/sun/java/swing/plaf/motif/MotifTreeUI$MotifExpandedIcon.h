#ifndef _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifExpandedIcon_h_
#define _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifExpandedIcon_h_
//$ class com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon
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

class $export MotifTreeUI$MotifExpandedIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(MotifTreeUI$MotifExpandedIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	MotifTreeUI$MotifExpandedIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::Icon* createExpandedIcon();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static ::java::awt::Color* bg;
	static ::java::awt::Color* fg;
	static ::java::awt::Color* highlight;
	static ::java::awt::Color* shadow;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifExpandedIcon_h_