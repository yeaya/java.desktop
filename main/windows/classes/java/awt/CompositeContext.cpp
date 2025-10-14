#include <java/awt/CompositeContext.h>

#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _CompositeContext_MethodInfo_[] = {
	{"compose", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CompositeContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.CompositeContext",
	nullptr,
	nullptr,
	nullptr,
	_CompositeContext_MethodInfo_
};

$Object* allocate$CompositeContext($Class* clazz) {
	return $of($alloc(CompositeContext));
}

$Class* CompositeContext::load$($String* name, bool initialize) {
	$loadClass(CompositeContext, name, initialize, &_CompositeContext_ClassInfo_, allocate$CompositeContext);
	return class$;
}

$Class* CompositeContext::class$ = nullptr;

	} // awt
} // java