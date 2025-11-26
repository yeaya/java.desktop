#ifndef _bug5074573_h_
#define _bug5074573_h_
//$ class bug5074573
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

class $export bug5074573 : public ::java::lang::Object {
	$class(bug5074573, 0, ::java::lang::Object)
public:
	bug5074573();
	void init$();
	static int32_t getCtrlKey();
	static $String* getText();
	static void initialize($Class* textComponentClass);
	static void main($StringArray* args);
	static bool test($Class* textComponentClass);
	static ::javax::swing::text::JTextComponent* textComponent;
	static $String* testString;
	static $String* resultString;
	static ::java::util::List* textClasses;
};

#endif // _bug5074573_h_