#ifndef _javax_swing_plaf_metal_MetalIconFactory$TreeControlIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$TreeControlIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$TreeControlIcon
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
			namespace metal {
				class MetalIconFactory$ImageCacher;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalIconFactory$TreeControlIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(MetalIconFactory$TreeControlIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	MetalIconFactory$TreeControlIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isCollapsed);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual void paintMe(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y);
	virtual $String* toString() override;
	bool isLight = false;
	::javax::swing::plaf::metal::MetalIconFactory$ImageCacher* imageCacher = nullptr;
	bool cachedOrientation = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$TreeControlIcon_h_