#ifndef _apple_laf_JRSUIUtils$TabbedPane_h_
#define _apple_laf_JRSUIUtils$TabbedPane_h_
//$ class apple.laf.JRSUIUtils$TabbedPane
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {

class JRSUIUtils$TabbedPane : public ::java::lang::Object {
	$class(JRSUIUtils$TabbedPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIUtils$TabbedPane();
	void init$();
	static bool shouldUseTabbedPaneContrastUI();
	static bool useLegacyTabs();
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIUtils$TabbedPane_h_