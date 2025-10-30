#include <javax/accessibility/AccessibleContext$1.h>

#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor$AccessibleContextAccessor = ::sun::awt::AWTAccessor$AccessibleContextAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleContext$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AccessibleContext$1::*)()>(&AccessibleContext$1::init$))},
	{"getAppContext", "(Ljavax/accessibility/AccessibleContext;)Lsun/awt/AppContext;", nullptr, $PUBLIC},
	{"getNativeAXResource", "(Ljavax/accessibility/AccessibleContext;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setAppContext", "(Ljavax/accessibility/AccessibleContext;Lsun/awt/AppContext;)V", nullptr, $PUBLIC},
	{"setNativeAXResource", "(Ljavax/accessibility/AccessibleContext;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AccessibleContext$1_EnclosingMethodInfo_ = {
	"javax.accessibility.AccessibleContext",
	nullptr,
	nullptr
};

$InnerClassInfo _AccessibleContext$1_InnerClassesInfo_[] = {
	{"javax.accessibility.AccessibleContext$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$AccessibleContextAccessor", "sun.awt.AWTAccessor", "AccessibleContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.accessibility.AccessibleContext$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$AccessibleContextAccessor",
	nullptr,
	_AccessibleContext$1_MethodInfo_,
	nullptr,
	&_AccessibleContext$1_EnclosingMethodInfo_,
	_AccessibleContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.accessibility.AccessibleContext"
};

$Object* allocate$AccessibleContext$1($Class* clazz) {
	return $of($alloc(AccessibleContext$1));
}

void AccessibleContext$1::init$() {
}

void AccessibleContext$1::setAppContext($AccessibleContext* accessibleContext, $AppContext* appContext) {
	$set($nc(accessibleContext), targetAppContext, appContext);
}

$AppContext* AccessibleContext$1::getAppContext($AccessibleContext* accessibleContext) {
	return $nc(accessibleContext)->targetAppContext;
}

$Object* AccessibleContext$1::getNativeAXResource($AccessibleContext* accessibleContext) {
	return $of($nc(accessibleContext)->nativeAXResource);
}

void AccessibleContext$1::setNativeAXResource($AccessibleContext* accessibleContext, Object$* value) {
	$set($nc(accessibleContext), nativeAXResource, value);
}

AccessibleContext$1::AccessibleContext$1() {
}

$Class* AccessibleContext$1::load$($String* name, bool initialize) {
	$loadClass(AccessibleContext$1, name, initialize, &_AccessibleContext$1_ClassInfo_, allocate$AccessibleContext$1);
	return class$;
}

$Class* AccessibleContext$1::class$ = nullptr;

	} // accessibility
} // javax