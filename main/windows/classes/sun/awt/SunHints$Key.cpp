#include <sun/awt/SunHints$Key.h>

#include <java/awt/RenderingHints$Key.h>
#include <sun/awt/SunHints$Value.h>
#include <sun/awt/SunHints.h>
#include <jcpp.h>

using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunHints$Value = ::sun::awt::SunHints$Value;

namespace sun {
	namespace awt {

$FieldInfo _SunHints$Key_FieldInfo_[] = {
	{"description", "Ljava/lang/String;", nullptr, 0, $field(SunHints$Key, description)},
	{}
};

$MethodInfo _SunHints$Key_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SunHints$Key::*)(int32_t,$String*)>(&SunHints$Key::init$))},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SunHints$Key::*)()>(&SunHints$Key::getIndex))},
	{"isCompatibleValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SunHints$Key_InnerClassesInfo_[] = {
	{"sun.awt.SunHints$Key", "sun.awt.SunHints", "Key", $PUBLIC | $STATIC},
	{"java.awt.RenderingHints$Key", "java.awt.RenderingHints", "Key", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SunHints$Key_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunHints$Key",
	"java.awt.RenderingHints$Key",
	nullptr,
	_SunHints$Key_FieldInfo_,
	_SunHints$Key_MethodInfo_,
	nullptr,
	nullptr,
	_SunHints$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunHints"
};

$Object* allocate$SunHints$Key($Class* clazz) {
	return $of($alloc(SunHints$Key));
}

void SunHints$Key::init$(int32_t privatekey, $String* description) {
	$RenderingHints$Key::init$(privatekey);
	$set(this, description, description);
}

int32_t SunHints$Key::getIndex() {
	return intKey();
}

$String* SunHints$Key::toString() {
	return this->description;
}

bool SunHints$Key::isCompatibleValue(Object$* val) {
	if ($instanceOf($SunHints$Value, val)) {
		return $nc(($cast($SunHints$Value, val)))->isCompatibleKey(this);
	}
	return false;
}

SunHints$Key::SunHints$Key() {
}

$Class* SunHints$Key::load$($String* name, bool initialize) {
	$loadClass(SunHints$Key, name, initialize, &_SunHints$Key_ClassInfo_, allocate$SunHints$Key);
	return class$;
}

$Class* SunHints$Key::class$ = nullptr;

	} // awt
} // sun