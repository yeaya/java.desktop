#ifndef _javax_swing_UIManager$LAFState_h_
#define _javax_swing_UIManager$LAFState_h_
//$ class javax.swing.UIManager$LAFState
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Properties;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class LookAndFeel;
		class MultiUIDefaults;
		class UIDefaults;
		class UIManager$LookAndFeelInfo;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class SwingPropertyChangeSupport;
		}
	}
}

namespace javax {
	namespace swing {

class UIManager$LAFState : public ::java::lang::Object {
	$class(UIManager$LAFState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UIManager$LAFState();
	void init$();
	virtual ::javax::swing::UIDefaults* getLookAndFeelDefaults();
	virtual ::javax::swing::event::SwingPropertyChangeSupport* getPropertyChangeSupport(bool create);
	virtual ::javax::swing::UIDefaults* getSystemDefaults();
	virtual void setLookAndFeelDefaults(::javax::swing::UIDefaults* x);
	virtual void setSystemDefaults(::javax::swing::UIDefaults* x);
	::java::util::Properties* swingProps = nullptr;
	$Array<::javax::swing::UIDefaults>* tables = nullptr;
	bool initialized = false;
	bool focusPolicyInitialized = false;
	::javax::swing::MultiUIDefaults* multiUIDefaults = nullptr;
	::javax::swing::LookAndFeel* lookAndFeel = nullptr;
	::javax::swing::LookAndFeel* multiLookAndFeel = nullptr;
	::java::util::Vector* auxLookAndFeels = nullptr;
	::javax::swing::event::SwingPropertyChangeSupport* changeSupport = nullptr;
	$Array<::javax::swing::UIManager$LookAndFeelInfo>* installedLAFs = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIManager$LAFState_h_