#ifndef _javax_swing_text_rtf_RTFReader$Destination_h_
#define _javax_swing_text_rtf_RTFReader$Destination_h_
//$ interface javax.swing.text.rtf.RTFReader$Destination
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Dictionary;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFReader$Destination : public ::java::lang::Object {
	$interface(RTFReader$Destination, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void begingroup() {}
	virtual void close() {}
	virtual void endgroup(::java::util::Dictionary* oldState) {}
	virtual void handleBinaryBlob($bytes* data) {}
	virtual bool handleKeyword($String* keyword) {return false;}
	virtual bool handleKeyword($String* keyword, int32_t parameter) {return false;}
	virtual void handleText($String* text) {}
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$Destination_h_