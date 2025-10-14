#ifndef _javax_swing_text_html_AccessibleHTML$ElementInfo_h_
#define _javax_swing_text_html_AccessibleHTML$ElementInfo_h_
//$ class javax.swing.text.html.AccessibleHTML$ElementInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$ElementInfo : public ::java::lang::Object {
	$class(AccessibleHTML$ElementInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleHTML$ElementInfo();
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::Element* element);
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::Element* element, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	virtual void addChild(::javax::swing::text::html::AccessibleHTML$ElementInfo* child);
	virtual ::javax::swing::text::AttributeSet* getAttributes();
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::javax::swing::text::html::AccessibleHTML$ElementInfo* getChild(int32_t index);
	virtual int32_t getChildCount();
	int32_t getClosestInfoIndex(int32_t index);
	virtual ::javax::swing::text::Element* getElement();
	virtual int32_t getIndexInParent();
	virtual int32_t getIntAttr(::javax::swing::text::AttributeSet* attrs, Object$* key, int32_t deflt);
	virtual ::javax::swing::text::html::AccessibleHTML$ElementInfo* getParent();
	virtual ::javax::swing::text::View* getView();
	::javax::swing::text::View* getView(::javax::swing::text::View* parent, ::javax::swing::text::Element* e, int32_t start);
	virtual ::javax::swing::text::AttributeSet* getViewAttributes();
	virtual int32_t indexOf(::javax::swing::text::html::AccessibleHTML$ElementInfo* child);
	virtual void invalidate(bool first);
	virtual bool isValid();
	virtual void loadChildren(::javax::swing::text::Element* parent);
	void update(::javax::swing::event::DocumentEvent* e);
	virtual void validate();
	virtual bool validateIfNecessary();
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
	::java::util::ArrayList* children = nullptr;
	::javax::swing::text::Element* element = nullptr;
	::javax::swing::text::html::AccessibleHTML$ElementInfo* parent = nullptr;
	bool isValid$ = false;
	bool canBeValid = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$ElementInfo_h_