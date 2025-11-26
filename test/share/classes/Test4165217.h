#ifndef _Test4165217_h_
#define _Test4165217_h_
//$ class Test4165217
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JColorChooser;
	}
}

class $export Test4165217 : public ::java::lang::Object {
	$class(Test4165217, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test4165217();
	void init$();
	static ::javax::swing::JColorChooser* copy(::javax::swing::JColorChooser* chooser);
	static $Object* deserialize($bytes* array);
	static void main($StringArray* args);
	static $bytes* serialize(Object$* object);
};

#endif // _Test4165217_h_