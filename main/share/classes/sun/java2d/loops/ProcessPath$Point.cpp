#include <sun/java2d/loops/ProcessPath$Point.h>

#include <sun/java2d/loops/ProcessPath$Edge.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$Edge = ::sun::java2d::loops::ProcessPath$Edge;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$Point_FieldInfo_[] = {
	{"x", "I", nullptr, $PUBLIC, $field(ProcessPath$Point, x)},
	{"y", "I", nullptr, $PUBLIC, $field(ProcessPath$Point, y)},
	{"lastPoint", "Z", nullptr, $PUBLIC, $field(ProcessPath$Point, lastPoint)},
	{"prev", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, prev)},
	{"next", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, next)},
	{"nextByY", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, nextByY)},
	{"edge", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, $PUBLIC, $field(ProcessPath$Point, edge)},
	{}
};

$MethodInfo _ProcessPath$Point_MethodInfo_[] = {
	{"<init>", "(IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$Point::*)(int32_t,int32_t,bool)>(&ProcessPath$Point::init$))},
	{}
};

$InnerClassInfo _ProcessPath$Point_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$Point", "sun.java2d.loops.ProcessPath", "Point", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessPath$Point_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$Point",
	"java.lang.Object",
	nullptr,
	_ProcessPath$Point_FieldInfo_,
	_ProcessPath$Point_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$Point_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$Point($Class* clazz) {
	return $of($alloc(ProcessPath$Point));
}

void ProcessPath$Point::init$(int32_t x, int32_t y, bool lastPoint) {
	this->x = x;
	this->y = y;
	this->lastPoint = lastPoint;
}

ProcessPath$Point::ProcessPath$Point() {
}

$Class* ProcessPath$Point::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$Point, name, initialize, &_ProcessPath$Point_ClassInfo_, allocate$ProcessPath$Point);
	return class$;
}

$Class* ProcessPath$Point::class$ = nullptr;

		} // loops
	} // java2d
} // sun