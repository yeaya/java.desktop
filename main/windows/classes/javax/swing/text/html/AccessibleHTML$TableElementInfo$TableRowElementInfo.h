#ifndef _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableRowElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableRowElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$TableElementInfo$TableRowElementInfo
//$ extends javax.swing.text.html.AccessibleHTML$ElementInfo

#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML$TableElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TableElementInfo$TableRowElementInfo : public ::javax::swing::text::html::AccessibleHTML$ElementInfo {
	$class(AccessibleHTML$TableElementInfo$TableRowElementInfo, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$ElementInfo)
public:
	AccessibleHTML$TableElementInfo$TableRowElementInfo();
	void init$(::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1, ::javax::swing::text::Element* e, ::javax::swing::text::html::AccessibleHTML$TableElementInfo* parent, int32_t rowNumber);
	virtual int32_t getColumnCount();
	int32_t getColumnCount(int32_t rowspan);
	virtual int32_t getRowCount();
	virtual void invalidate(bool first) override;
	virtual void loadChildren(::javax::swing::text::Element* e) override;
	void updateGrid(int32_t row);
	::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1 = nullptr;
	::javax::swing::text::html::AccessibleHTML$TableElementInfo* parent = nullptr;
	int32_t rowNumber = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableRowElementInfo_h_