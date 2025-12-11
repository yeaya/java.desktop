#ifndef _com_apple_laf_AquaFileView$3_h_
#define _com_apple_laf_AquaFileView$3_h_
//$ class com.apple.laf.AquaFileView$3
//$ extends java.util.LinkedHashMap

#include <java/util/LinkedHashMap.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileView;
		}
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileView$3 : public ::java::util::LinkedHashMap {
	$class(AquaFileView$3, $NO_CLASS_INIT, ::java::util::LinkedHashMap)
public:
	AquaFileView$3();
	void init$(::com::apple::laf::AquaFileView* this$0);
	virtual bool removeEldestEntry(::java::util::Map$Entry* eldest) override;
	::com::apple::laf::AquaFileView* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileView$3_h_