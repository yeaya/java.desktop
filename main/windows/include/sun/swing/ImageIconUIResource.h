#ifndef _sun_swing_ImageIconUIResource_h_
#define _sun_swing_ImageIconUIResource_h_
//$ class sun.swing.ImageIconUIResource
//$ extends javax.swing.ImageIcon
//$ implements javax.swing.plaf.UIResource

#include <java/lang/Array.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace sun {
	namespace swing {

class $import ImageIconUIResource : public ::javax::swing::ImageIcon, public ::javax::swing::plaf::UIResource {
	$class(ImageIconUIResource, $NO_CLASS_INIT, ::javax::swing::ImageIcon, ::javax::swing::plaf::UIResource)
public:
	ImageIconUIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* imageData);
	void init$(::java::awt::Image* image);
	virtual $String* toString() override;
};

	} // swing
} // sun

#endif // _sun_swing_ImageIconUIResource_h_