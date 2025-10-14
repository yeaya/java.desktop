#ifndef _javax_swing_text_rtf_RTFReader$StylesheetDestination_h_
#define _javax_swing_text_rtf_RTFReader$StylesheetDestination_h_
//$ class javax.swing.text.rtf.RTFReader$StylesheetDestination
//$ extends javax.swing.text.rtf.RTFReader$DiscardingDestination

#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>

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

class RTFReader$StylesheetDestination : public ::javax::swing::text::rtf::RTFReader$DiscardingDestination {
	$class(RTFReader$StylesheetDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$DiscardingDestination)
public:
	RTFReader$StylesheetDestination();
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void begingroup() override;
	virtual void close() override;
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
	::java::util::Dictionary* definedStyles = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$StylesheetDestination_h_