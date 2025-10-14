#include <GetUI$1.h>

#include <GetUI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $GetUI = ::GetUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

$MethodInfo _GetUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetUI$1::*)()>(&GetUI$1::init$))},
	{}
};

$EnclosingMethodInfo _GetUI$1_EnclosingMethodInfo_ = {
	"GetUI",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _GetUI$1_InnerClassesInfo_[] = {
	{"GetUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetUI$1",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_GetUI$1_MethodInfo_,
	nullptr,
	&_GetUI$1_EnclosingMethodInfo_,
	_GetUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetUI"
};

$Object* allocate$GetUI$1($Class* clazz) {
	return $of($alloc(GetUI$1));
}

void GetUI$1::init$() {
	$ComponentUI::init$();
}

GetUI$1::GetUI$1() {
}

$Class* GetUI$1::load$($String* name, bool initialize) {
	$loadClass(GetUI$1, name, initialize, &_GetUI$1_ClassInfo_, allocate$GetUI$1);
	return class$;
}

$Class* GetUI$1::class$ = nullptr;