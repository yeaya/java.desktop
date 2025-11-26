#ifndef _TextViewOOM_h_
#define _TextViewOOM_h_
//$ class TextViewOOM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("N")
#undef N
#pragma push_macro("STRING")
#undef STRING

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export TextViewOOM : public ::java::lang::Object {
	$class(TextViewOOM, 0, ::java::lang::Object)
public:
	TextViewOOM();
	void init$();
	static void createAndShowGUI();
	static void lambda$main$0(::java::lang::StringBuilder* sb);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* ta;
	static $String* STRING;
	static const int32_t N = 5000;
};

#pragma pop_macro("N")
#pragma pop_macro("STRING")

#endif // _TextViewOOM_h_