#include <sun/lwawt/macosx/CPlatformWindow$3.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Window.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformWindow$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$3::*)($String*)>(&CPlatformWindow$3::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$3", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$3",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$3_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$3_EnclosingMethodInfo_,
	_CPlatformWindow$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$3($Class* clazz) {
	return $of($alloc(CPlatformWindow$3));
}

void CPlatformWindow$3::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$3::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc($nc(c)->target)->setOpacity(value == nullptr ? 1.0f : $Float::parseFloat($($nc($of(value))->toString())));
}

void CPlatformWindow$3::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$3::CPlatformWindow$3() {
}

$Class* CPlatformWindow$3::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$3, name, initialize, &_CPlatformWindow$3_ClassInfo_, allocate$CPlatformWindow$3);
	return class$;
}

$Class* CPlatformWindow$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun