#ifndef _com_apple_laf_AquaPainter_h_
#define _com_apple_laf_AquaPainter_h_
//$ class com.apple.laf.AquaPainter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
		class JRSUIState;
		class JRSUIUtils$NineSliceMetricsProvider;
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Graphics2D;
		class Rectangle;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaPainter : public ::java::lang::Object {
	$class(AquaPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaPainter();
	void init$(::apple::laf::JRSUIControl* control, ::apple::laf::JRSUIState* state);
	static ::com::apple::laf::AquaPainter* create(::apple::laf::JRSUIState* state);
	static ::com::apple::laf::AquaPainter* create(::apple::laf::JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut);
	static ::com::apple::laf::AquaPainter* create(::apple::laf::JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle);
	static ::com::apple::laf::AquaPainter* create(::apple::laf::JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle, bool stretchHorizontally, bool stretchVertically);
	static ::com::apple::laf::AquaPainter* create(::apple::laf::JRSUIState* state, ::apple::laf::JRSUIUtils$NineSliceMetricsProvider* metricsProvider);
	::apple::laf::JRSUIControl* getControl();
	::java::awt::Graphics2D* getGraphics2D(::java::awt::Graphics* g);
	virtual void paint(::java::awt::Graphics2D* g, ::apple::laf::JRSUIState* stateToPaint) {}
	void paint(::java::awt::Graphics* g, ::java::awt::Component* c, int32_t x, int32_t y, int32_t w, int32_t h);
	::java::awt::Rectangle* boundsRect = nullptr;
	::apple::laf::JRSUIControl* control = nullptr;
	::apple::laf::JRSUIState* state = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter_h_