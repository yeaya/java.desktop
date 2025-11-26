#include <sun/awt/X11/InfoWindow$Closer.h>

#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Closer$1.h>
#include <sun/awt/X11/InfoWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Closer$1 = ::sun::awt::X11::InfoWindow$Closer$1;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Closer_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Closer, this$0)},
	{"action", "Ljava/lang/Runnable;", nullptr, 0, $field(InfoWindow$Closer, action)},
	{"time", "I", nullptr, 0, $field(InfoWindow$Closer, time)},
	{}
};

$MethodInfo _InfoWindow$Closer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow;)V", nullptr, $PRIVATE, $method(static_cast<void(InfoWindow$Closer::*)($InfoWindow*)>(&InfoWindow$Closer::init$))},
	{"close", "()V", nullptr, 0},
	{"doClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(InfoWindow$Closer::*)()>(&InfoWindow$Closer::doClose))},
	{"run", "()V", nullptr, $PUBLIC},
	{"schedule", "()V", nullptr, 0},
	{"set", "(Ljava/lang/Runnable;I)V", nullptr, 0},
	{}
};

$InnerClassInfo _InfoWindow$Closer_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Closer", "sun.awt.X11.InfoWindow", "Closer", $PRIVATE},
	{"sun.awt.X11.InfoWindow$Closer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Closer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Closer",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Closer_FieldInfo_,
	_InfoWindow$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Closer($Class* clazz) {
	return $of($alloc(InfoWindow$Closer));
}

void InfoWindow$Closer::init$($InfoWindow* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Closer::run() {
	doClose();
}

void InfoWindow$Closer::set($Runnable* action, int32_t time) {
	$set(this, action, action);
	this->time = time;
}

void InfoWindow$Closer::schedule() {
	$XToolkit::schedule(this, this->time);
}

void InfoWindow$Closer::close() {
	$XToolkit::remove(this);
	doClose();
}

void InfoWindow$Closer::doClose() {
	$SunToolkit::executeOnEventHandlerThread(this->this$0, $$new($InfoWindow$Closer$1, this));
}

InfoWindow$Closer::InfoWindow$Closer() {
}

$Class* InfoWindow$Closer::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Closer, name, initialize, &_InfoWindow$Closer_ClassInfo_, allocate$InfoWindow$Closer);
	return class$;
}

$Class* InfoWindow$Closer::class$ = nullptr;

		} // X11
	} // awt
} // sun