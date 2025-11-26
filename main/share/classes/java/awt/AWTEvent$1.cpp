#include <java/awt/AWTEvent$1.h>

#include <java/awt/AWTEvent.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;

namespace java {
	namespace awt {

$MethodInfo _AWTEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AWTEvent$1::*)()>(&AWTEvent$1::init$))},
	{"getAccessControlContext", "(Ljava/awt/AWTEvent;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC},
	{"getBData", "(Ljava/awt/AWTEvent;)[B", nullptr, $PUBLIC},
	{"isSystemGenerated", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC},
	{"setBData", "(Ljava/awt/AWTEvent;[B)V", nullptr, $PUBLIC},
	{"setPosted", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"setSystemGenerated", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AWTEvent$1_EnclosingMethodInfo_ = {
	"java.awt.AWTEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _AWTEvent$1_InnerClassesInfo_[] = {
	{"java.awt.AWTEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$AWTEventAccessor", "sun.awt.AWTAccessor", "AWTEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.AWTEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$AWTEventAccessor",
	nullptr,
	_AWTEvent$1_MethodInfo_,
	nullptr,
	&_AWTEvent$1_EnclosingMethodInfo_,
	_AWTEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.AWTEvent"
};

$Object* allocate$AWTEvent$1($Class* clazz) {
	return $of($alloc(AWTEvent$1));
}

void AWTEvent$1::init$() {
}

void AWTEvent$1::setPosted($AWTEvent* ev) {
	$nc(ev)->isPosted = true;
}

void AWTEvent$1::setSystemGenerated($AWTEvent* ev) {
	$nc(ev)->isSystemGenerated = true;
}

bool AWTEvent$1::isSystemGenerated($AWTEvent* ev) {
	return $nc(ev)->isSystemGenerated;
}

$AccessControlContext* AWTEvent$1::getAccessControlContext($AWTEvent* ev) {
	return $nc(ev)->getAccessControlContext();
}

$bytes* AWTEvent$1::getBData($AWTEvent* ev) {
	return $nc(ev)->bdata;
}

void AWTEvent$1::setBData($AWTEvent* ev, $bytes* bdata) {
	$set($nc(ev), bdata, bdata);
}

AWTEvent$1::AWTEvent$1() {
}

$Class* AWTEvent$1::load$($String* name, bool initialize) {
	$loadClass(AWTEvent$1, name, initialize, &_AWTEvent$1_ClassInfo_, allocate$AWTEvent$1);
	return class$;
}

$Class* AWTEvent$1::class$ = nullptr;

	} // awt
} // java