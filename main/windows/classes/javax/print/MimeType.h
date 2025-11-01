#ifndef _javax_print_MimeType_h_
#define _javax_print_MimeType_h_
//$ class javax.print.MimeType
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("EOF_LEXEME")
#undef EOF_LEXEME
#pragma push_macro("ILLEGAL_LEXEME")
#undef ILLEGAL_LEXEME
#pragma push_macro("QUOTED_STRING_LEXEME")
#undef QUOTED_STRING_LEXEME
#pragma push_macro("TOKEN_LEXEME")
#undef TOKEN_LEXEME
#pragma push_macro("TSPECIAL_LEXEME")
#undef TSPECIAL_LEXEME

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace print {
		class MimeType$ParameterMap;
		class MimeType$ParameterMapEntrySet;
	}
}

namespace javax {
	namespace print {

class MimeType : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(MimeType, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	MimeType();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* s);
	static $String* addQuotes($String* s);
	virtual bool equals(Object$* obj) override;
	virtual $String* getMediaSubtype();
	virtual $String* getMediaType();
	virtual $String* getMimeType();
	virtual ::java::util::Map* getParameterMap();
	$String* getStringValue();
	virtual int32_t hashCode() override;
	void parse($String* s);
	static $String* removeBackslashes($String* s);
	virtual $String* toString() override;
	static $String* toUnicodeLowerCase($String* s);
	static const int64_t serialVersionUID = (int64_t)0xD95721DD7B78AB3D;
	$StringArray* myPieces = nullptr;
	$String* myStringValue = nullptr;
	::javax::print::MimeType$ParameterMapEntrySet* myEntrySet = nullptr;
	::javax::print::MimeType$ParameterMap* myParameterMap = nullptr;
	static const int32_t TOKEN_LEXEME = 0;
	static const int32_t QUOTED_STRING_LEXEME = 1;
	static const int32_t TSPECIAL_LEXEME = 2;
	static const int32_t EOF_LEXEME = 3;
	static const int32_t ILLEGAL_LEXEME = 4;
};

	} // print
} // javax

#pragma pop_macro("EOF_LEXEME")
#pragma pop_macro("ILLEGAL_LEXEME")
#pragma pop_macro("QUOTED_STRING_LEXEME")
#pragma pop_macro("TOKEN_LEXEME")
#pragma pop_macro("TSPECIAL_LEXEME")

#endif // _javax_print_MimeType_h_