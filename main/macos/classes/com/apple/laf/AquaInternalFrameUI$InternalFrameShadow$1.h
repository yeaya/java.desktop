#ifndef _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow$1_h_
#define _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow$1_h_
//$ class com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1
//$ extends javax.swing.border.Border

#include <javax/swing/border/Border.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI$InternalFrameShadow;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$InternalFrameShadow$1 : public ::javax::swing::border::Border {
	$class(AquaInternalFrameUI$InternalFrameShadow$1, $NO_CLASS_INIT, ::javax::swing::border::Border)
public:
	AquaInternalFrameUI$InternalFrameShadow$1();
	void init$(::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow* this$0, ::javax::swing::border::Border* val$fgShadow, ::javax::swing::border::Border* val$bgShadow);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow* this$0 = nullptr;
	::javax::swing::border::Border* val$bgShadow = nullptr;
	::javax::swing::border::Border* val$fgShadow = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow$1_h_