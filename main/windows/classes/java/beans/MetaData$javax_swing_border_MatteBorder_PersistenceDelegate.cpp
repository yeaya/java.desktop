#include <java/beans/MetaData$javax_swing_border_MatteBorder_PersistenceDelegate.h>

#include <java/awt/Color.h>
#include <java/awt/Insets.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/MatteBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Insets = ::java::awt::Insets;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MatteBorder = ::javax::swing::border::MatteBorder;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::*)()>(&MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate", "java.beans.MetaData", "javax_swing_border_MatteBorder_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_border_MatteBorder_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate));
}

void MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$var($MatteBorder, border, $cast($MatteBorder, oldInstance));
	$var($Insets, insets, $nc(border)->getBorderInsets());
	$var($Object, object, border->getTileIcon());
	if (object == nullptr) {
		$assign(object, border->getMatteColor());
	}
	$var($ObjectArray, args, $new($ObjectArray, {
		$($of($Integer::valueOf($nc(insets)->top))),
		$($of($Integer::valueOf($nc(insets)->left))),
		$($of($Integer::valueOf($nc(insets)->bottom))),
		$($of($Integer::valueOf($nc(insets)->right))),
		object
	}));
	return $new($Expression, border, $of(border)->getClass(), "new"_s, args);
}

MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::MetaData$javax_swing_border_MatteBorder_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_border_MatteBorder_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_border_MatteBorder_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java