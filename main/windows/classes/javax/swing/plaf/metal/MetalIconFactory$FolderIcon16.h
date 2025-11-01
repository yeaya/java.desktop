#ifndef _javax_swing_plaf_metal_MetalIconFactory$FolderIcon16_h_
#define _javax_swing_plaf_metal_MetalIconFactory$FolderIcon16_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$FolderIcon16
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

class $export MetalIconFactory$FolderIcon16 : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(MetalIconFactory$FolderIcon16, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	MetalIconFactory$FolderIcon16();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getAdditionalHeight();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual int32_t getShift();
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	void paintMe(::java::awt::Component* c, ::java::awt::Graphics* g);
	virtual $String* toString() override;
	::javax::swing::plaf::metal::MetalIconFactory$ImageCacher* imageCacher = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$FolderIcon16_h_