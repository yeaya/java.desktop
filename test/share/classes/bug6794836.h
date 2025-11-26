#ifndef _bug6794836_h_
#define _bug6794836_h_
//$ class bug6794836
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSliderUI;
			}
		}
	}
}

class $export bug6794836 : public ::java::lang::Object {
	$class(bug6794836, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6794836();
	void init$();
	static void fail($String* s);
	static $Object* invokeMethod($String* name, ::javax::swing::plaf::basic::BasicSliderUI* ui);
	static void main($StringArray* args);
	virtual void run();
};

#endif // _bug6794836_h_