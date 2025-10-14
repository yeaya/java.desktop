#include <javax/print/FlavorException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _FlavorException_MethodInfo_[] = {
	{"getUnsupportedFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FlavorException_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.FlavorException",
	nullptr,
	nullptr,
	nullptr,
	_FlavorException_MethodInfo_
};

$Object* allocate$FlavorException($Class* clazz) {
	return $of($alloc(FlavorException));
}

$Class* FlavorException::load$($String* name, bool initialize) {
	$loadClass(FlavorException, name, initialize, &_FlavorException_ClassInfo_, allocate$FlavorException);
	return class$;
}

$Class* FlavorException::class$ = nullptr;

	} // print
} // javax