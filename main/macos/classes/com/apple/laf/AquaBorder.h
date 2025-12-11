#ifndef _com_apple_laf_AquaBorder_h_
#define _com_apple_laf_AquaBorder_h_
//$ class com.apple.laf.AquaBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtilControlSize$SizeVariant;
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
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(AquaBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	AquaBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	void init$(::com::apple::laf::AquaBorder* other);
	virtual ::com::apple::laf::AquaPainter* createPainter();
	virtual ::com::apple::laf::AquaBorder* deriveBorderForSize(::apple::laf::JRSUIConstants$Size* size);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual bool isFocused(::java::awt::Component* c);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	static void repaintBorder(::javax::swing::JComponent* c);
	virtual void setSize(::apple::laf::JRSUIConstants$Size* size);
	virtual $String* toString() override;
	::com::apple::laf::AquaPainter* painter = nullptr;
	::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor = nullptr;
	::com::apple::laf::AquaUtilControlSize$SizeVariant* sizeVariant = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaBorder_h_