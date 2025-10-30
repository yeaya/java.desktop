#include <sun/awt/WeakIdentityHashMap$2$1$1.h>

#include <java/lang/ref/Reference.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <sun/awt/WeakIdentityHashMap$2$1.h>
#include <sun/awt/WeakIdentityHashMap$WeakKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $WeakIdentityHashMap$2$1 = ::sun::awt::WeakIdentityHashMap$2$1;
using $WeakIdentityHashMap$WeakKey = ::sun::awt::WeakIdentityHashMap$WeakKey;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$2$1$1_FieldInfo_[] = {
	{"this$2", "Lsun/awt/WeakIdentityHashMap$2$1;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2$1$1, this$2)},
	{"entry", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Lsun/awt/WeakIdentityHashMap$WeakKey<TK;>;TV;>;", 0, $field(WeakIdentityHashMap$2$1$1, entry)},
	{}
};

$MethodInfo _WeakIdentityHashMap$2$1$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/WeakIdentityHashMap$2$1;)V", nullptr, 0, $method(static_cast<void(WeakIdentityHashMap$2$1$1::*)($WeakIdentityHashMap$2$1*)>(&WeakIdentityHashMap$2$1$1::init$))},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _WeakIdentityHashMap$2$1$1_EnclosingMethodInfo_ = {
	"sun.awt.WeakIdentityHashMap$2$1",
	"next",
	"()Ljava/util/Map$Entry;"
};

$InnerClassInfo _WeakIdentityHashMap$2$1$1_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$2$1", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$2$1$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakIdentityHashMap$2$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$2$1$1",
	"java.lang.Object",
	"java.util.Map$Entry",
	_WeakIdentityHashMap$2$1$1_FieldInfo_,
	_WeakIdentityHashMap$2$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	&_WeakIdentityHashMap$2$1$1_EnclosingMethodInfo_,
	_WeakIdentityHashMap$2$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$2$1$1($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$2$1$1));
}

void WeakIdentityHashMap$2$1$1::init$($WeakIdentityHashMap$2$1* this$2) {
	$set(this, this$2, this$2);
	$set(this, entry, $cast($Map$Entry, $nc(this->this$2->val$iterator)->next()));
}

$Object* WeakIdentityHashMap$2$1$1::getKey() {
	return $of($nc(($cast($WeakIdentityHashMap$WeakKey, $($nc(this->entry)->getKey()))))->get());
}

$Object* WeakIdentityHashMap$2$1$1::getValue() {
	return $of($nc(this->entry)->getValue());
}

$Object* WeakIdentityHashMap$2$1$1::setValue(Object$* value) {
	return $of(nullptr);
}

WeakIdentityHashMap$2$1$1::WeakIdentityHashMap$2$1$1() {
}

$Class* WeakIdentityHashMap$2$1$1::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$2$1$1, name, initialize, &_WeakIdentityHashMap$2$1$1_ClassInfo_, allocate$WeakIdentityHashMap$2$1$1);
	return class$;
}

$Class* WeakIdentityHashMap$2$1$1::class$ = nullptr;

	} // awt
} // sun