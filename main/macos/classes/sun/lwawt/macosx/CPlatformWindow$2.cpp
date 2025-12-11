#include <sun/lwawt/macosx/CPlatformWindow$2.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformWindow$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$2::*)($String*)>(&CPlatformWindow$2::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$2_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$2_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$2", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$2",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$2_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$2_EnclosingMethodInfo_,
	_CPlatformWindow$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$2($Class* clazz) {
	return $of($alloc(CPlatformWindow$2));
}

void CPlatformWindow$2::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$2::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc(c)->setStyleBits(4, $Boolean::parseBoolean($($nc($of(value))->toString())));
}

void CPlatformWindow$2::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$2::CPlatformWindow$2() {
}

$Class* CPlatformWindow$2::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$2, name, initialize, &_CPlatformWindow$2_ClassInfo_, allocate$CPlatformWindow$2);
	return class$;
}

$Class* CPlatformWindow$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun