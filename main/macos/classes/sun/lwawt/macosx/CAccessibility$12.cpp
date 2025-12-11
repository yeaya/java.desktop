#include <sun/lwawt/macosx/CAccessibility$12.h>

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JTextArea.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextArea = ::javax::swing::JTextArea;
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$12_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$12, val$a)},
	{}
};

$MethodInfo _CAccessibility$12_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$12::*)($Accessible*)>(&CAccessibility$12::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$12_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleRole",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibility$12_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$12",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$12_FieldInfo_,
	_CAccessibility$12_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibility$12_EnclosingMethodInfo_,
	_CAccessibility$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$12($Class* clazz) {
	return $of($alloc(CAccessibility$12));
}

void CAccessibility$12::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$12::call() {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, sa, $CAccessible::getSwingAccessible(this->val$a));
	$var($String, role, $CAccessibility::getAccessibleRoleFor(this->val$a));
	if (!"text"_s->equals(role)) {
		return $of(role);
	}
	if ($instanceOf($JTextArea, sa) || $instanceOf($JEditorPane, sa)) {
		return $of("textarea"_s);
	}
	return $of(role);
}

CAccessibility$12::CAccessibility$12() {
}

$Class* CAccessibility$12::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$12, name, initialize, &_CAccessibility$12_ClassInfo_, allocate$CAccessibility$12);
	return class$;
}

$Class* CAccessibility$12::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun