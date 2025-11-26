#ifndef _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableCellElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableCellElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$TableElementInfo$TableCellElementInfo
//$ extends javax.swing.text.html.AccessibleHTML$ElementInfo

#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
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

class AccessibleHTML$TableElementInfo$TableCellElementInfo : public ::javax::swing::text::html::AccessibleHTML$ElementInfo {
	$class(AccessibleHTML$TableElementInfo$TableCellElementInfo, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$ElementInfo)
public:
	AccessibleHTML$TableElementInfo$TableCellElementInfo();
	void init$(::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1, ::javax::swing::text::Element* e, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	void init$(::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1, ::javax::swing::text::Element* e, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent, bool isHeaderCell);
	virtual ::javax::accessibility::Accessible* getAccessible();
	void getAccessible(::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual int32_t getColumnCount();
	virtual int32_t getRowCount();
	virtual void invalidate(bool first) override;
	virtual bool isHeaderCell();
	::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1 = nullptr;
	::javax::accessibility::Accessible* accessible = nullptr;
	bool isHeaderCell$ = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableCellElementInfo_h_