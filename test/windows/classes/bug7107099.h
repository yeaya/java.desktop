#ifndef _bug7107099_h_
#define _bug7107099_h_
//$ class bug7107099
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTextArea;
	}
}

class $export bug7107099 : public ::java::lang::Object {
	$class(bug7107099, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7107099();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* textarea;
	static ::javax::swing::JScrollPane* scrollPane;
	static int32_t value;
	static int32_t min;
	static int32_t max;
	static int32_t extent;
};

#endif // _bug7107099_h_