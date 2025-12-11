#ifndef _com_apple_laf_AquaTextFieldBorder_h_
#define _com_apple_laf_AquaTextFieldBorder_h_
//$ class com.apple.laf.AquaTextFieldBorder
//$ extends com.apple.laf.AquaBorder

#include <com/apple/laf/AquaBorder.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtils$RecyclableSingleton;
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
		namespace text {
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldBorder : public ::com::apple::laf::AquaBorder {
	$class(AquaTextFieldBorder, 0, ::com::apple::laf::AquaBorder)
public:
	AquaTextFieldBorder();
	void init$();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	void init$(::com::apple::laf::AquaTextFieldBorder* other);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	static int32_t getShrinkageFor(::javax::swing::text::JTextComponent* jc, int32_t height);
	static ::apple::laf::JRSUIConstants$State* getStateFor(::javax::swing::text::JTextComponent* jc);
	virtual ::java::awt::Insets* getSubInsets(int32_t shrinkage);
	static ::com::apple::laf::AquaTextFieldBorder* getTextFieldBorder();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setSize(::apple::laf::JRSUIConstants$Size* size) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldBorder_h_