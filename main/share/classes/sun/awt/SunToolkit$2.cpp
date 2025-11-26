#include <sun/awt/SunToolkit$2.h>

#include <java/lang/Runnable.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _SunToolkit$2_FieldInfo_[] = {
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$2, val$when)},
	{}
};

$MethodInfo _SunToolkit$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;JJ)V", nullptr, 0, $method(static_cast<void(SunToolkit$2::*)(Object$*,$Runnable*,int64_t,int64_t)>(&SunToolkit$2::init$))},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunToolkit$2_EnclosingMethodInfo_ = {
	"sun.awt.SunToolkit",
	"executeOnEventHandlerThread",
	"(Ljava/lang/Object;Ljava/lang/Runnable;J)V"
};

$InnerClassInfo _SunToolkit$2_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunToolkit$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SunToolkit$2",
	"sun.awt.PeerEvent",
	nullptr,
	_SunToolkit$2_FieldInfo_,
	_SunToolkit$2_MethodInfo_,
	nullptr,
	&_SunToolkit$2_EnclosingMethodInfo_,
	_SunToolkit$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$2($Class* clazz) {
	return $of($alloc(SunToolkit$2));
}

void SunToolkit$2::init$(Object$* source, $Runnable* runnable, int64_t flags, int64_t val$when) {
	this->val$when = val$when;
	$PeerEvent::init$(source, runnable, flags);
}

int64_t SunToolkit$2::getWhen() {
	return this->val$when;
}

SunToolkit$2::SunToolkit$2() {
}

$Class* SunToolkit$2::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$2, name, initialize, &_SunToolkit$2_ClassInfo_, allocate$SunToolkit$2);
	return class$;
}

$Class* SunToolkit$2::class$ = nullptr;

	} // awt
} // sun