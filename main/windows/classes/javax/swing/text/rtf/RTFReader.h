#ifndef _javax_swing_text_rtf_RTFReader_h_
#define _javax_swing_text_rtf_RTFReader_h_
//$ class javax.swing.text.rtf.RTFReader
//$ extends javax.swing.text.rtf.RTFParser

#include <java/lang/Array.h>
#include <javax/swing/text/rtf/RTFParser.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Dictionary;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class MutableAttributeSet;
			class Style;
			class StyledDocument;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class MockAttributeSet;
				class RTFReader$Destination;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFReader : public ::javax::swing::text::rtf::RTFParser {
	$class(RTFReader, 0, ::javax::swing::text::rtf::RTFParser)
public:
	RTFReader();
	using ::javax::swing::text::rtf::RTFParser::handleText;
	void init$(::javax::swing::text::StyledDocument* destination);
	virtual void begingroup() override;
	virtual void close() override;
	virtual ::java::awt::Color* defaultColor();
	static void defineCharacterSet($String* name, $chars* table);
	virtual void endgroup() override;
	static $Object* getCharacterSet($String* name);
	virtual void handleBinaryBlob($bytes* data) override;
	virtual bool handleKeyword($String* keyword) override;
	virtual bool handleKeyword($String* keyword, int32_t parameter) override;
	virtual void handleText($String* text) override;
	static $chars* readCharset(::java::io::InputStream* strm);
	static $chars* readCharset(::java::net::URL* href);
	virtual void setCharacterSet($String* name);
	virtual void setRTFDestination(::javax::swing::text::rtf::RTFReader$Destination* newDestination);
	void setTargetAttribute($String* name, Object$* value);
	using ::javax::swing::text::rtf::RTFParser::write;
	::javax::swing::text::StyledDocument* target = nullptr;
	::java::util::Dictionary* parserState = nullptr;
	::javax::swing::text::rtf::RTFReader$Destination* rtfDestination = nullptr;
	::javax::swing::text::MutableAttributeSet* documentAttributes = nullptr;
	::java::util::Dictionary* fontTable = nullptr;
	$Array<::java::awt::Color>* colorTable = nullptr;
	$Array<::javax::swing::text::Style>* characterStyles = nullptr;
	$Array<::javax::swing::text::Style>* paragraphStyles = nullptr;
	$Array<::javax::swing::text::Style>* sectionStyles = nullptr;
	int32_t rtfversion = 0;
	bool ignoreGroupIfUnknownKeyword = false;
	int32_t skippingCharacters = 0;
	static ::java::util::Dictionary* straightforwardAttributes;
	::javax::swing::text::rtf::MockAttributeSet* mockery = nullptr;
	static ::java::util::Dictionary* textKeywords;
	static $String* TabAlignmentKey;
	static $String* TabLeaderKey;
	static ::java::util::Dictionary* characterSets;
	static bool useNeXTForAnsi;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader_h_