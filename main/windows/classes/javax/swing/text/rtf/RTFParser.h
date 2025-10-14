#ifndef _javax_swing_text_rtf_RTFParser_h_
#define _javax_swing_text_rtf_RTFParser_h_
//$ class javax.swing.text.rtf.RTFParser
//$ extends javax.swing.text.rtf.AbstractFilter

#include <java/lang/Array.h>
#include <javax/swing/text/rtf/AbstractFilter.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFParser : public ::javax::swing::text::rtf::AbstractFilter {
	$class(RTFParser, 0, ::javax::swing::text::rtf::AbstractFilter)
public:
	RTFParser();
	void init$();
	virtual void begingroup() {}
	virtual void close() override;
	virtual void endgroup() {}
	virtual void flush() override;
	virtual void handleBinaryBlob($bytes* data) {}
	virtual bool handleKeyword($String* keyword) {return false;}
	virtual bool handleKeyword($String* keyword, int32_t parameter) {return false;}
	virtual void handleText($String* text) {}
	virtual void handleText(char16_t ch);
	virtual void warning($String* s);
	using ::javax::swing::text::rtf::AbstractFilter::write;
	virtual void write($String* s) override;
	virtual void write(char16_t ch) override;
	virtual void writeSpecial(int32_t b) override;
	int32_t level = 0;
	int32_t state = 0;
	::java::lang::StringBuffer* currentCharacters = nullptr;
	$String* pendingKeyword = nullptr;
	int32_t pendingCharacter = 0;
	int64_t binaryBytesLeft = 0;
	::java::io::ByteArrayOutputStream* binaryBuf = nullptr;
	$booleans* savedSpecials = nullptr;
	::java::io::PrintStream* warnings = nullptr;
	static const int32_t S_text = 0;
	static const int32_t S_backslashed = 1;
	static const int32_t S_token = 2;
	static const int32_t S_parameter = 3;
	static const int32_t S_aftertick = 4;
	static const int32_t S_aftertickc = 5;
	static const int32_t S_inblob = 6;
	static $booleans* rtfSpecialsTable;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFParser_h_