#include <sun/java2d/loops/ProcessPath$FillData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$FillData_FieldInfo_[] = {
	{"plgPnts", "Ljava/util/List;", "Ljava/util/List<Lsun/java2d/loops/ProcessPath$Point;>;", 0, $field(ProcessPath$FillData, plgPnts)},
	{"plgYMin", "I", nullptr, $PUBLIC, $field(ProcessPath$FillData, plgYMin)},
	{"plgYMax", "I", nullptr, $PUBLIC, $field(ProcessPath$FillData, plgYMax)},
	{}
};

$MethodInfo _ProcessPath$FillData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$FillData::*)()>(&ProcessPath$FillData::init$))},
	{"addPoint", "(IIZ)V", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isEnded", "()Z", nullptr, $PUBLIC},
	{"setEnded", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessPath$FillData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$FillData", "sun.java2d.loops.ProcessPath", "FillData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessPath$FillData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$FillData",
	"java.lang.Object",
	nullptr,
	_ProcessPath$FillData_FieldInfo_,
	_ProcessPath$FillData_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$FillData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$FillData($Class* clazz) {
	return $of($alloc(ProcessPath$FillData));
}

void ProcessPath$FillData::init$() {
	$set(this, plgPnts, $new($Vector, 256));
}

void ProcessPath$FillData::addPoint(int32_t x, int32_t y, bool lastPoint) {
	if ($nc(this->plgPnts)->size() == 0) {
		this->plgYMin = (this->plgYMax = y);
	} else {
		this->plgYMin = (this->plgYMin > y) ? y : this->plgYMin;
		this->plgYMax = (this->plgYMax < y) ? y : this->plgYMax;
	}
	$nc(this->plgPnts)->add($$new($ProcessPath$Point, x, y, lastPoint));
}

bool ProcessPath$FillData::isEmpty() {
	return $nc(this->plgPnts)->size() == 0;
}

bool ProcessPath$FillData::isEnded() {
	return $nc(($cast($ProcessPath$Point, $($nc(this->plgPnts)->get($nc(this->plgPnts)->size() - 1)))))->lastPoint;
}

bool ProcessPath$FillData::setEnded() {
	return $nc(($cast($ProcessPath$Point, $($nc(this->plgPnts)->get($nc(this->plgPnts)->size() - 1)))))->lastPoint = true;
}

ProcessPath$FillData::ProcessPath$FillData() {
}

$Class* ProcessPath$FillData::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$FillData, name, initialize, &_ProcessPath$FillData_ClassInfo_, allocate$ProcessPath$FillData);
	return class$;
}

$Class* ProcessPath$FillData::class$ = nullptr;

		} // loops
	} // java2d
} // sun