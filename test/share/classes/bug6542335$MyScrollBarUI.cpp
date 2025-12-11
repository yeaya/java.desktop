#include <bug6542335$MyScrollBarUI.h>

#include <bug6542335.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

$MethodInfo _bug6542335$MyScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6542335$MyScrollBarUI::*)()>(&bug6542335$MyScrollBarUI::init$))},
	{"getThumbBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6542335$MyScrollBarUI_InnerClassesInfo_[] = {
	{"bug6542335$MyScrollBarUI", "bug6542335", "MyScrollBarUI", $STATIC},
	{}
};

$ClassInfo _bug6542335$MyScrollBarUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6542335$MyScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	nullptr,
	nullptr,
	_bug6542335$MyScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6542335$MyScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6542335"
};

$Object* allocate$bug6542335$MyScrollBarUI($Class* clazz) {
	return $of($alloc(bug6542335$MyScrollBarUI));
}

void bug6542335$MyScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
}

$Rectangle* bug6542335$MyScrollBarUI::getThumbBounds() {
	return $BasicScrollBarUI::getThumbBounds();
}

bug6542335$MyScrollBarUI::bug6542335$MyScrollBarUI() {
}

$Class* bug6542335$MyScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(bug6542335$MyScrollBarUI, name, initialize, &_bug6542335$MyScrollBarUI_ClassInfo_, allocate$bug6542335$MyScrollBarUI);
	return class$;
}

$Class* bug6542335$MyScrollBarUI::class$ = nullptr;