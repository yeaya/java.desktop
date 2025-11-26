#include <sun/java2d/ReentrantContextProvider$HardReference.h>

#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContextProvider$HardReference_FieldInfo_[] = {
	{"strongRef", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(ReentrantContextProvider$HardReference, strongRef)},
	{}
};

$MethodInfo _ReentrantContextProvider$HardReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TV;)V", 0, $method(static_cast<void(ReentrantContextProvider$HardReference::*)(Object$*)>(&ReentrantContextProvider$HardReference::init$))},
	{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{}
};

$InnerClassInfo _ReentrantContextProvider$HardReference_InnerClassesInfo_[] = {
	{"sun.java2d.ReentrantContextProvider$HardReference", "sun.java2d.ReentrantContextProvider", "HardReference", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReentrantContextProvider$HardReference_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.ReentrantContextProvider$HardReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_ReentrantContextProvider$HardReference_FieldInfo_,
	_ReentrantContextProvider$HardReference_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TV;>;",
	nullptr,
	_ReentrantContextProvider$HardReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.ReentrantContextProvider"
};

$Object* allocate$ReentrantContextProvider$HardReference($Class* clazz) {
	return $of($alloc(ReentrantContextProvider$HardReference));
}

void ReentrantContextProvider$HardReference::init$(Object$* referent) {
	$WeakReference::init$(nullptr);
	$set(this, strongRef, referent);
}

$Object* ReentrantContextProvider$HardReference::get() {
	return $of(this->strongRef);
}

ReentrantContextProvider$HardReference::ReentrantContextProvider$HardReference() {
}

$Class* ReentrantContextProvider$HardReference::load$($String* name, bool initialize) {
	$loadClass(ReentrantContextProvider$HardReference, name, initialize, &_ReentrantContextProvider$HardReference_ClassInfo_, allocate$ReentrantContextProvider$HardReference);
	return class$;
}

$Class* ReentrantContextProvider$HardReference::class$ = nullptr;

	} // java2d
} // sun