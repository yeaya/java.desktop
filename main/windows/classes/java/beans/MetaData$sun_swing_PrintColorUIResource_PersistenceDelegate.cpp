#include <java/beans/MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate.h>

#include <java/awt/Color.h>
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
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace java {
	namespace beans {

$MethodInfo _MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::*)()>(&MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate", "java.beans.MetaData", "sun_swing_PrintColorUIResource_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate));
}

void MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$var($Color, color, $cast($Color, oldInstance));
	$var($ObjectArray, args, $new($ObjectArray, {$($of($Integer::valueOf($nc(color)->getRGB())))}));
	$load($ColorUIResource);
	return $new($Expression, color, $ColorUIResource::class$, "new"_s, args);
}

MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate() {
}

$Class* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, name, initialize, &_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_ClassInfo_, allocate$MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate);
	return class$;
}

$Class* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java