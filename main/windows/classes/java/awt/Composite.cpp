#include <java/awt/Composite.h>

#include <java/awt/CompositeContext.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CompositeContext = ::java::awt::CompositeContext;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Composite_MethodInfo_[] = {
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;Ljava/awt/RenderingHints;)Ljava/awt/CompositeContext;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Composite_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Composite",
	nullptr,
	nullptr,
	nullptr,
	_Composite_MethodInfo_
};

$Object* allocate$Composite($Class* clazz) {
	return $of($alloc(Composite));
}

$Class* Composite::load$($String* name, bool initialize) {
	$loadClass(Composite, name, initialize, &_Composite_ClassInfo_, allocate$Composite);
	return class$;
}

$Class* Composite::class$ = nullptr;

	} // awt
} // java