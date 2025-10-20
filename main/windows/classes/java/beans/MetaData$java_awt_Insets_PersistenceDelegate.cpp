#include <java/beans/MetaData$java_awt_Insets_PersistenceDelegate.h>

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
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_Insets_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_Insets_PersistenceDelegate::*)()>(&MetaData$java_awt_Insets_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_Insets_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_Insets_PersistenceDelegate", "java.beans.MetaData", "java_awt_Insets_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_Insets_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_Insets_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_Insets_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_Insets_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_Insets_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_Insets_PersistenceDelegate));
}

void MetaData$java_awt_Insets_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_Insets_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_Insets_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $cast($Insets, oldInstance));
	$var($ObjectArray, args, $new($ObjectArray, {
		$($of($Integer::valueOf($nc(insets)->top))),
		$($of($Integer::valueOf($nc(insets)->left))),
		$($of($Integer::valueOf($nc(insets)->bottom))),
		$($of($Integer::valueOf($nc(insets)->right)))
	}));
	return $new($Expression, insets, $nc($of(insets))->getClass(), "new"_s, args);
}

MetaData$java_awt_Insets_PersistenceDelegate::MetaData$java_awt_Insets_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Insets_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_Insets_PersistenceDelegate, name, initialize, &_MetaData$java_awt_Insets_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_Insets_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_Insets_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java