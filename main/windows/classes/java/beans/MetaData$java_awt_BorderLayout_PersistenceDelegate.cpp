#include <java/beans/MetaData$java_awt_BorderLayout_PersistenceDelegate.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CENTER
#undef CONSTRAINTS
#undef EAST
#undef LINE_END
#undef LINE_START
#undef NORTH
#undef PAGE_END
#undef PAGE_START
#undef SOUTH
#undef WEST

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _MetaData$java_awt_BorderLayout_PersistenceDelegate_FieldInfo_[] = {
	{"CONSTRAINTS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetaData$java_awt_BorderLayout_PersistenceDelegate, CONSTRAINTS)},
	{}
};

$MethodInfo _MetaData$java_awt_BorderLayout_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_BorderLayout_PersistenceDelegate::*)()>(&MetaData$java_awt_BorderLayout_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_BorderLayout_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_BorderLayout_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_BorderLayout_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	_MetaData$java_awt_BorderLayout_PersistenceDelegate_FieldInfo_,
	_MetaData$java_awt_BorderLayout_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_BorderLayout_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_BorderLayout_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_BorderLayout_PersistenceDelegate));
}

$StringArray* MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS = nullptr;

void MetaData$java_awt_BorderLayout_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_BorderLayout_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($BorderLayout, oldLayout, $cast($BorderLayout, oldInstance));
	$var($BorderLayout, newLayout, $cast($BorderLayout, newInstance));
	{
		$var($StringArray, arr$, MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, constraints, arr$->get(i$));
			{
				$var($Object, oldC, $nc(oldLayout)->getLayoutComponent(constraints));
				$var($Object, newC, $nc(newLayout)->getLayoutComponent(constraints));
				if (oldC != nullptr && newC == nullptr) {
					invokeStatement(oldInstance, "addLayoutComponent"_s, $$new($ObjectArray, {
						oldC,
						$of(constraints)
					}), out);
				}
			}
		}
	}
}

void clinit$MetaData$java_awt_BorderLayout_PersistenceDelegate($Class* class$) {
		$init($BorderLayout);
	$assignStatic(MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS, $new($StringArray, {
		$BorderLayout::NORTH,
		$BorderLayout::SOUTH,
		$BorderLayout::EAST,
		$BorderLayout::WEST,
		$BorderLayout::CENTER,
		$BorderLayout::PAGE_START,
		$BorderLayout::PAGE_END,
		$BorderLayout::LINE_START,
		$BorderLayout::LINE_END
	}));
}

MetaData$java_awt_BorderLayout_PersistenceDelegate::MetaData$java_awt_BorderLayout_PersistenceDelegate() {
}

$Class* MetaData$java_awt_BorderLayout_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_BorderLayout_PersistenceDelegate, name, initialize, &_MetaData$java_awt_BorderLayout_PersistenceDelegate_ClassInfo_, clinit$MetaData$java_awt_BorderLayout_PersistenceDelegate, allocate$MetaData$java_awt_BorderLayout_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_BorderLayout_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java