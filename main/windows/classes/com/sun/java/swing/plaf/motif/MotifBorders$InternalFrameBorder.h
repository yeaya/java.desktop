#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$InternalFrameBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$InternalFrameBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$InternalFrameBorder
//$ extends com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder

#include <com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder.h>

#pragma push_macro("CORNER_SIZE")
#undef CORNER_SIZE

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifBorders$InternalFrameBorder : public ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder {
	$class(MotifBorders$InternalFrameBorder, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder)
public:
	MotifBorders$InternalFrameBorder();
	using ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder::getBorderInsets;
	void init$(::javax::swing::JInternalFrame* aFrame);
	virtual bool drawBottomBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual bool drawLeftBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual bool drawRightBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual bool drawTopBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual ::javax::swing::JInternalFrame* frame();
	virtual bool isActiveFrame() override;
	virtual int32_t resizePartWidth();
	virtual void setFrame(::javax::swing::JInternalFrame* aFrame);
	::javax::swing::JInternalFrame* frame$ = nullptr;
	static const int32_t CORNER_SIZE = 24;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("CORNER_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$InternalFrameBorder_h_