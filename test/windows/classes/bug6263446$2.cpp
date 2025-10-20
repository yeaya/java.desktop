#include <bug6263446$2.h>

#include <bug6263446.h>
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
using $bug6263446 = ::bug6263446;
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

$FieldInfo _bug6263446$2_FieldInfo_[] = {
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446$2, val$result)},
	{}
};

$MethodInfo _bug6263446$2_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug6263446$2::*)($PointArray*)>(&bug6263446$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446$2_EnclosingMethodInfo_ = {
	"bug6263446",
	"getClickPoint",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug6263446$2_InnerClassesInfo_[] = {
	{"bug6263446$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6263446$2_FieldInfo_,
	_bug6263446$2_MethodInfo_,
	nullptr,
	&_bug6263446$2_EnclosingMethodInfo_,
	_bug6263446$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446"
};

$Object* allocate$bug6263446$2($Class* clazz) {
	return $of($alloc(bug6263446$2));
}

void bug6263446$2::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6263446$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6263446);
	$var($Rectangle, rect, $nc($bug6263446::tree)->getRowBounds(0));
	$var($Point, p, $new($Point, $nc(rect)->x + rect->width / 2, rect->y + 2));
	$SwingUtilities::convertPointToScreen(p, $bug6263446::tree);
	$nc(this->val$result)->set(0, p);
}

bug6263446$2::bug6263446$2() {
}

$Class* bug6263446$2::load$($String* name, bool initialize) {
	$loadClass(bug6263446$2, name, initialize, &_bug6263446$2_ClassInfo_, allocate$bug6263446$2);
	return class$;
}

$Class* bug6263446$2::class$ = nullptr;