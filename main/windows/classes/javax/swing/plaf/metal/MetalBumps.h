#ifndef _javax_swing_plaf_metal_MetalBumps_h_
#define _javax_swing_plaf_metal_MetalBumps_h_
//$ class javax.swing.plaf.metal.MetalBumps
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

#pragma push_macro("ALPHA")
#undef ALPHA
#pragma push_macro("METAL_BUMPS")
#undef METAL_BUMPS

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class GraphicsConfiguration;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class BumpBuffer;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalBumps : public ::javax::swing::Icon {
	$class(MetalBumps, 0, ::javax::swing::Icon)
public:
	MetalBumps();
	void init$(int32_t width, int32_t height, ::java::awt::Color* newTopColor, ::java::awt::Color* newShadowColor, ::java::awt::Color* newBackColor);
	static ::javax::swing::plaf::metal::BumpBuffer* createBuffer(::java::awt::GraphicsConfiguration* gc, ::java::awt::Color* topColor, ::java::awt::Color* shadowColor, ::java::awt::Color* backColor);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual void setBumpArea(::java::awt::Dimension* bumpArea);
	virtual void setBumpArea(int32_t width, int32_t height);
	virtual void setBumpColors(::java::awt::Color* newTopColor, ::java::awt::Color* newShadowColor, ::java::awt::Color* newBackColor);
	static ::java::awt::Color* ALPHA;
	int32_t xBumps = 0;
	int32_t yBumps = 0;
	::java::awt::Color* topColor = nullptr;
	::java::awt::Color* shadowColor = nullptr;
	::java::awt::Color* backColor = nullptr;
	static $Object* METAL_BUMPS;
	::javax::swing::plaf::metal::BumpBuffer* buffer = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ALPHA")
#pragma pop_macro("METAL_BUMPS")

#endif // _javax_swing_plaf_metal_MetalBumps_h_