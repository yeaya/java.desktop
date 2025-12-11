#include <sun/lwawt/macosx/CAccessibleText$10.h>

#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$10_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$10, val$a)},
	{}
};

$MethodInfo _CAccessibleText$10_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibleText$10::*)($Accessible*)>(&CAccessibleText$10::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$10_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getLineNumberForInsertionPoint",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)I"
};

$InnerClassInfo _CAccessibleText$10_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$10",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$10_FieldInfo_,
	_CAccessibleText$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_CAccessibleText$10_EnclosingMethodInfo_,
	_CAccessibleText$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$10($Class* clazz) {
	return $of($alloc(CAccessibleText$10));
}

void CAccessibleText$10::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$10::call() {
	return $of($Integer::valueOf($CAccessibleText::getLineNumberForInsertionPoint(this->val$a)));
}

CAccessibleText$10::CAccessibleText$10() {
}

$Class* CAccessibleText$10::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$10, name, initialize, &_CAccessibleText$10_ClassInfo_, allocate$CAccessibleText$10);
	return class$;
}

$Class* CAccessibleText$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun