#ifndef _bug6872503_h_
#define _bug6872503_h_
//$ class bug6872503
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JLayer;
	}
}

class $export bug6872503 : public ::java::lang::Object {
	$class(bug6872503, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6872503();
	void init$();
	static void createGui();
	static bool isLayerEventControllerAdded();
	static bool layerEventControllerMaskEquals(int64_t mask);
	static void main($StringArray* args);
	static ::javax::swing::JLayer* l1;
	static ::javax::swing::JLayer* l2;
};

#endif // _bug6872503_h_