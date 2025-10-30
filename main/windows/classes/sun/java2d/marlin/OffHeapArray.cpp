#include <sun/java2d/marlin/OffHeapArray.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_INT_INDEX_SCALE
#undef LOG_UNSAFE_MALLOC
#undef SIZE_INT
#undef UNSAFE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

class OffHeapArray$$Lambda$lambda$new$0 : public $Runnable {
	$class(OffHeapArray$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(OffHeapArray* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OffHeapArray$$Lambda$lambda$new$0>());
	}
	OffHeapArray* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo OffHeapArray$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OffHeapArray$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo OffHeapArray$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/marlin/OffHeapArray;)V", nullptr, $PUBLIC, $method(static_cast<void(OffHeapArray$$Lambda$lambda$new$0::*)(OffHeapArray*)>(&OffHeapArray$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo OffHeapArray$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.marlin.OffHeapArray$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* OffHeapArray$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(OffHeapArray$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OffHeapArray$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _OffHeapArray_FieldInfo_[] = {
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(OffHeapArray, UNSAFE)},
	{"SIZE_INT", "I", nullptr, $STATIC | $FINAL, $staticField(OffHeapArray, SIZE_INT)},
	{"address", "J", nullptr, 0, $field(OffHeapArray, address)},
	{"length", "J", nullptr, 0, $field(OffHeapArray, length)},
	{"used", "I", nullptr, 0, $field(OffHeapArray, used)},
	{}
};

$MethodInfo _OffHeapArray_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(OffHeapArray::*)(Object$*,int64_t)>(&OffHeapArray::init$))},
	{"fill", "(B)V", nullptr, 0, $method(static_cast<void(OffHeapArray::*)(int8_t)>(&OffHeapArray::fill))},
	{"free", "()V", nullptr, 0, $method(static_cast<void(OffHeapArray::*)()>(&OffHeapArray::free))},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(OffHeapArray::*)()>(&OffHeapArray::lambda$new$0))},
	{"resize", "(J)V", nullptr, 0, $method(static_cast<void(OffHeapArray::*)(int64_t)>(&OffHeapArray::resize))},
	{}
};

$ClassInfo _OffHeapArray_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.OffHeapArray",
	"java.lang.Object",
	nullptr,
	_OffHeapArray_FieldInfo_,
	_OffHeapArray_MethodInfo_
};

$Object* allocate$OffHeapArray($Class* clazz) {
	return $of($alloc(OffHeapArray));
}

$Unsafe* OffHeapArray::UNSAFE = nullptr;
int32_t OffHeapArray::SIZE_INT = 0;

void OffHeapArray::init$(Object$* parent, int64_t len) {
	$useLocalCurrentObjectStackCache();
	this->address = $nc(OffHeapArray::UNSAFE)->allocateMemory(len);
	this->length = len;
	this->used = 0;
	$init($MarlinConst);
	if ($MarlinConst::LOG_UNSAFE_MALLOC) {
		$MarlinUtils::logInfo($$str({$$str($System::currentTimeMillis()), ": OffHeapArray.allocateMemory =   "_s, $$str(len), " to addr = "_s, $$str(this->address)}));
	}
	$nc($($CleanerFactory::cleaner()))->register$(parent, static_cast<$Runnable*>($$new(OffHeapArray$$Lambda$lambda$new$0, this)));
}

void OffHeapArray::resize(int64_t len) {
	$useLocalCurrentObjectStackCache();
	this->address = $nc(OffHeapArray::UNSAFE)->reallocateMemory(this->address, len);
	this->length = len;
	$init($MarlinConst);
	if ($MarlinConst::LOG_UNSAFE_MALLOC) {
		$MarlinUtils::logInfo($$str({$$str($System::currentTimeMillis()), ": OffHeapArray.reallocateMemory = "_s, $$str(len), " to addr = "_s, $$str(this->address)}));
	}
}

void OffHeapArray::free() {
	$useLocalCurrentObjectStackCache();
	$nc(OffHeapArray::UNSAFE)->freeMemory(this->address);
	$init($MarlinConst);
	if ($MarlinConst::LOG_UNSAFE_MALLOC) {
		$MarlinUtils::logInfo($$str({$$str($System::currentTimeMillis()), ": OffHeapArray.freeMemory =       "_s, $$str(this->length), " at addr = "_s, $$str(this->address)}));
	}
	this->address = 0;
}

void OffHeapArray::fill(int8_t val) {
	$nc(OffHeapArray::UNSAFE)->setMemory(this->address, this->length, val);
}

void OffHeapArray::lambda$new$0() {
	this->free();
}

void clinit$OffHeapArray($Class* class$) {
	{
		$assignStatic(OffHeapArray::UNSAFE, $Unsafe::getUnsafe());
		OffHeapArray::SIZE_INT = $Unsafe::ARRAY_INT_INDEX_SCALE;
	}
}

OffHeapArray::OffHeapArray() {
}

$Class* OffHeapArray::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(OffHeapArray$$Lambda$lambda$new$0::classInfo$.name)) {
			return OffHeapArray$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(OffHeapArray, name, initialize, &_OffHeapArray_ClassInfo_, clinit$OffHeapArray, allocate$OffHeapArray);
	return class$;
}

$Class* OffHeapArray::class$ = nullptr;

		} // marlin
	} // java2d
} // sun