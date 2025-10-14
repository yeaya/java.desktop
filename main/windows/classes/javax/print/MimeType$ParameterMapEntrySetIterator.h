#ifndef _javax_print_MimeType$ParameterMapEntrySetIterator_h_
#define _javax_print_MimeType$ParameterMapEntrySetIterator_h_
//$ class javax.print.MimeType$ParameterMapEntrySetIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace print {
		class MimeType;
	}
}

namespace javax {
	namespace print {

class MimeType$ParameterMapEntrySetIterator : public ::java::util::Iterator {
	$class(MimeType$ParameterMapEntrySetIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	MimeType$ParameterMapEntrySetIterator();
	void init$(::javax::print::MimeType* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::javax::print::MimeType* this$0 = nullptr;
	int32_t myIndex = 0;
};

	} // print
} // javax

#endif // _javax_print_MimeType$ParameterMapEntrySetIterator_h_