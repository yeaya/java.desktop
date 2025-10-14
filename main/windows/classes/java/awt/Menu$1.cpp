#include <java/awt/Menu$1.h>

#include <java/awt/Menu.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AWTAccessor$MenuAccessor = ::sun::awt::AWTAccessor$MenuAccessor;

namespace java {
	namespace awt {

$MethodInfo _Menu$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Menu$1::*)()>(&Menu$1::init$))},
	{"getItems", "(Ljava/awt/Menu;)Ljava/util/Vector;", "(Ljava/awt/Menu;)Ljava/util/Vector<Ljava/awt/MenuItem;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Menu$1_EnclosingMethodInfo_ = {
	"java.awt.Menu",
	nullptr,
	nullptr
};

$InnerClassInfo _Menu$1_InnerClassesInfo_[] = {
	{"java.awt.Menu$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$MenuAccessor", "sun.awt.AWTAccessor", "MenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Menu$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Menu$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$MenuAccessor",
	nullptr,
	_Menu$1_MethodInfo_,
	nullptr,
	&_Menu$1_EnclosingMethodInfo_,
	_Menu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Menu"
};

$Object* allocate$Menu$1($Class* clazz) {
	return $of($alloc(Menu$1));
}

void Menu$1::init$() {
}

$Vector* Menu$1::getItems($Menu* menu) {
	return $nc(menu)->items;
}

Menu$1::Menu$1() {
}

$Class* Menu$1::load$($String* name, bool initialize) {
	$loadClass(Menu$1, name, initialize, &_Menu$1_ClassInfo_, allocate$Menu$1);
	return class$;
}

$Class* Menu$1::class$ = nullptr;

	} // awt
} // java