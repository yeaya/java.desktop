#ifndef _com_apple_laf_AquaUtilControlSize$SizeVariant_h_
#define _com_apple_laf_AquaUtilControlSize$SizeVariant_h_
//$ class com.apple.laf.AquaUtilControlSize$SizeVariant
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace java {
	namespace awt {
		class Insets;
	}
}
namespace java {
	namespace lang {
		class Float;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtilControlSize$SizeVariant : public ::java::lang::Object {
	$class(AquaUtilControlSize$SizeVariant, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaUtilControlSize$SizeVariant();
	void init$();
	void init$(int32_t minWidth, int32_t minHeight);
	void init$(::com::apple::laf::AquaUtilControlSize$SizeVariant* desc);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* alterFontSize(float newSize);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* alterInsets(int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* alterMargins(int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* alterMinSize(int32_t width, int32_t height);
	static ::java::awt::Insets* generateInsets(::java::awt::Insets* i, int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* replaceInsets($String* insetName);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* replaceInsets(::java::awt::Insets* i);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* replaceMargins($String* marginName);
	virtual $String* toString() override;
	::apple::laf::JRSUIConstants$Size* size = nullptr;
	::java::awt::Insets* insets = nullptr;
	::java::awt::Insets* margins = nullptr;
	::java::lang::Float* fontSize = nullptr;
	int32_t w = 0;
	int32_t h = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtilControlSize$SizeVariant_h_