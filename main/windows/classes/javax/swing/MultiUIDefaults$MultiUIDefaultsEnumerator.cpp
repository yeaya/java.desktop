#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <javax/swing/MultiUIDefaults$1.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $MultiUIDefaults = ::javax::swing::MultiUIDefaults;
using $MultiUIDefaults$1 = ::javax::swing::MultiUIDefaults$1;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;

namespace javax {
	namespace swing {

$FieldInfo _MultiUIDefaults$MultiUIDefaultsEnumerator_FieldInfo_[] = {
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PRIVATE, $field(MultiUIDefaults$MultiUIDefaultsEnumerator, iterator)},
	{"type", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE, $field(MultiUIDefaults$MultiUIDefaultsEnumerator, type)},
	{}
};

$MethodInfo _MultiUIDefaults$MultiUIDefaultsEnumerator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;Ljava/util/Set;)V", "(Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;)V", 0, $method(static_cast<void(MultiUIDefaults$MultiUIDefaultsEnumerator::*)($MultiUIDefaults$MultiUIDefaultsEnumerator$Type*,$Set*)>(&MultiUIDefaults$MultiUIDefaultsEnumerator::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiUIDefaults$MultiUIDefaultsEnumerator_InnerClassesInfo_[] = {
	{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
	{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultiUIDefaults$MultiUIDefaultsEnumerator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator",
	"java.lang.Object",
	"java.util.Enumeration",
	_MultiUIDefaults$MultiUIDefaultsEnumerator_FieldInfo_,
	_MultiUIDefaults$MultiUIDefaultsEnumerator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
	nullptr,
	_MultiUIDefaults$MultiUIDefaultsEnumerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.MultiUIDefaults"
};

$Object* allocate$MultiUIDefaults$MultiUIDefaultsEnumerator($Class* clazz) {
	return $of($alloc(MultiUIDefaults$MultiUIDefaultsEnumerator));
}

void MultiUIDefaults$MultiUIDefaultsEnumerator::init$($MultiUIDefaults$MultiUIDefaultsEnumerator$Type* type, $Set* entries) {
	$set(this, type, type);
	$set(this, iterator, $nc(entries)->iterator());
}

bool MultiUIDefaults$MultiUIDefaultsEnumerator::hasMoreElements() {
	return $nc(this->iterator)->hasNext();
}

$Object* MultiUIDefaults$MultiUIDefaultsEnumerator::nextElement() {
	$useLocalCurrentObjectStackCache();
	$init($MultiUIDefaults$1);
	switch ($nc($MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)->get($nc((this->type))->ordinal())) {
	case 1:
		{
			return $of($nc(($cast($Map$Entry, $($nc(this->iterator)->next()))))->getKey());
		}
	case 2:
		{
			return $of($nc(($cast($Map$Entry, $($nc(this->iterator)->next()))))->getValue());
		}
	default:
		{
			return $of(nullptr);
		}
	}
}

MultiUIDefaults$MultiUIDefaultsEnumerator::MultiUIDefaults$MultiUIDefaultsEnumerator() {
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaults$MultiUIDefaultsEnumerator, name, initialize, &_MultiUIDefaults$MultiUIDefaultsEnumerator_ClassInfo_, allocate$MultiUIDefaults$MultiUIDefaultsEnumerator);
	return class$;
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator::class$ = nullptr;

	} // swing
} // javax