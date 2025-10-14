#include <java/beans/MetaData$java_awt_MenuBar_PersistenceDelegate.h>

#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_MenuBar_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_MenuBar_PersistenceDelegate::*)()>(&MetaData$java_awt_MenuBar_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_MenuBar_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_MenuBar_PersistenceDelegate", "java.beans.MetaData", "java_awt_MenuBar_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_MenuBar_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_MenuBar_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_MenuBar_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_MenuBar_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_MenuBar_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_MenuBar_PersistenceDelegate));
}

void MetaData$java_awt_MenuBar_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_MenuBar_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($MenuBar, m, $cast($MenuBar, oldInstance));
	$var($MenuBar, n, $cast($MenuBar, newInstance));
	for (int32_t i = $nc(n)->getMenuCount(); i < $nc(m)->getMenuCount(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$($of(m->getMenu(i)))}), out);
	}
}

MetaData$java_awt_MenuBar_PersistenceDelegate::MetaData$java_awt_MenuBar_PersistenceDelegate() {
}

$Class* MetaData$java_awt_MenuBar_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_MenuBar_PersistenceDelegate, name, initialize, &_MetaData$java_awt_MenuBar_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_MenuBar_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_MenuBar_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java