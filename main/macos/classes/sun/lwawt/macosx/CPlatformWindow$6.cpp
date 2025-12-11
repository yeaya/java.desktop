#include <sun/lwawt/macosx/CPlatformWindow$6.h>

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

$MethodInfo _CPlatformWindow$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$6::*)($String*)>(&CPlatformWindow$6::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$6_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$6_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$6", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$6",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$6_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$6_EnclosingMethodInfo_,
	_CPlatformWindow$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$6($Class* clazz) {
	return $of($alloc(CPlatformWindow$6));
}

void CPlatformWindow$6::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$6::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc(c)->setStyleBits(128, $Boolean::parseBoolean($($nc($of(value))->toString())));
}

void CPlatformWindow$6::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$6::CPlatformWindow$6() {
}

$Class* CPlatformWindow$6::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$6, name, initialize, &_CPlatformWindow$6_ClassInfo_, allocate$CPlatformWindow$6);
	return class$;
}

$Class* CPlatformWindow$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun