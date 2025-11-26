#ifndef _javax_swing_text_rtf_RTFReader$AttributeTrackingDestination_h_
#define _javax_swing_text_rtf_RTFReader$AttributeTrackingDestination_h_
//$ class javax.swing.text.rtf.RTFReader$AttributeTrackingDestination
//$ extends javax.swing.text.rtf.RTFReader$Destination

#include <java/lang/Array.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>

namespace java {
	namespace util {
		class Dictionary;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
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

class RTFReader$AttributeTrackingDestination : public ::javax::swing::text::rtf::RTFReader$Destination {
	$class(RTFReader$AttributeTrackingDestination, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFReader$Destination)
public:
	RTFReader$AttributeTrackingDestination();
	virtual void handleText($String* text) override {}
	void init$(::javax::swing::text::rtf::RTFReader* this$0);
	virtual void begingroup() override;
	virtual void close() override;
	virtual ::javax::swing::text::MutableAttributeSet* currentParagraphAttributes();
	virtual ::javax::swing::text::AttributeSet* currentSectionAttributes();
	virtual ::javax::swing::text::MutableAttributeSet* currentTextAttributes();
	virtual void endgroup(::java::util::Dictionary* oldState) override;
	virtual void handleBinaryBlob($bytes* data) override;
	virtual bool handleKeyword($String* keyword) override;
	virtual bool handleKeyword($String* keyword, int32_t parameter) override;
	virtual void resetCharacterAttributes();
	virtual void resetParagraphAttributes();
	virtual void resetSectionAttributes();
	virtual ::javax::swing::text::MutableAttributeSet* rootCharacterAttributes();
	virtual ::javax::swing::text::MutableAttributeSet* rootParagraphAttributes();
	virtual ::javax::swing::text::MutableAttributeSet* rootSectionAttributes();
	::javax::swing::text::rtf::RTFReader* this$0 = nullptr;
	::javax::swing::text::MutableAttributeSet* characterAttributes = nullptr;
	::javax::swing::text::MutableAttributeSet* paragraphAttributes = nullptr;
	::javax::swing::text::MutableAttributeSet* sectionAttributes = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFReader$AttributeTrackingDestination_h_