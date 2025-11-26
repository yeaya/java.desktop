#ifndef _PaintContextScaleValidation_h_
#define _PaintContextScaleValidation_h_
//$ class PaintContextScaleValidation
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

namespace java {
	namespace awt {
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

class $export PaintContextScaleValidation : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(PaintContextScaleValidation, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	PaintContextScaleValidation();
	void init$();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	static void main($StringArray* args);
	void test(double maxH, double maxV);
};

#endif // _PaintContextScaleValidation_h_