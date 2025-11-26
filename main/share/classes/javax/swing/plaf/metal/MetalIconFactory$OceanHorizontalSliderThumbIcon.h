#ifndef _javax_swing_plaf_metal_MetalIconFactory$OceanHorizontalSliderThumbIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$OceanHorizontalSliderThumbIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon
//$ extends sun.swing.CachedPainter
//$ implements javax.swing.Icon,java.io.Serializable,javax.swing.plaf.UIResource

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/swing/CachedPainter.h>

#pragma push_macro("THUMB_SHAPE")
#undef THUMB_SHAPE

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Polygon;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalIconFactory$OceanHorizontalSliderThumbIcon : public ::sun::swing::CachedPainter, public ::javax::swing::Icon, public ::java::io::Serializable, public ::javax::swing::plaf::UIResource {
	$class(MetalIconFactory$OceanHorizontalSliderThumbIcon, 0, ::sun::swing::CachedPainter, ::javax::swing::Icon, ::java::io::Serializable, ::javax::swing::plaf::UIResource)
public:
	MetalIconFactory$OceanHorizontalSliderThumbIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Image* createImage(::java::awt::Component* c, int32_t w, int32_t h, ::java::awt::GraphicsConfiguration* config, $ObjectArray* args) override;
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual void paintToImage(::java::awt::Component* c, ::java::awt::Image* image, ::java::awt::Graphics* g2, int32_t w, int32_t h, $ObjectArray* args) override;
	virtual $String* toString() override;
	static ::java::awt::Polygon* THUMB_SHAPE;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("THUMB_SHAPE")

#endif // _javax_swing_plaf_metal_MetalIconFactory$OceanHorizontalSliderThumbIcon_h_