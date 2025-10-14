#ifndef _javax_print_MimeType$ParameterMapEntry_h_
#define _javax_print_MimeType$ParameterMapEntry_h_
//$ class javax.print.MimeType$ParameterMapEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace javax {
	namespace print {
		class MimeType;
	}
}

namespace javax {
	namespace print {

class MimeType$ParameterMapEntry : public ::java::util::Map$Entry {
	$class(MimeType$ParameterMapEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	MimeType$ParameterMapEntry();
	void init$(::javax::print::MimeType* this$0, int32_t theIndex);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $String* setValue($String* value);
	virtual $Object* setValue(Object$* value) override;
	::javax::print::MimeType* this$0 = nullptr;
	int32_t myIndex = 0;
};

	} // print
} // javax

#endif // _javax_print_MimeType$ParameterMapEntry_h_