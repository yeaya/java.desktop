#include <sun/java2d/loops/ProcessPath$Edge.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$Edge_FieldInfo_[] = {
	{"x", "I", nullptr, 0, $field(ProcessPath$Edge, x)},
	{"dx", "I", nullptr, 0, $field(ProcessPath$Edge, dx)},
	{"p", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, 0, $field(ProcessPath$Edge, p)},
	{"dir", "I", nullptr, 0, $field(ProcessPath$Edge, dir)},
	{"prev", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, 0, $field(ProcessPath$Edge, prev)},
	{"next", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, 0, $field(ProcessPath$Edge, next)},
	{}
};

$MethodInfo _ProcessPath$Edge_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/ProcessPath$Point;III)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$Edge::*)($ProcessPath$Point*,int32_t,int32_t,int32_t)>(&ProcessPath$Edge::init$))},
	{}
};

$InnerClassInfo _ProcessPath$Edge_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$Edge", "sun.java2d.loops.ProcessPath", "Edge", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessPath$Edge_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$Edge",
	"java.lang.Object",
	nullptr,
	_ProcessPath$Edge_FieldInfo_,
	_ProcessPath$Edge_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$Edge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$Edge($Class* clazz) {
	return $of($alloc(ProcessPath$Edge));
}

void ProcessPath$Edge::init$($ProcessPath$Point* p, int32_t x, int32_t dx, int32_t dir) {
	$set(this, p, p);
	this->x = x;
	this->dx = dx;
	this->dir = dir;
}

ProcessPath$Edge::ProcessPath$Edge() {
}

$Class* ProcessPath$Edge::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$Edge, name, initialize, &_ProcessPath$Edge_ClassInfo_, allocate$ProcessPath$Edge);
	return class$;
}

$Class* ProcessPath$Edge::class$ = nullptr;

		} // loops
	} // java2d
} // sun