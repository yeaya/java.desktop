#ifndef _javax_print_MimeType$ParameterMapEntrySet_h_
#define _javax_print_MimeType$ParameterMapEntrySet_h_
//$ class javax.print.MimeType$ParameterMapEntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace print {
		class MimeType;
	}
}

namespace javax {
	namespace print {

class MimeType$ParameterMapEntrySet : public ::java::util::AbstractSet {
	$class(MimeType$ParameterMapEntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	MimeType$ParameterMapEntrySet();
	void init$(::javax::print::MimeType* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::javax::print::MimeType* this$0 = nullptr;
};

	} // print
} // javax

#endif // _javax_print_MimeType$ParameterMapEntrySet_h_