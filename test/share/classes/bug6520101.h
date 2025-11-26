#ifndef _bug6520101_h_
#define _bug6520101_h_
//$ class bug6520101
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("ALWAYS_NEW_INSTANCE")
#undef ALWAYS_NEW_INSTANCE
#pragma push_macro("ATTEMPTS")
#undef ATTEMPTS
#pragma push_macro("AUTO_CLOSE_DIALOG")
#undef AUTO_CLOSE_DIALOG
#pragma push_macro("CHOOSER")
#undef CHOOSER
#pragma push_macro("DO_GC_EACH_INTERVAL")
#undef DO_GC_EACH_INTERVAL
#pragma push_macro("INTERVAL")
#undef INTERVAL
#pragma push_macro("UPDATE_UI_EACH_INTERVAL")
#undef UPDATE_UI_EACH_INTERVAL

namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

class $export bug6520101 : public ::java::lang::Runnable {
	$class(bug6520101, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6520101();
	void init$(::javax::swing::JFileChooser* chooser);
	static void doAttempt();
	static void main($StringArray* args);
	virtual void run() override;
	static const int32_t ATTEMPTS = 50;
	static const int32_t INTERVAL = 100;
	static const bool ALWAYS_NEW_INSTANCE = false;
	static const bool DO_GC_EACH_INTERVAL = false;
	static const bool UPDATE_UI_EACH_INTERVAL = true;
	static const bool AUTO_CLOSE_DIALOG = true;
	static ::javax::swing::JFileChooser* CHOOSER;
	::javax::swing::JFileChooser* chooser = nullptr;
};

#pragma pop_macro("ALWAYS_NEW_INSTANCE")
#pragma pop_macro("ATTEMPTS")
#pragma pop_macro("AUTO_CLOSE_DIALOG")
#pragma pop_macro("CHOOSER")
#pragma pop_macro("DO_GC_EACH_INTERVAL")
#pragma pop_macro("INTERVAL")
#pragma pop_macro("UPDATE_UI_EACH_INTERVAL")

#endif // _bug6520101_h_