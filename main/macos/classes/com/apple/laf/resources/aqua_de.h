#ifndef _com_apple_laf_resources_aqua_de_h_
#define _com_apple_laf_resources_aqua_de_h_
//$ class com.apple.laf.resources.aqua_de
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

class aqua_de : public ::java::util::ListResourceBundle {
	$class(aqua_de, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	aqua_de();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // laf
	} // apple
} // com

#endif // _com_apple_laf_resources_aqua_de_h_