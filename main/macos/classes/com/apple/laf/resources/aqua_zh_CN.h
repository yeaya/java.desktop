#ifndef _com_apple_laf_resources_aqua_zh_CN_h_
#define _com_apple_laf_resources_aqua_zh_CN_h_
//$ class com.apple.laf.resources.aqua_zh_CN
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

class aqua_zh_CN : public ::java::util::ListResourceBundle {
	$class(aqua_zh_CN, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	aqua_zh_CN();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // resources
		} // laf
	} // apple
} // com

#endif // _com_apple_laf_resources_aqua_zh_CN_h_