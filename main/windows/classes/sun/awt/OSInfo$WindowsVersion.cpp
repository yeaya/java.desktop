#include <sun/awt/OSInfo$WindowsVersion.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OSInfo = ::sun::awt::OSInfo;

namespace sun {
	namespace awt {

$FieldInfo _OSInfo$WindowsVersion_FieldInfo_[] = {
	{"major", "I", nullptr, $PRIVATE | $FINAL, $field(OSInfo$WindowsVersion, major)},
	{"minor", "I", nullptr, $PRIVATE | $FINAL, $field(OSInfo$WindowsVersion, minor)},
	{}
};

$MethodInfo _OSInfo$WindowsVersion_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(OSInfo$WindowsVersion::*)(int32_t,int32_t)>(&OSInfo$WindowsVersion::init$))},
	{"compareTo", "(Lsun/awt/OSInfo$WindowsVersion;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMajor", "()I", nullptr, $PUBLIC},
	{"getMinor", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OSInfo$WindowsVersion_InnerClassesInfo_[] = {
	{"sun.awt.OSInfo$WindowsVersion", "sun.awt.OSInfo", "WindowsVersion", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OSInfo$WindowsVersion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.OSInfo$WindowsVersion",
	"java.lang.Object",
	"java.lang.Comparable",
	_OSInfo$WindowsVersion_FieldInfo_,
	_OSInfo$WindowsVersion_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/awt/OSInfo$WindowsVersion;>;",
	nullptr,
	_OSInfo$WindowsVersion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.OSInfo"
};

$Object* allocate$OSInfo$WindowsVersion($Class* clazz) {
	return $of($alloc(OSInfo$WindowsVersion));
}

void OSInfo$WindowsVersion::init$(int32_t major, int32_t minor) {
	this->major = major;
	this->minor = minor;
}

int32_t OSInfo$WindowsVersion::getMajor() {
	return this->major;
}

int32_t OSInfo$WindowsVersion::getMinor() {
	return this->minor;
}

int32_t OSInfo$WindowsVersion::compareTo(OSInfo$WindowsVersion* o) {
	int32_t result = this->major - $nc(o)->getMajor();
	if (result == 0) {
		result = this->minor - o->getMinor();
	}
	return result;
}

bool OSInfo$WindowsVersion::equals(Object$* obj) {
	return $instanceOf(OSInfo$WindowsVersion, obj) && compareTo($cast(OSInfo$WindowsVersion, obj)) == 0;
}

int32_t OSInfo$WindowsVersion::hashCode() {
	return 31 * this->major + this->minor;
}

$String* OSInfo$WindowsVersion::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$$str(this->major), "."_s, $$str(this->minor)});
}

int32_t OSInfo$WindowsVersion::compareTo(Object$* o) {
	return this->compareTo($cast(OSInfo$WindowsVersion, o));
}

OSInfo$WindowsVersion::OSInfo$WindowsVersion() {
}

$Class* OSInfo$WindowsVersion::load$($String* name, bool initialize) {
	$loadClass(OSInfo$WindowsVersion, name, initialize, &_OSInfo$WindowsVersion_ClassInfo_, allocate$OSInfo$WindowsVersion);
	return class$;
}

$Class* OSInfo$WindowsVersion::class$ = nullptr;

	} // awt
} // sun