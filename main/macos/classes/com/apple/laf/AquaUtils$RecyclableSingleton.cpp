#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Supplier.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Supplier = ::java::util::function::Supplier;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0 : public $Supplier {
	$class(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(AquaUtils$RecyclableSingleton* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$get$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0>());
	}
	AquaUtils$RecyclableSingleton* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, inst$)},
	{}
};
$MethodInfo AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::methodInfos[3] = {
	{"<init>", "(Lcom/apple/laf/AquaUtils$RecyclableSingleton;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::*)(AquaUtils$RecyclableSingleton*)>(&AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::class$ = nullptr;

$MethodInfo _AquaUtils$RecyclableSingleton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$RecyclableSingleton::*)()>(&AquaUtils$RecyclableSingleton::init$))},
	{"get", "()Ljava/lang/Object;", "()TT;", $FINAL, $method(static_cast<$Object*(AquaUtils$RecyclableSingleton::*)()>(&AquaUtils$RecyclableSingleton::get))},
	{"getInstance", "()Ljava/lang/Object;", "()TT;", $ABSTRACT},
	{"lambda$get$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(AquaUtils$RecyclableSingleton::*)()>(&AquaUtils$RecyclableSingleton::lambda$get$0))},
	{"reset", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaUtils$RecyclableSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$RecyclableSingleton_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AquaUtils$RecyclableSingleton_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AquaUtils$RecyclableSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$RecyclableSingleton($Class* clazz) {
	return $of($alloc(AquaUtils$RecyclableSingleton));
}

void AquaUtils$RecyclableSingleton::init$() {
}

$Object* AquaUtils$RecyclableSingleton::get() {
	return $of($AppContext::getSoftReferenceValue(this, static_cast<$Supplier*>($$new(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, this))));
}

void AquaUtils$RecyclableSingleton::reset() {
	$nc($($AppContext::getAppContext()))->remove(this);
}

$Object* AquaUtils$RecyclableSingleton::lambda$get$0() {
	return $of(getInstance());
}

AquaUtils$RecyclableSingleton::AquaUtils$RecyclableSingleton() {
}

$Class* AquaUtils$RecyclableSingleton::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::classInfo$.name)) {
			return AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::load$(name, initialize);
		}
	}
	$loadClass(AquaUtils$RecyclableSingleton, name, initialize, &_AquaUtils$RecyclableSingleton_ClassInfo_, allocate$AquaUtils$RecyclableSingleton);
	return class$;
}

$Class* AquaUtils$RecyclableSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com