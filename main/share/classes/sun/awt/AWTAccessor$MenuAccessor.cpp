#include <sun/awt/AWTAccessor$MenuAccessor.h>

#include <java/awt/Menu.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$MenuAccessor_MethodInfo_[] = {
	{"getItems", "(Ljava/awt/Menu;)Ljava/util/Vector;", "(Ljava/awt/Menu;)Ljava/util/Vector<Ljava/awt/MenuItem;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$MenuAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$MenuAccessor", "sun.awt.AWTAccessor", "MenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$MenuAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$MenuAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$MenuAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$MenuAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$MenuAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$MenuAccessor));
}

$Class* AWTAccessor$MenuAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$MenuAccessor, name, initialize, &_AWTAccessor$MenuAccessor_ClassInfo_, allocate$AWTAccessor$MenuAccessor);
	return class$;
}

$Class* AWTAccessor$MenuAccessor::class$ = nullptr;

	} // awt
} // sun