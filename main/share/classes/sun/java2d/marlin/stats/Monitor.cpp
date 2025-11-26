#include <sun/java2d/marlin/stats/Monitor.h>

#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef INVALID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

$FieldInfo _Monitor_FieldInfo_[] = {
	{"INVALID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Monitor, INVALID)},
	{"start", "J", nullptr, $PRIVATE, $field(Monitor, start$)},
	{}
};

$MethodInfo _Monitor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor::*)($String*)>(&Monitor::init$))},
	{"start", "()V", nullptr, $PUBLIC, $method(static_cast<void(Monitor::*)()>(&Monitor::start))},
	{"stop", "()V", nullptr, $PUBLIC, $method(static_cast<void(Monitor::*)()>(&Monitor::stop))},
	{}
};

$ClassInfo _Monitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.stats.Monitor",
	"sun.java2d.marlin.stats.StatLong",
	nullptr,
	_Monitor_FieldInfo_,
	_Monitor_MethodInfo_
};

$Object* allocate$Monitor($Class* clazz) {
	return $of($alloc(Monitor));
}

void Monitor::init$($String* name) {
	$StatLong::init$(name);
	this->start$ = Monitor::INVALID;
}

void Monitor::start() {
	this->start$ = $System::nanoTime();
}

void Monitor::stop() {
	int64_t elapsed = $System::nanoTime() - this->start$;
	if (this->start$ != Monitor::INVALID && elapsed > (int64_t)0) {
		add(elapsed);
	}
	this->start$ = Monitor::INVALID;
}

Monitor::Monitor() {
}

$Class* Monitor::load$($String* name, bool initialize) {
	$loadClass(Monitor, name, initialize, &_Monitor_ClassInfo_, allocate$Monitor);
	return class$;
}

$Class* Monitor::class$ = nullptr;

			} // stats
		} // marlin
	} // java2d
} // sun