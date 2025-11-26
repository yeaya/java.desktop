#ifndef _javax_swing_text_rtf_RTFReader$TextHandlingDestination_h_
#define _javax_swing_text_rtf_RTFReader$TextHandlingDestination_h_
//$ class javax.swing.text.rtf.RTFReader$TextHandlingDestination
//$ extends javax.swing.text.rtf.RTFReader$AttributeTrackingDestination

#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>

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

class RTFReader$TextHandlingDestination : public ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination {
	$class(RTFReader$TextHandlingDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination)
public:
	RTFReader$TextHandlingDestination();
	using ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination::handleKeyword;
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void beginParagraph();
	virtual void close() override;
	virtual void deliverText($String* text, ::javax::swing::text::AttributeSet* characterAttributes) {}
	virtual void endParagraph();
	virtual void endSection() {}
	virtual void finishParagraph(::javax::swing::text::AttributeSet* pgfA, ::javax::swing::text::AttributeSet* chrA) {}
	virtual bool handleKeyword($String* keyword) override;
	virtual void handleText($String* text) override;
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
	bool inParagraph = false;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$TextHandlingDestination_h_