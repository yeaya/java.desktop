#ifndef _javax_swing_text_rtf_RTFReader$StylesheetDestination$StyleDefiningDestination_h_
#define _javax_swing_text_rtf_RTFReader$StylesheetDestination$StyleDefiningDestination_h_
//$ class javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination
//$ extends javax.swing.text.rtf.RTFReader$AttributeTrackingDestination

#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>

#pragma push_macro("STYLENUMBER_NONE")
#undef STYLENUMBER_NONE

namespace javax {
	namespace swing {
		namespace text {
			class Style;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFReader$StylesheetDestination;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFReader$StylesheetDestination$StyleDefiningDestination : public ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination {
	$class(RTFReader$StylesheetDestination$StyleDefiningDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination)
public:
	RTFReader$StylesheetDestination$StyleDefiningDestination();
	void init$(::javax::swing::text::rtf::RTFReader$StylesheetDestination* this$1);
	virtual void close() override;
	virtual bool handleKeyword($String* keyword) override;
	virtual bool handleKeyword($String* keyword, int32_t parameter) override;
	virtual void handleText($String* text) override;
	virtual ::javax::swing::text::Style* realize();
	::javax::swing::text::rtf::RTFReader$StylesheetDestination* this$1 = nullptr;
	static const int32_t STYLENUMBER_NONE = 222;
	bool additive = false;
	bool characterStyle = false;
	bool sectionStyle = false;
	$String* styleName = nullptr;
	int32_t number = 0;
	int32_t basedOn = 0;
	int32_t nextStyle = 0;
	bool hidden = false;
	::javax::swing::text::Style* realizedStyle = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#pragma pop_macro("STYLENUMBER_NONE")

#endif // _javax_swing_text_rtf_RTFReader$StylesheetDestination$StyleDefiningDestination_h_