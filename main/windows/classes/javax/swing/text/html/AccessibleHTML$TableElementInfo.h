#ifndef _javax_swing_text_html_AccessibleHTML$TableElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$TableElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$TableElementInfo
//$ extends javax.swing.text.html.AccessibleHTML$ElementInfo
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
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
				class AccessibleHTML;
				class AccessibleHTML$TableElementInfo$TableCellElementInfo;
				class AccessibleHTML$TableElementInfo$TableRowElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TableElementInfo : public ::javax::swing::text::html::AccessibleHTML$ElementInfo, public ::javax::accessibility::Accessible {
	$class(AccessibleHTML$TableElementInfo, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$ElementInfo, ::javax::accessibility::Accessible)
public:
	AccessibleHTML$TableElementInfo();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::Element* e, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::text::html::AccessibleHTML$ElementInfo* getCaptionInfo();
	virtual ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo* getCell(int32_t r, int32_t c);
	virtual int32_t getColumnCount();
	virtual int32_t getColumnExtentAt(int32_t r, int32_t c);
	virtual ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableRowElementInfo* getRow(int32_t index);
	virtual int32_t getRowCount();
	virtual int32_t getRowExtentAt(int32_t r, int32_t c);
	virtual void loadChildren(::javax::swing::text::Element* e) override;
	virtual $String* toString() override;
	void updateGrid();
	virtual void validate() override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
	::javax::swing::text::html::AccessibleHTML$ElementInfo* caption = nullptr;
	$Array<::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo, 2>* grid = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TableElementInfo_h_