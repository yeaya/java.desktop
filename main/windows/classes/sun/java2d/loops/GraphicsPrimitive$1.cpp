#include <sun/java2d/loops/GraphicsPrimitive$1.h>

#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _GraphicsPrimitive$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GraphicsPrimitive$1::*)()>(&GraphicsPrimitive$1::init$))},
	{"run", "()Ljava/io/FileOutputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GraphicsPrimitive$1_EnclosingMethodInfo_ = {
	"sun.java2d.loops.GraphicsPrimitive",
	"getTraceOutputFile",
	"()Ljava/io/PrintStream;"
};

$InnerClassInfo _GraphicsPrimitive$1_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitive$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GraphicsPrimitive$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitive$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_GraphicsPrimitive$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/FileOutputStream;>;",
	&_GraphicsPrimitive$1_EnclosingMethodInfo_,
	_GraphicsPrimitive$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitive"
};

$Object* allocate$GraphicsPrimitive$1($Class* clazz) {
	return $of($alloc(GraphicsPrimitive$1));
}

void GraphicsPrimitive$1::init$() {
}

$Object* GraphicsPrimitive$1::run() {
	try {
		$init($GraphicsPrimitive);
		return $of($new($FileOutputStream, $GraphicsPrimitive::tracefile));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

GraphicsPrimitive$1::GraphicsPrimitive$1() {
}

$Class* GraphicsPrimitive$1::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitive$1, name, initialize, &_GraphicsPrimitive$1_ClassInfo_, allocate$GraphicsPrimitive$1);
	return class$;
}

$Class* GraphicsPrimitive$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun