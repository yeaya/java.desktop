#include <sun/lwawt/macosx/CAccessibleText$8.h>

#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$8_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$8, val$a)},
	{}
};

$MethodInfo _CAccessibleText$8_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibleText$8::*)($Accessible*)>(&CAccessibleText$8::init$))},
	{"call", "()[I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$8_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getVisibleCharacterRange",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I"
};

$InnerClassInfo _CAccessibleText$8_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$8",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$8_FieldInfo_,
	_CAccessibleText$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
	&_CAccessibleText$8_EnclosingMethodInfo_,
	_CAccessibleText$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$8($Class* clazz) {
	return $of($alloc(CAccessibleText$8));
}

void CAccessibleText$8::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$8::call() {
	return $of($CAccessibleText::getVisibleCharacterRange(this->val$a));
}

CAccessibleText$8::CAccessibleText$8() {
}

$Class* CAccessibleText$8::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$8, name, initialize, &_CAccessibleText$8_ClassInfo_, allocate$CAccessibleText$8);
	return class$;
}

$Class* CAccessibleText$8::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun