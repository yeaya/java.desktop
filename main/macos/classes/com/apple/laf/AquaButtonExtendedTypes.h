#ifndef _com_apple_laf_AquaButtonExtendedTypes_h_
#define _com_apple_laf_AquaButtonExtendedTypes_h_
//$ class com.apple.laf.AquaButtonExtendedTypes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonExtendedTypes$TypeSpecifier;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonExtendedTypes : public ::java::lang::Object {
	$class(AquaButtonExtendedTypes, 0, ::java::lang::Object)
public:
	AquaButtonExtendedTypes();
	void init$();
	static ::java::util::Map* getAllTypes();
	static ::javax::swing::border::Border* getBorderForPosition(::javax::swing::AbstractButton* c, Object$* type, Object$* logicalPosition);
	static $String* getRealPositionForLogicalPosition($String* logicalPosition, bool leftToRight);
	static ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier* getSpecifierByName($String* name);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* typeDefinitions;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes_h_