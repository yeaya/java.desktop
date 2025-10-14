#ifndef _javax_swing_text_rtf_RTFReader$InfoDestination_h_
#define _javax_swing_text_rtf_RTFReader$InfoDestination_h_
//$ class javax.swing.text.rtf.RTFReader$InfoDestination
//$ extends javax.swing.text.rtf.RTFReader$DiscardingDestination

#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>

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

class RTFReader$InfoDestination : public ::javax::swing::text::rtf::RTFReader$DiscardingDestination {
	$class(RTFReader$InfoDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$DiscardingDestination)
public:
	RTFReader$InfoDestination();
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$InfoDestination_h_