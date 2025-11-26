#ifndef _javax_swing_text_rtf_RTFReader$DocumentDestination_h_
#define _javax_swing_text_rtf_RTFReader$DocumentDestination_h_
//$ class javax.swing.text.rtf.RTFReader$DocumentDestination
//$ extends javax.swing.text.rtf.RTFReader$TextHandlingDestination

#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
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

class RTFReader$DocumentDestination : public ::javax::swing::text::rtf::RTFReader$TextHandlingDestination {
	$class(RTFReader$DocumentDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$TextHandlingDestination)
public:
	RTFReader$DocumentDestination();
	using ::javax::swing::text::rtf::RTFReader$TextHandlingDestination::handleKeyword;
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void deliverText($String* text, ::javax::swing::text::AttributeSet* characterAttributes) override;
	virtual void endSection() override;
	virtual void finishParagraph(::javax::swing::text::AttributeSet* pgfAttributes, ::javax::swing::text::AttributeSet* chrAttributes) override;
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$DocumentDestination_h_