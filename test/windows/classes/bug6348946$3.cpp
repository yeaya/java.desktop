#include <bug6348946$3.h>

#include <bug6348946.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6348946 = ::bug6348946;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JPanel = ::javax::swing::JPanel;

$FieldInfo _bug6348946$3_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6348946$3, val$result)},
	{}
};

$MethodInfo _bug6348946$3_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Rectangle;)V", "()V", 0, $method(static_cast<void(bug6348946$3::*)($RectangleArray*)>(&bug6348946$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6348946$3_EnclosingMethodInfo_ = {
	"bug6348946",
	"getPanelRectangle",
	"()Ljava/awt/Rectangle;"
};

$InnerClassInfo _bug6348946$3_InnerClassesInfo_[] = {
	{"bug6348946$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6348946$3_FieldInfo_,
	_bug6348946$3_MethodInfo_,
	nullptr,
	&_bug6348946$3_EnclosingMethodInfo_,
	_bug6348946$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$3($Class* clazz) {
	return $of($alloc(bug6348946$3));
}

void bug6348946$3::init$($RectangleArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6348946$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6348946);
	$var($Point, var$0, $nc($bug6348946::panel)->getLocationOnScreen());
	$nc(this->val$result)->set(0, $$new($Rectangle, var$0, $($nc($bug6348946::panel)->getSize())));
}

bug6348946$3::bug6348946$3() {
}

$Class* bug6348946$3::load$($String* name, bool initialize) {
	$loadClass(bug6348946$3, name, initialize, &_bug6348946$3_ClassInfo_, allocate$bug6348946$3);
	return class$;
}

$Class* bug6348946$3::class$ = nullptr;