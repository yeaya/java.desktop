#ifndef _com_apple_laf_resources_aqua_h_
#define _com_apple_laf_resources_aqua_h_
//$ class com.apple.laf.resources.aqua
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

class aqua : public ::java::util::ListResourceBundle {
	$class(aqua, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	aqua();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // laf
	} // apple
} // com

#endif // _com_apple_laf_resources_aqua_h_