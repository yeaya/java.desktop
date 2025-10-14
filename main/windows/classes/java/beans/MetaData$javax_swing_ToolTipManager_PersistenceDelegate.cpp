#include <java/beans/MetaData$javax_swing_ToolTipManager_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_ToolTipManager_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_ToolTipManager_PersistenceDelegate::*)()>(&MetaData$javax_swing_ToolTipManager_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_ToolTipManager_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_ToolTipManager_PersistenceDelegate", "java.beans.MetaData", "javax_swing_ToolTipManager_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_ToolTipManager_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_ToolTipManager_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_ToolTipManager_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_ToolTipManager_PersistenceDelegate));
}

void MetaData$javax_swing_ToolTipManager_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$javax_swing_ToolTipManager_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$load($ToolTipManager);
	return $new($Expression, oldInstance, $ToolTipManager::class$, "sharedInstance"_s, $$new($ObjectArray, 0));
}

MetaData$javax_swing_ToolTipManager_PersistenceDelegate::MetaData$javax_swing_ToolTipManager_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_ToolTipManager_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_ToolTipManager_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_ToolTipManager_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_ToolTipManager_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java