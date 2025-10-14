#include <java/beans/MetaData$java_lang_Class_PersistenceDelegate.h>

#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrimitiveWrapperMap = ::com::sun::beans::finder::PrimitiveWrapperMap;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Statement = ::java::beans::Statement;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_lang_Class_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_lang_Class_PersistenceDelegate::*)()>(&MetaData$java_lang_Class_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_lang_Class_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_lang_Class_PersistenceDelegate", "java.beans.MetaData", "java_lang_Class_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_lang_Class_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_lang_Class_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_lang_Class_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_lang_Class_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_lang_Class_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_lang_Class_PersistenceDelegate));
}

void MetaData$java_lang_Class_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_lang_Class_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_lang_Class_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$beforeCallerSensitive();
	$Class* c = $cast($Class, oldInstance);
	if ($nc(c)->isPrimitive()) {
		$var($Field, field, nullptr);
		try {
			$assign(field, $nc($PrimitiveWrapperMap::getType($(c->getName())))->getDeclaredField("TYPE"_s));
		} catch ($NoSuchFieldException&) {
			$var($NoSuchFieldException, ex, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Unknown primitive type: "_s, c}));
		}
		return $new($Expression, oldInstance, field, "get"_s, $$new($ObjectArray, {($Object*)nullptr}));
	} else {
		$load($String);
		if ($equals(oldInstance, $String::class$)) {
			return $new($Expression, oldInstance, ""_s, "getClass"_s, $$new($ObjectArray, 0));
		} else {
			$load($Class);
			if ($equals(oldInstance, $Class::class$)) {
				return $new($Expression, oldInstance, $String::class$, "getClass"_s, $$new($ObjectArray, 0));
			} else {
				$var($Expression, newInstance, $new($Expression, oldInstance, $Class::class$, "forName"_s, $$new($ObjectArray, {$($of(c->getName()))})));
				$set(newInstance, loader, c->getClassLoader());
				return newInstance;
			}
		}
	}
}

MetaData$java_lang_Class_PersistenceDelegate::MetaData$java_lang_Class_PersistenceDelegate() {
}

$Class* MetaData$java_lang_Class_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_lang_Class_PersistenceDelegate, name, initialize, &_MetaData$java_lang_Class_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_lang_Class_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_lang_Class_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java