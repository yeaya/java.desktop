#include <bug7199708$2$2.h>

#include <bug7199708$2.h>
#include <bug7199708.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $bug7199708$2 = ::bug7199708$2;
using $bug7199708$ComponentAction = ::bug7199708$ComponentAction;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;

$FieldInfo _bug7199708$2$2_FieldInfo_[] = {
	{"this$0", "Lbug7199708$2;", nullptr, $FINAL | $SYNTHETIC, $field(bug7199708$2$2, this$0)},
	{}
};

$MethodInfo _bug7199708$2$2_MethodInfo_[] = {
	{"<init>", "(Lbug7199708$2;)V", nullptr, 0, $method(static_cast<void(bug7199708$2$2::*)($bug7199708$2*)>(&bug7199708$2$2::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"perform", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7199708$2$2_EnclosingMethodInfo_ = {
	"bug7199708$2",
	"run",
	"()V"
};

$InnerClassInfo _bug7199708$2$2_InnerClassesInfo_[] = {
	{"bug7199708$2", nullptr, nullptr, 0},
	{"bug7199708$2$2", nullptr, nullptr, 0},
	{"bug7199708$ComponentAction", "bug7199708", "ComponentAction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _bug7199708$2$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7199708$2$2",
	"java.lang.Object",
	"bug7199708$ComponentAction",
	_bug7199708$2$2_FieldInfo_,
	_bug7199708$2$2_MethodInfo_,
	nullptr,
	&_bug7199708$2$2_EnclosingMethodInfo_,
	_bug7199708$2$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7199708"
};

$Object* allocate$bug7199708$2$2($Class* clazz) {
	return $of($alloc(bug7199708$2$2));
}

void bug7199708$2$2::init$($bug7199708$2* this$0) {
	$set(this, this$0, this$0);
}

bool bug7199708$2$2::accept($Component* component) {
	return ($instanceOf($JTable, component));
}

void bug7199708$2$2::perform($Component* component) {
	$var($Point, tableLocation, $nc(component)->getLocationOnScreen());
	$init($bug7199708);
	$bug7199708::locationX = $cast(int32_t, $nc(tableLocation)->getX());
	$bug7199708::locationY = $cast(int32_t, tableLocation->getY());
	$bug7199708::width = $cast(int32_t, $nc($($nc($bug7199708::fileChooser)->getBounds()))->getWidth());
}

bug7199708$2$2::bug7199708$2$2() {
}

$Class* bug7199708$2$2::load$($String* name, bool initialize) {
	$loadClass(bug7199708$2$2, name, initialize, &_bug7199708$2$2_ClassInfo_, allocate$bug7199708$2$2);
	return class$;
}

$Class* bug7199708$2$2::class$ = nullptr;