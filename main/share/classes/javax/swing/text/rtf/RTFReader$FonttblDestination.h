#ifndef _javax_swing_text_rtf_RTFReader$FonttblDestination_h_
#define _javax_swing_text_rtf_RTFReader$FonttblDestination_h_
//$ class javax.swing.text.rtf.RTFReader$FonttblDestination
//$ extends javax.swing.text.rtf.RTFReader$Destination

#include <java/lang/Array.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>

namespace java {
	namespace lang {
		class Integer;
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

class RTFReader$FonttblDestination : public ::javax::swing::text::rtf::RTFReader$Destination {
	$class(RTFReader$FonttblDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$Destination)
public:
	RTFReader$FonttblDestination();
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void begingroup() override;
	virtual void close() override;
	virtual void endgroup(::java::util::Dictionary* oldState) override;
	virtual void handleBinaryBlob($bytes* data) override;
	virtual bool handleKeyword($String* keyword) override;
	virtual bool handleKeyword($String* keyword, int32_t parameter) override;
	virtual void handleText($String* text) override;
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
	int32_t nextFontNumber = 0;
	::java::lang::Integer* fontNumberKey = nullptr;
	$String* nextFontFamily = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$FonttblDestination_h_