#include <java/beans/MetaData$java_awt_Container_PersistenceDelegate.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
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
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JScrollPane = ::javax::swing::JScrollPane;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_Container_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_Container_PersistenceDelegate::*)()>(&MetaData$java_awt_Container_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_Container_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_Container_PersistenceDelegate", "java.beans.MetaData", "java_awt_Container_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_Container_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_Container_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_Container_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_Container_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_Container_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_Container_PersistenceDelegate));
}

void MetaData$java_awt_Container_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Container_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($instanceOf($JScrollPane, oldInstance)) {
		return;
	}
	$var($Container, oldC, $cast($Container, oldInstance));
	$var($ComponentArray, oldChildren, $nc(oldC)->getComponents());
	$var($Container, newC, $cast($Container, newInstance));
	$var($ComponentArray, newChildren, (newC == nullptr) ? $new($ComponentArray, 0) : $nc(newC)->getComponents());
	$var($BorderLayout, layout, ($instanceOf($BorderLayout, $(oldC->getLayout()))) ? $cast($BorderLayout, oldC->getLayout()) : ($BorderLayout*)nullptr);
	$var($JLayeredPane, oldLayeredPane, ($instanceOf($JLayeredPane, oldInstance)) ? $cast($JLayeredPane, oldInstance) : ($JLayeredPane*)nullptr);
	for (int32_t i = $nc(newChildren)->length; i < $nc(oldChildren)->length; ++i) {
		$var($ObjectArray, args, (layout != nullptr) ? $new($ObjectArray, {
			$of(oldChildren->get(i)),
			$($nc(layout)->getConstraints(oldChildren->get(i)))
		}) : (oldLayeredPane != nullptr) ? $new($ObjectArray, {
			$of(oldChildren->get(i)),
			$($of($Integer::valueOf($nc(oldLayeredPane)->getLayer(oldChildren->get(i))))),
			$($of($Integer::valueOf(-1)))
		}) : $new($ObjectArray, {$of(oldChildren->get(i))}));
		invokeStatement(oldInstance, "add"_s, args, out);
	}
}

MetaData$java_awt_Container_PersistenceDelegate::MetaData$java_awt_Container_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Container_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_Container_PersistenceDelegate, name, initialize, &_MetaData$java_awt_Container_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_Container_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_Container_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java