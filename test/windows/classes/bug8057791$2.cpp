#include <bug8057791$2.h>

#include <bug8057791.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $bug8057791 = ::bug8057791;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JList = ::javax::swing::JList;

$MethodInfo _bug8057791$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8057791$2::*)()>(&bug8057791$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8057791$2_EnclosingMethodInfo_ = {
	"bug8057791",
	"runColorTestCase",
	"()V"
};

$InnerClassInfo _bug8057791$2_InnerClassesInfo_[] = {
	{"bug8057791$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057791$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8057791$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8057791$2_MethodInfo_,
	nullptr,
	&_bug8057791$2_EnclosingMethodInfo_,
	_bug8057791$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8057791"
};

$Object* allocate$bug8057791$2($Class* clazz) {
	return $of($alloc(bug8057791$2));
}

void bug8057791$2::init$() {
}

void bug8057791$2::run() {
	$init($bug8057791);
	$var($Rectangle, cellBounds, $nc($bug8057791::list)->getCellBounds(0, 0));
	$nc(cellBounds)->x += $nc($($nc($bug8057791::list)->getLocationOnScreen()))->x;
	cellBounds->y += $nc($($nc($bug8057791::list)->getLocationOnScreen()))->y;
	$var($Color, foregroundColor, $nc($bug8057791::list)->getSelectionForeground());
	$var($Color, backgroundColor, $nc($bug8057791::list)->getSelectionBackground());
	$bug8057791::checkColor(foregroundColor, cellBounds);
	$bug8057791::checkColor(backgroundColor, cellBounds);
	$var($Color, changedForegroundColor, $nc(foregroundColor)->darker());
	$var($Color, changedBackgroundColor, $nc(backgroundColor)->brighter());
	$bug8057791::checkNotColor(changedForegroundColor, cellBounds);
	$bug8057791::checkNotColor(changedBackgroundColor, cellBounds);
}

bug8057791$2::bug8057791$2() {
}

$Class* bug8057791$2::load$($String* name, bool initialize) {
	$loadClass(bug8057791$2, name, initialize, &_bug8057791$2_ClassInfo_, allocate$bug8057791$2);
	return class$;
}

$Class* bug8057791$2::class$ = nullptr;