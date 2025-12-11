#ifndef _com_apple_laf_AquaNativeResources$CColorPaintUIResource_h_
#define _com_apple_laf_AquaNativeResources$CColorPaintUIResource_h_
//$ class com.apple.laf.AquaNativeResources$CColorPaintUIResource
//$ extends java.awt.Color
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Color.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaNativeResources$CColorPaintUIResource : public ::java::awt::Color, public ::javax::swing::plaf::UIResource {
	$class(AquaNativeResources$CColorPaintUIResource, $NO_CLASS_INIT, ::java::awt::Color, ::javax::swing::plaf::UIResource)
public:
	AquaNativeResources$CColorPaintUIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t color, int32_t r, int32_t g, int32_t b, int32_t a);
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaNativeResources$CColorPaintUIResource_h_