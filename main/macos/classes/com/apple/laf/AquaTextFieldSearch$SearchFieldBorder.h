#ifndef _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder_h_
#define _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder_h_
//$ class com.apple.laf.AquaTextFieldSearch$SearchFieldBorder
//$ extends com.apple.laf.AquaTextFieldBorder
//$ implements com.apple.laf.AquaUtils$JComponentPainter

#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaUtils$JComponentPainter.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
		class LayoutManager;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$SearchFieldBorder : public ::com::apple::laf::AquaTextFieldBorder, public ::com::apple::laf::AquaUtils$JComponentPainter {
	$class(AquaTextFieldSearch$SearchFieldBorder, $NO_CLASS_INIT, ::com::apple::laf::AquaTextFieldBorder, ::com::apple::laf::AquaUtils$JComponentPainter)
public:
	AquaTextFieldSearch$SearchFieldBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder* other);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::LayoutManager* getCustomLayout();
	virtual void paint(::javax::swing::JComponent* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	bool reallyPaintBorder = false;
	bool doingLayout = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder_h_