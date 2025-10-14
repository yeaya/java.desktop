#ifndef _javax_swing_plaf_basic_BasicButtonUI$ButtonGroupInfo_h_
#define _javax_swing_plaf_basic_BasicButtonUI$ButtonGroupInfo_h_
//$ class javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class HashSet;
	}
}
namespace javax {
	namespace swing {
		class JToggleButton;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicButtonUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicButtonUI$ButtonGroupInfo : public ::java::lang::Object {
	$class(BasicButtonUI$ButtonGroupInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicButtonUI$ButtonGroupInfo();
	void init$(::javax::swing::plaf::basic::BasicButtonUI* this$0, ::javax::swing::JToggleButton* btn);
	virtual bool containsInGroup(Object$* obj);
	virtual bool getButtonGroupInfo();
	virtual ::java::awt::Component* getFocusTransferBaseComponent(bool next);
	virtual void jumpToNextComponent(bool next);
	virtual void selectNewButton(bool next);
	::javax::swing::plaf::basic::BasicButtonUI* this$0 = nullptr;
	::javax::swing::JToggleButton* activeBtn = nullptr;
	::javax::swing::JToggleButton* firstBtn = nullptr;
	::javax::swing::JToggleButton* lastBtn = nullptr;
	::javax::swing::JToggleButton* previousBtn = nullptr;
	::javax::swing::JToggleButton* nextBtn = nullptr;
	::java::util::HashSet* btnsInGroup = nullptr;
	bool srcFound = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicButtonUI$ButtonGroupInfo_h_