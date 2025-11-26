#ifndef _CleanInternalStorageOnSetText_h_
#define _CleanInternalStorageOnSetText_h_
//$ class CleanInternalStorageOnSetText
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JPasswordField;
	}
}

class $export CleanInternalStorageOnSetText : public ::java::lang::Object {
	$class(CleanInternalStorageOnSetText, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CleanInternalStorageOnSetText();
	void init$();
	static $chars* getInternalArray(::javax::swing::JPasswordField* pf);
	static void lambda$main$0();
	static void main($StringArray* args);
	static void test(::javax::swing::JPasswordField* pf, $String* text, bool makeGap);
	static void testStorage(bool makeGap, ::javax::swing::JPasswordField* pf);
};

#endif // _CleanInternalStorageOnSetText_h_