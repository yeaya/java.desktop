#ifndef _javax_swing_text_html_MuxingAttributeSet$MuxingAttributeNameEnumeration_h_
#define _javax_swing_text_html_MuxingAttributeSet$MuxingAttributeNameEnumeration_h_
//$ class javax.swing.text.html.MuxingAttributeSet$MuxingAttributeNameEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class MuxingAttributeSet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class MuxingAttributeSet$MuxingAttributeNameEnumeration : public ::java::util::Enumeration {
	$class(MuxingAttributeSet$MuxingAttributeNameEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	MuxingAttributeSet$MuxingAttributeNameEnumeration();
	void init$(::javax::swing::text::html::MuxingAttributeSet* this$0);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	virtual void updateEnum();
	::javax::swing::text::html::MuxingAttributeSet* this$0 = nullptr;
	int32_t attrIndex = 0;
	::java::util::Enumeration* currentEnum = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_MuxingAttributeSet$MuxingAttributeNameEnumeration_h_