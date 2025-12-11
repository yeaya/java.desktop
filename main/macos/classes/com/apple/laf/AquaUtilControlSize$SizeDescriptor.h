#ifndef _com_apple_laf_AquaUtilControlSize$SizeDescriptor_h_
#define _com_apple_laf_AquaUtilControlSize$SizeDescriptor_h_
//$ class com.apple.laf.AquaUtilControlSize$SizeDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeVariant;
		}
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

class AquaUtilControlSize$SizeDescriptor : public ::java::lang::Object {
	$class(AquaUtilControlSize$SizeDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaUtilControlSize$SizeDescriptor();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveMini(::com::apple::laf::AquaUtilControlSize$SizeVariant* v);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveRegular(::com::apple::laf::AquaUtilControlSize$SizeVariant* v);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveSmall(::com::apple::laf::AquaUtilControlSize$SizeVariant* v);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* get(::javax::swing::JComponent* c);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* get(::apple::laf::JRSUIConstants$Size* size);
	virtual $String* toString() override;
	::com::apple::laf::AquaUtilControlSize$SizeVariant* regular = nullptr;
	::com::apple::laf::AquaUtilControlSize$SizeVariant* small = nullptr;
	::com::apple::laf::AquaUtilControlSize$SizeVariant* mini = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtilControlSize$SizeDescriptor_h_