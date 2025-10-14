#ifndef _sun_awt_windows_HTMLCodec_h_
#define _sun_awt_windows_HTMLCodec_h_
//$ class sun.awt.windows.HTMLCodec
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("BYTE_BUFFER_LEN")
#undef BYTE_BUFFER_LEN
#pragma push_macro("CHAR_BUFFER_LEN")
#undef CHAR_BUFFER_LEN
#pragma push_macro("DEF_SOURCE_URL")
#undef DEF_SOURCE_URL
#pragma push_macro("ENCODING")
#undef ENCODING
#pragma push_macro("END_FRAGMENT")
#undef END_FRAGMENT
#pragma push_macro("END_FRAGMENT_CMT")
#undef END_FRAGMENT_CMT
#pragma push_macro("END_HTML")
#undef END_HTML
#pragma push_macro("END_SELECTION")
#undef END_SELECTION
#pragma push_macro("EOLN")
#undef EOLN
#pragma push_macro("FAILURE_MSG")
#undef FAILURE_MSG
#pragma push_macro("INVALID_MSG")
#undef INVALID_MSG
#pragma push_macro("PADDED_WIDTH")
#undef PADDED_WIDTH
#pragma push_macro("SOURCE_URL")
#undef SOURCE_URL
#pragma push_macro("START_FRAGMENT")
#undef START_FRAGMENT
#pragma push_macro("START_FRAGMENT_CMT")
#undef START_FRAGMENT_CMT
#pragma push_macro("START_HTML")
#undef START_HTML
#pragma push_macro("START_SELECTION")
#undef START_SELECTION
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("VERSION_NUM")
#undef VERSION_NUM

namespace java {
	namespace io {
		class BufferedInputStream;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class EHTMLReadMode;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class HTMLCodec : public ::java::io::InputStream {
	$class(HTMLCodec, 0, ::java::io::InputStream)
public:
	HTMLCodec();
	void init$(::java::io::InputStream* _bytestream, ::sun::awt::windows::EHTMLReadMode* _readMode);
	virtual void close() override;
	static $bytes* convertToHTMLFormat($bytes* bytes);
	virtual $String* getBaseURL();
	virtual $String* getVersion();
	void parseDescription();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	static $String* toPaddedString(int32_t n, int32_t width);
	static $String* ENCODING;
	static $String* VERSION;
	static $String* START_HTML;
	static $String* END_HTML;
	static $String* START_FRAGMENT;
	static $String* END_FRAGMENT;
	static $String* START_SELECTION;
	static $String* END_SELECTION;
	static $String* START_FRAGMENT_CMT;
	static $String* END_FRAGMENT_CMT;
	static $String* SOURCE_URL;
	static $String* DEF_SOURCE_URL;
	static $String* EOLN;
	static $String* VERSION_NUM;
	static const int32_t PADDED_WIDTH = 10;
	::java::io::BufferedInputStream* bufferedStream = nullptr;
	bool descriptionParsed = false;
	bool closed = false;
	static const int32_t BYTE_BUFFER_LEN = 8192;
	static const int32_t CHAR_BUFFER_LEN = 2730; // BYTE_BUFFER_LEN / 3
	static $String* FAILURE_MSG;
	static $String* INVALID_MSG;
	int64_t iHTMLStart = 0;
	int64_t iHTMLEnd = 0;
	int64_t iFragStart = 0;
	int64_t iFragEnd = 0;
	int64_t iSelStart = 0;
	int64_t iSelEnd = 0;
	$String* stBaseURL = nullptr;
	$String* stVersion = nullptr;
	int64_t iStartOffset = 0;
	int64_t iEndOffset = 0;
	int64_t iReadCount = 0;
	::sun::awt::windows::EHTMLReadMode* readMode = nullptr;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("BYTE_BUFFER_LEN")
#pragma pop_macro("CHAR_BUFFER_LEN")
#pragma pop_macro("DEF_SOURCE_URL")
#pragma pop_macro("ENCODING")
#pragma pop_macro("END_FRAGMENT")
#pragma pop_macro("END_FRAGMENT_CMT")
#pragma pop_macro("END_HTML")
#pragma pop_macro("END_SELECTION")
#pragma pop_macro("EOLN")
#pragma pop_macro("FAILURE_MSG")
#pragma pop_macro("INVALID_MSG")
#pragma pop_macro("PADDED_WIDTH")
#pragma pop_macro("SOURCE_URL")
#pragma pop_macro("START_FRAGMENT")
#pragma pop_macro("START_FRAGMENT_CMT")
#pragma pop_macro("START_HTML")
#pragma pop_macro("START_SELECTION")
#pragma pop_macro("VERSION")
#pragma pop_macro("VERSION_NUM")

#endif // _sun_awt_windows_HTMLCodec_h_