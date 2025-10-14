#include <java/beans/MetaData$java_lang_String_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_lang_String_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_lang_String_PersistenceDelegate::*)()>(&MetaData$java_lang_String_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetaData$java_lang_String_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_lang_String_PersistenceDelegate", "java.beans.MetaData", "java_lang_String_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_lang_String_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_lang_String_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_lang_String_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_lang_String_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_lang_String_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_lang_String_PersistenceDelegate));
}

void MetaData$java_lang_String_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$java_lang_String_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	return nullptr;
}

void MetaData$java_lang_String_PersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
}

MetaData$java_lang_String_PersistenceDelegate::MetaData$java_lang_String_PersistenceDelegate() {
}

$Class* MetaData$java_lang_String_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_lang_String_PersistenceDelegate, name, initialize, &_MetaData$java_lang_String_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_lang_String_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_lang_String_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java