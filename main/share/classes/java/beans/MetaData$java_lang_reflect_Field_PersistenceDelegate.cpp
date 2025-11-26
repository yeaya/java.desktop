#include <java/beans/MetaData$java_lang_reflect_Field_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_lang_reflect_Field_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_lang_reflect_Field_PersistenceDelegate::*)()>(&MetaData$java_lang_reflect_Field_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_lang_reflect_Field_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate", "java.beans.MetaData", "java_lang_reflect_Field_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_lang_reflect_Field_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_lang_reflect_Field_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_lang_reflect_Field_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_lang_reflect_Field_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_lang_reflect_Field_PersistenceDelegate));
}

void MetaData$java_lang_reflect_Field_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_lang_reflect_Field_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_lang_reflect_Field_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Field, f, $cast($Field, oldInstance));
	$var($Object, var$0, oldInstance);
	$var($Object, var$1, $of($nc(f)->getDeclaringClass()));
	$var($String, var$2, "getField"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {$($of(f->getName()))}));
}

MetaData$java_lang_reflect_Field_PersistenceDelegate::MetaData$java_lang_reflect_Field_PersistenceDelegate() {
}

$Class* MetaData$java_lang_reflect_Field_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_lang_reflect_Field_PersistenceDelegate, name, initialize, &_MetaData$java_lang_reflect_Field_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_lang_reflect_Field_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_lang_reflect_Field_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java