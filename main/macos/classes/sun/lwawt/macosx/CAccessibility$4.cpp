#include <sun/lwawt/macosx/CAccessibility$4.h>

#include <java/awt/Dimension.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$4_FieldInfo_[] = {
	{"val$ac", "Ljavax/accessibility/AccessibleComponent;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$4, val$ac)},
	{}
};

$MethodInfo _CAccessibility$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleComponent;)V", "()V", 0, $method(static_cast<void(CAccessibility$4::*)($AccessibleComponent*)>(&CAccessibility$4::init$))},
	{"call", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$4_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getSize",
	"(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Dimension;"
};

$InnerClassInfo _CAccessibility$4_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$4",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$4_FieldInfo_,
	_CAccessibility$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Dimension;>;",
	&_CAccessibility$4_EnclosingMethodInfo_,
	_CAccessibility$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$4($Class* clazz) {
	return $of($alloc(CAccessibility$4));
}

void CAccessibility$4::init$($AccessibleComponent* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$4::call() {
	return $of($nc(this->val$ac)->getSize());
}

CAccessibility$4::CAccessibility$4() {
}

$Class* CAccessibility$4::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$4, name, initialize, &_CAccessibility$4_ClassInfo_, allocate$CAccessibility$4);
	return class$;
}

$Class* CAccessibility$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun