#include <javax/swing/text/ViewFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _ViewFactory_MethodInfo_[] = {
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ViewFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.ViewFactory",
	nullptr,
	nullptr,
	nullptr,
	_ViewFactory_MethodInfo_
};

$Object* allocate$ViewFactory($Class* clazz) {
	return $of($alloc(ViewFactory));
}

$Class* ViewFactory::load$($String* name, bool initialize) {
	$loadClass(ViewFactory, name, initialize, &_ViewFactory_ClassInfo_, allocate$ViewFactory);
	return class$;
}

$Class* ViewFactory::class$ = nullptr;

		} // text
	} // swing
} // javax