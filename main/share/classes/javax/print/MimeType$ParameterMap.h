#ifndef _javax_print_MimeType$ParameterMap_h_
#define _javax_print_MimeType$ParameterMap_h_
//$ class javax.print.MimeType$ParameterMap
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace print {
		class MimeType;
	}
}

namespace javax {
	namespace print {

class MimeType$ParameterMap : public ::java::util::AbstractMap {
	$class(MimeType$ParameterMap, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	MimeType$ParameterMap();
	void init$(::javax::print::MimeType* this$0);
	virtual ::java::util::Set* entrySet() override;
	using ::java::util::AbstractMap::remove;
	::javax::print::MimeType* this$0 = nullptr;
};

	} // print
} // javax

#endif // _javax_print_MimeType$ParameterMap_h_