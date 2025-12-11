#include <sun/lwawt/macosx/CAccessibility$14.h>

#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$14_FieldInfo_[] = {
	{"val$at", "Ljavax/accessibility/AccessibleText;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$14, val$at)},
	{}
};

$MethodInfo _CAccessibility$14_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleText;)V", "()V", 0, $method(static_cast<void(CAccessibility$14::*)($AccessibleText*)>(&CAccessibility$14::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$14_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getCharCount",
	"(Ljavax/accessibility/AccessibleText;Ljava/awt/Component;)I"
};

$InnerClassInfo _CAccessibility$14_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$14", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$14_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$14",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$14_FieldInfo_,
	_CAccessibility$14_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_CAccessibility$14_EnclosingMethodInfo_,
	_CAccessibility$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$14($Class* clazz) {
	return $of($alloc(CAccessibility$14));
}

void CAccessibility$14::init$($AccessibleText* val$at) {
	$set(this, val$at, val$at);
}

$Object* CAccessibility$14::call() {
	return $of($Integer::valueOf($nc(this->val$at)->getCharCount()));
}

CAccessibility$14::CAccessibility$14() {
}

$Class* CAccessibility$14::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$14, name, initialize, &_CAccessibility$14_ClassInfo_, allocate$CAccessibility$14);
	return class$;
}

$Class* CAccessibility$14::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun