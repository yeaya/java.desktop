#include <java/beans/MetaData$java_awt_MenuShortcut_PersistenceDelegate.h>

#include <java/awt/MenuShortcut.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <jcpp.h>

using $MenuShortcut = ::java::awt::MenuShortcut;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_MenuShortcut_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_MenuShortcut_PersistenceDelegate::*)()>(&MetaData$java_awt_MenuShortcut_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_MenuShortcut_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate", "java.beans.MetaData", "java_awt_MenuShortcut_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_MenuShortcut_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_MenuShortcut_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_MenuShortcut_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_MenuShortcut_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_MenuShortcut_PersistenceDelegate));
}

void MetaData$java_awt_MenuShortcut_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_MenuShortcut_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_MenuShortcut_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($MenuShortcut, m, $cast($MenuShortcut, oldInstance));
	$var($Object, var$0, oldInstance);
	$var($Object, var$1, $of($nc($of(m))->getClass()));
	$var($String, var$2, "new"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {
		$($of($Integer::valueOf(m->getKey()))),
		$($of($Boolean::valueOf(m->usesShiftModifier())))
	}));
}

MetaData$java_awt_MenuShortcut_PersistenceDelegate::MetaData$java_awt_MenuShortcut_PersistenceDelegate() {
}

$Class* MetaData$java_awt_MenuShortcut_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_MenuShortcut_PersistenceDelegate, name, initialize, &_MetaData$java_awt_MenuShortcut_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_MenuShortcut_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_MenuShortcut_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java