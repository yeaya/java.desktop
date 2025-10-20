#include <sun/java2d/loops/GraphicsPrimitiveProxy.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _GraphicsPrimitiveProxy_FieldInfo_[] = {
	{"owner", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(GraphicsPrimitiveProxy, owner)},
	{"relativeClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GraphicsPrimitiveProxy, relativeClassName)},
	{}
};

$MethodInfo _GraphicsPrimitiveProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", $PUBLIC, $method(static_cast<void(GraphicsPrimitiveProxy::*)($Class*,$String*,$String*,int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitiveProxy::init$))},
	{"getPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&GraphicsPrimitiveProxy::getPackageName))},
	{"instantiate", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, 0},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GraphicsPrimitiveProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitiveProxy",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_GraphicsPrimitiveProxy_FieldInfo_,
	_GraphicsPrimitiveProxy_MethodInfo_
};

$Object* allocate$GraphicsPrimitiveProxy($Class* clazz) {
	return $of($alloc(GraphicsPrimitiveProxy));
}

void GraphicsPrimitiveProxy::init$($Class* owner, $String* relativeClassName, $String* methodSignature, int32_t primID, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(methodSignature, primID, srctype, comptype, dsttype);
	$set(this, owner, owner);
	$set(this, relativeClassName, relativeClassName);
}

$GraphicsPrimitive* GraphicsPrimitiveProxy::instantiate() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, name, $str({$(getPackageName($($nc(this->owner)->getName()))), "."_s, this->relativeClassName}));
	try {
		$Class* clazz = $Class::forName(name);
		$var($GraphicsPrimitive, p, $cast($GraphicsPrimitive, $nc($($nc(clazz)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		if (!satisfiesSameAs(p)) {
			$throwNew($RuntimeException, $$str({"Primitive "_s, p, " incompatible with proxy for "_s, name}));
		}
		return p;
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throwNew($RuntimeException, $(ex->toString()));
	}
	$shouldNotReachHere();
}

$String* GraphicsPrimitiveProxy::getPackageName($String* className) {
	$init(GraphicsPrimitiveProxy);
	int32_t lastDotIdx = $nc(className)->lastIndexOf((int32_t)u'.');
	if (lastDotIdx < 0) {
		return className;
	}
	return className->substring(0, lastDotIdx);
}

$GraphicsPrimitive* GraphicsPrimitiveProxy::traceWrap() {
	return $nc($(instantiate()))->traceWrap();
}

GraphicsPrimitiveProxy::GraphicsPrimitiveProxy() {
}

$Class* GraphicsPrimitiveProxy::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitiveProxy, name, initialize, &_GraphicsPrimitiveProxy_ClassInfo_, allocate$GraphicsPrimitiveProxy);
	return class$;
}

$Class* GraphicsPrimitiveProxy::class$ = nullptr;

		} // loops
	} // java2d
} // sun