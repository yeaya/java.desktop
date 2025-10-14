#ifndef _javax_swing_text_rtf_RTFReader$ColortblDestination_h_
#define _javax_swing_text_rtf_RTFReader$ColortblDestination_h_
//$ class javax.swing.text.rtf.RTFReader$ColortblDestination
//$ extends javax.swing.text.rtf.RTFReader$Destination

#include <java/lang/Array.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>

namespace java {
	namespace util {
		class Dictionary;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFReader;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFReader$ColortblDestination : public ::javax::swing::text::rtf::RTFReader$Destination {
	$class(RTFReader$ColortblDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$Destination)
public:
	RTFReader$ColortblDestination();
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void begingroup() override;
	virtual void close() override;
	virtual void endgroup(::java::util::Dictionary* oldState) override;
	virtual void handleBinaryBlob($bytes* data) override;
	virtual bool handleKeyword($String* keyword, int32_t parameter) override;
	virtual bool handleKeyword($String* keyword) override;
	virtual void handleText($String* text) override;
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
	int32_t red = 0;
	int32_t green = 0;
	int32_t blue = 0;
	::java::util::Vector* proTemTable = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$ColortblDestination_h_