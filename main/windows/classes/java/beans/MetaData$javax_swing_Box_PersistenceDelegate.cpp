#include <java/beans/MetaData$javax_swing_Box_PersistenceDelegate.h>

#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Box.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box = ::javax::swing::Box;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_Box_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_Box_PersistenceDelegate::*)()>(&MetaData$javax_swing_Box_PersistenceDelegate::init$))},
	{"getAxis", "(Ljava/lang/Object;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(MetaData$javax_swing_Box_PersistenceDelegate::*)(Object$*)>(&MetaData$javax_swing_Box_PersistenceDelegate::getAxis))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_Box_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_Box_PersistenceDelegate", "java.beans.MetaData", "javax_swing_Box_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_Box_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_Box_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_Box_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_Box_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_Box_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_Box_PersistenceDelegate));
}

void MetaData$javax_swing_Box_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

bool MetaData$javax_swing_Box_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $DefaultPersistenceDelegate::mutatesTo(oldInstance, newInstance);
	return var$0 && $nc($(getAxis(oldInstance)))->equals($(getAxis(newInstance)));
}

$Expression* MetaData$javax_swing_Box_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, oldInstance);
	$var($Object, var$1, $of($nc($of(oldInstance))->getClass()));
	$var($String, var$2, "new"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {$($of(getAxis(oldInstance)))}));
}

$Integer* MetaData$javax_swing_Box_PersistenceDelegate::getAxis(Object$* object) {
	$useLocalCurrentObjectStackCache();
	$var($Box, box, $cast($Box, object));
	return $cast($Integer, $MetaData::getPrivateFieldValue($($nc(box)->getLayout()), "javax.swing.BoxLayout.axis"_s));
}

MetaData$javax_swing_Box_PersistenceDelegate::MetaData$javax_swing_Box_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_Box_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_Box_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_Box_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_Box_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_Box_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java