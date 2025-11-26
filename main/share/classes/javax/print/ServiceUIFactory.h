#ifndef _javax_print_ServiceUIFactory_h_
#define _javax_print_ServiceUIFactory_h_
//$ class javax.print.ServiceUIFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ABOUT_UIROLE")
#undef ABOUT_UIROLE
#pragma push_macro("ADMIN_UIROLE")
#undef ADMIN_UIROLE
#pragma push_macro("DIALOG_UI")
#undef DIALOG_UI
#pragma push_macro("JCOMPONENT_UI")
#undef JCOMPONENT_UI
#pragma push_macro("JDIALOG_UI")
#undef JDIALOG_UI
#pragma push_macro("MAIN_UIROLE")
#undef MAIN_UIROLE
#pragma push_macro("PANEL_UI")
#undef PANEL_UI
#pragma push_macro("RESERVED_UIROLE")
#undef RESERVED_UIROLE

namespace javax {
	namespace print {

class $export ServiceUIFactory : public ::java::lang::Object {
	$class(ServiceUIFactory, 0, ::java::lang::Object)
public:
	ServiceUIFactory();
	void init$();
	virtual $Object* getUI(int32_t role, $String* ui) {return nullptr;}
	virtual $StringArray* getUIClassNamesForRole(int32_t role) {return nullptr;}
	static $String* JCOMPONENT_UI;
	static $String* PANEL_UI;
	static $String* DIALOG_UI;
	static $String* JDIALOG_UI;
	static const int32_t ABOUT_UIROLE = 1;
	static const int32_t ADMIN_UIROLE = 2;
	static const int32_t MAIN_UIROLE = 3;
	static const int32_t RESERVED_UIROLE = 99;
};

	} // print
} // javax

#pragma pop_macro("ABOUT_UIROLE")
#pragma pop_macro("ADMIN_UIROLE")
#pragma pop_macro("DIALOG_UI")
#pragma pop_macro("JCOMPONENT_UI")
#pragma pop_macro("JDIALOG_UI")
#pragma pop_macro("MAIN_UIROLE")
#pragma pop_macro("PANEL_UI")
#pragma pop_macro("RESERVED_UIROLE")

#endif // _javax_print_ServiceUIFactory_h_