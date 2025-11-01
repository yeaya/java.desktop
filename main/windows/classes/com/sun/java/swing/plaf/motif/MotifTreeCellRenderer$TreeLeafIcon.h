#ifndef _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer$TreeLeafIcon_h_
#define _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer$TreeLeafIcon_h_
//$ class com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon
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

class $export MotifTreeCellRenderer$TreeLeafIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(MotifTreeCellRenderer$TreeLeafIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	MotifTreeCellRenderer$TreeLeafIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::java::awt::Color* bg = nullptr;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* highlight = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer$TreeLeafIcon_h_