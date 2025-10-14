#include <bug6505523$2.h>

#include <bug6505523.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6505523 = ::bug6505523;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6505523$2_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$2, val$result)},
	{"val$row", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$2, val$row)},
	{}
};

$MethodInfo _bug6505523$2_MethodInfo_[] = {
	{"<init>", "(I[Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6505523$2::*)(int32_t,$PointArray*)>(&bug6505523$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6505523$2_EnclosingMethodInfo_ = {
	"bug6505523",
	"getRowPointToClick",
	"(I)Ljava/awt/Point;"
};

$InnerClassInfo _bug6505523$2_InnerClassesInfo_[] = {
	{"bug6505523$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6505523$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6505523$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6505523$2_FieldInfo_,
	_bug6505523$2_MethodInfo_,
	nullptr,
	&_bug6505523$2_EnclosingMethodInfo_,
	_bug6505523$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6505523"
};

$Object* allocate$bug6505523$2($Class* clazz) {
	return $of($alloc(bug6505523$2));
}

void bug6505523$2::init$(int32_t val$row, $PointArray* val$result) {
	this->val$row = val$row;
	$set(this, val$result, val$result);
}

void bug6505523$2::run() {
	$init($bug6505523);
	$var($Rectangle, rect, $nc($bug6505523::tree)->getRowBounds(this->val$row));
	$var($Point, point, $new($Point, $nc(rect)->x - 5, rect->y + rect->height / 2));
	$SwingUtilities::convertPointToScreen(point, $bug6505523::tree);
	$nc(this->val$result)->set(0, point);
}

bug6505523$2::bug6505523$2() {
}

$Class* bug6505523$2::load$($String* name, bool initialize) {
	$loadClass(bug6505523$2, name, initialize, &_bug6505523$2_ClassInfo_, allocate$bug6505523$2);
	return class$;
}

$Class* bug6505523$2::class$ = nullptr;