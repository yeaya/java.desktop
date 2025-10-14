#include <java/awt/ScrollPaneAdjustable$1.h>

#include <java/awt/ScrollPaneAdjustable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$ScrollPaneAdjustableAccessor = ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor;

namespace java {
	namespace awt {

$MethodInfo _ScrollPaneAdjustable$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScrollPaneAdjustable$1::*)()>(&ScrollPaneAdjustable$1::init$))},
	{"setTypedValue", "(Ljava/awt/ScrollPaneAdjustable;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollPaneAdjustable$1_EnclosingMethodInfo_ = {
	"java.awt.ScrollPaneAdjustable",
	nullptr,
	nullptr
};

$InnerClassInfo _ScrollPaneAdjustable$1_InnerClassesInfo_[] = {
	{"java.awt.ScrollPaneAdjustable$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor", "sun.awt.AWTAccessor", "ScrollPaneAdjustableAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ScrollPaneAdjustable$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ScrollPaneAdjustable$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor",
	nullptr,
	_ScrollPaneAdjustable$1_MethodInfo_,
	nullptr,
	&_ScrollPaneAdjustable$1_EnclosingMethodInfo_,
	_ScrollPaneAdjustable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ScrollPaneAdjustable"
};

$Object* allocate$ScrollPaneAdjustable$1($Class* clazz) {
	return $of($alloc(ScrollPaneAdjustable$1));
}

void ScrollPaneAdjustable$1::init$() {
}

void ScrollPaneAdjustable$1::setTypedValue($ScrollPaneAdjustable* adj, int32_t v, int32_t type) {
	$nc(adj)->setTypedValue(v, type);
}

ScrollPaneAdjustable$1::ScrollPaneAdjustable$1() {
}

$Class* ScrollPaneAdjustable$1::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneAdjustable$1, name, initialize, &_ScrollPaneAdjustable$1_ClassInfo_, allocate$ScrollPaneAdjustable$1);
	return class$;
}

$Class* ScrollPaneAdjustable$1::class$ = nullptr;

	} // awt
} // java