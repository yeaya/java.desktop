#include <sun/awt/util/PerformanceLogger$TimeData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _PerformanceLogger$TimeData_FieldInfo_[] = {
	{"message", "Ljava/lang/String;", nullptr, 0, $field(PerformanceLogger$TimeData, message)},
	{"time", "J", nullptr, 0, $field(PerformanceLogger$TimeData, time)},
	{}
};

$MethodInfo _PerformanceLogger$TimeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;J)V", nullptr, 0, $method(static_cast<void(PerformanceLogger$TimeData::*)($String*,int64_t)>(&PerformanceLogger$TimeData::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, 0},
	{"getTime", "()J", nullptr, 0},
	{}
};

$InnerClassInfo _PerformanceLogger$TimeData_InnerClassesInfo_[] = {
	{"sun.awt.util.PerformanceLogger$TimeData", "sun.awt.util.PerformanceLogger", "TimeData", $STATIC},
	{}
};

$ClassInfo _PerformanceLogger$TimeData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.util.PerformanceLogger$TimeData",
	"java.lang.Object",
	nullptr,
	_PerformanceLogger$TimeData_FieldInfo_,
	_PerformanceLogger$TimeData_MethodInfo_,
	nullptr,
	nullptr,
	_PerformanceLogger$TimeData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.util.PerformanceLogger"
};

$Object* allocate$PerformanceLogger$TimeData($Class* clazz) {
	return $of($alloc(PerformanceLogger$TimeData));
}

void PerformanceLogger$TimeData::init$($String* message, int64_t time) {
	$set(this, message, message);
	this->time = time;
}

$String* PerformanceLogger$TimeData::getMessage() {
	return this->message;
}

int64_t PerformanceLogger$TimeData::getTime() {
	return this->time;
}

PerformanceLogger$TimeData::PerformanceLogger$TimeData() {
}

$Class* PerformanceLogger$TimeData::load$($String* name, bool initialize) {
	$loadClass(PerformanceLogger$TimeData, name, initialize, &_PerformanceLogger$TimeData_ClassInfo_, allocate$PerformanceLogger$TimeData);
	return class$;
}

$Class* PerformanceLogger$TimeData::class$ = nullptr;

		} // util
	} // awt
} // sun