#ifndef _Test4177735_h_
#define _Test4177735_h_
//$ class Test4177735
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("DELAY")
#undef DELAY

namespace javax {
	namespace swing {
		class JColorChooser;
		class JDialog;
	}
}

class $export Test4177735 : public ::java::lang::Runnable {
	$class(Test4177735, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test4177735();
	void init$();
	static void main($StringArray* args);
	static void pause(int64_t delay);
	virtual void run() override;
	static ::javax::swing::JDialog* show(::javax::swing::JColorChooser* chooser);
	static const int64_t DELAY = (int64_t)1000;
	int32_t count = 0;
};

#pragma pop_macro("DELAY")

#endif // _Test4177735_h_