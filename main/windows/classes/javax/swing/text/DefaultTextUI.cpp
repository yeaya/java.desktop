#include <javax/swing/text/DefaultTextUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace text {
$CompoundAttribute _DefaultTextUI_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$MethodInfo _DefaultTextUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DefaultTextUI::*)()>(&DefaultTextUI::init$))},
	{}
};

$ClassInfo _DefaultTextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.DefaultTextUI",
	"javax.swing.plaf.basic.BasicTextUI",
	nullptr,
	nullptr,
	_DefaultTextUI_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DefaultTextUI_Annotations_
};

$Object* allocate$DefaultTextUI($Class* clazz) {
	return $of($alloc(DefaultTextUI));
}

void DefaultTextUI::init$() {
	$BasicTextUI::init$();
}

DefaultTextUI::DefaultTextUI() {
}

$Class* DefaultTextUI::load$($String* name, bool initialize) {
	$loadClass(DefaultTextUI, name, initialize, &_DefaultTextUI_ClassInfo_, allocate$DefaultTextUI);
	return class$;
}

$Class* DefaultTextUI::class$ = nullptr;

		} // text
	} // swing
} // javax