#include <sun/awt/SunHints$Value.h>

#include <java/lang/InternalError.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints.h>
#include <jcpp.h>

using $SunHints$ValueArray2 = $Array<::sun::awt::SunHints$Value, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints$Key = ::sun::awt::SunHints$Key;

namespace sun {
	namespace awt {

$FieldInfo _SunHints$Value_FieldInfo_[] = {
	{"myKey", "Lsun/awt/SunHints$Key;", nullptr, $PRIVATE, $field(SunHints$Value, myKey)},
	{"index", "I", nullptr, $PRIVATE, $field(SunHints$Value, index)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SunHints$Value, description)},
	{"ValueObjects", "[[Lsun/awt/SunHints$Value;", nullptr, $PRIVATE | $STATIC, $staticField(SunHints$Value, ValueObjects)},
	{}
};

$MethodInfo _SunHints$Value_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/SunHints$Key;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SunHints$Value::*)($SunHints$Key*,int32_t,$String*)>(&SunHints$Value::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"get", "(II)Lsun/awt/SunHints$Value;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SunHints$Value*(*)(int32_t,int32_t)>(&SunHints$Value::get))},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SunHints$Value::*)()>(&SunHints$Value::getIndex))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"isCompatibleKey", "(Lsun/awt/SunHints$Key;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SunHints$Value::*)($SunHints$Key*)>(&SunHints$Value::isCompatibleKey))},
	{"register", "(Lsun/awt/SunHints$Key;Lsun/awt/SunHints$Value;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($SunHints$Key*,SunHints$Value*)>(&SunHints$Value::register$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SunHints$Value_InnerClassesInfo_[] = {
	{"sun.awt.SunHints$Value", "sun.awt.SunHints", "Value", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SunHints$Value_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunHints$Value",
	"java.lang.Object",
	nullptr,
	_SunHints$Value_FieldInfo_,
	_SunHints$Value_MethodInfo_,
	nullptr,
	nullptr,
	_SunHints$Value_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunHints"
};

$Object* allocate$SunHints$Value($Class* clazz) {
	return $of($alloc(SunHints$Value));
}

$SunHints$ValueArray2* SunHints$Value::ValueObjects = nullptr;

void SunHints$Value::register$($SunHints$Key* key, SunHints$Value* value) {
	$load(SunHints$Value);
	$synchronized(class$) {
		$init(SunHints$Value);
		$useLocalCurrentObjectStackCache();
		int32_t kindex = $nc(key)->getIndex();
		int32_t vindex = $nc(value)->getIndex();
		if ($nc($nc(SunHints$Value::ValueObjects)->get(kindex))->get(vindex) != nullptr) {
			$throwNew($InternalError, $$str({"duplicate index: "_s, $$str(vindex)}));
		}
		$nc($nc(SunHints$Value::ValueObjects)->get(kindex))->set(vindex, value);
	}
}

SunHints$Value* SunHints$Value::get(int32_t keyindex, int32_t valueindex) {
	$init(SunHints$Value);
	return $nc($nc(SunHints$Value::ValueObjects)->get(keyindex))->get(valueindex);
}

void SunHints$Value::init$($SunHints$Key* key, int32_t index, $String* description) {
	$set(this, myKey, key);
	this->index = index;
	$set(this, description, description);
	register$(key, this);
}

int32_t SunHints$Value::getIndex() {
	return this->index;
}

$String* SunHints$Value::toString() {
	return this->description;
}

bool SunHints$Value::isCompatibleKey($SunHints$Key* k) {
	return this->myKey == k;
}

int32_t SunHints$Value::hashCode() {
	return $System::identityHashCode(this);
}

bool SunHints$Value::equals(Object$* o) {
	return $equals(this, o);
}

void clinit$SunHints$Value($Class* class$) {
	$assignStatic(SunHints$Value::ValueObjects, $new($SunHints$ValueArray2, 10, 8));
}

SunHints$Value::SunHints$Value() {
}

$Class* SunHints$Value::load$($String* name, bool initialize) {
	$loadClass(SunHints$Value, name, initialize, &_SunHints$Value_ClassInfo_, clinit$SunHints$Value, allocate$SunHints$Value);
	return class$;
}

$Class* SunHints$Value::class$ = nullptr;

	} // awt
} // sun