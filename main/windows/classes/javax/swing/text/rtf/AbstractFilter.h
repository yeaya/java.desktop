#ifndef _javax_swing_text_rtf_AbstractFilter_h_
#define _javax_swing_text_rtf_AbstractFilter_h_
//$ class javax.swing.text.rtf.AbstractFilter
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class AbstractFilter : public ::java::io::OutputStream {
	$class(AbstractFilter, 0, ::java::io::OutputStream)
public:
	AbstractFilter();
	void init$();
	virtual void readFromReader(::java::io::Reader* in);
	virtual void readFromStream(::java::io::InputStream* in);
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* buf, int32_t off, int32_t len) override;
	virtual void write($String* s);
	virtual void write(char16_t ch) {}
	virtual void writeSpecial(int32_t b) {}
	$chars* translationTable = nullptr;
	$booleans* specialsTable = nullptr;
	static $chars* latin1TranslationTable;
	static $booleans* noSpecialsTable;
	static $booleans* allSpecialsTable;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_AbstractFilter_h_