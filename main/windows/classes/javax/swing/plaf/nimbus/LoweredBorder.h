#ifndef _javax_swing_plaf_nimbus_LoweredBorder_h_
#define _javax_swing_plaf_nimbus_LoweredBorder_h_
//$ class javax.swing.plaf.nimbus.LoweredBorder
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter
//$ implements javax.swing.border.Border

#include <java/lang/Array.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("IMG_SIZE")
#undef IMG_SIZE
#pragma push_macro("INSETS")
#undef INSETS
#pragma push_macro("PAINT_CONTEXT")
#undef PAINT_CONTEXT
#pragma push_macro("RADIUS")
#undef RADIUS

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Graphics2D;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class LoweredBorder : public ::javax::swing::plaf::nimbus::AbstractRegionPainter, public ::javax::swing::border::Border {
	$class(LoweredBorder, 0, ::javax::swing::plaf::nimbus::AbstractRegionPainter, ::javax::swing::border::Border)
public:
	LoweredBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual $ObjectArray* getExtendedCacheKeys(::javax::swing::JComponent* c) override;
	::java::awt::Color* getLighter(::java::awt::Color* c, float factor);
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	static const int32_t IMG_SIZE = 30;
	static const int32_t RADIUS = 13;
	static ::java::awt::Insets* INSETS;
	static ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* PAINT_CONTEXT;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("IMG_SIZE")
#pragma pop_macro("INSETS")
#pragma pop_macro("PAINT_CONTEXT")
#pragma pop_macro("RADIUS")

#endif // _javax_swing_plaf_nimbus_LoweredBorder_h_