#ifndef _TestAbstractRegionPainter$UserAbstractRegionPainter_h_
#define _TestAbstractRegionPainter$UserAbstractRegionPainter_h_
//$ class TestAbstractRegionPainter$UserAbstractRegionPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
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

class $export TestAbstractRegionPainter$UserAbstractRegionPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TestAbstractRegionPainter$UserAbstractRegionPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TestAbstractRegionPainter$UserAbstractRegionPainter();
	void init$();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	virtual ::java::awt::Color* getUserComponentColor(::javax::swing::JComponent* c, $String* property, ::java::awt::Color* defaultColor, float saturationOffset, float brightnessOffset, int32_t alphaOffset);
};

#endif // _TestAbstractRegionPainter$UserAbstractRegionPainter_h_