#include <java/awt/VKCollection.h>

#include <java/lang/AssertionError.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {

$FieldInfo _VKCollection_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VKCollection, $assertionsDisabled)},
	{"code2name", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/String;>;", 0, $field(VKCollection, code2name)},
	{"name2code", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", 0, $field(VKCollection, name2code)},
	{}
};

$MethodInfo _VKCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VKCollection::*)()>(&VKCollection::init$))},
	{"findCode", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"findName", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"put", "(Ljava/lang/String;Ljava/lang/Integer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _VKCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.VKCollection",
	"java.lang.Object",
	nullptr,
	_VKCollection_FieldInfo_,
	_VKCollection_MethodInfo_
};

$Object* allocate$VKCollection($Class* clazz) {
	return $of($alloc(VKCollection));
}

bool VKCollection::$assertionsDisabled = false;

void VKCollection::init$() {
	$set(this, code2name, $new($HashMap));
	$set(this, name2code, $new($HashMap));
}

void VKCollection::put($String* name, $Integer* code) {
	$synchronized(this) {
		if (!VKCollection::$assertionsDisabled && !((name != nullptr) && (code != nullptr))) {
			$throwNew($AssertionError);
		}
		if (!VKCollection::$assertionsDisabled && !(findName(code) == nullptr)) {
			$throwNew($AssertionError);
		}
		if (!VKCollection::$assertionsDisabled && !(findCode(name) == nullptr)) {
			$throwNew($AssertionError);
		}
		$nc(this->code2name)->put(code, name);
		$nc(this->name2code)->put(name, code);
	}
}

$Integer* VKCollection::findCode($String* name) {
	$synchronized(this) {
		if (!VKCollection::$assertionsDisabled && !(name != nullptr)) {
			$throwNew($AssertionError);
		}
		return $cast($Integer, $nc(this->name2code)->get(name));
	}
}

$String* VKCollection::findName($Integer* code) {
	$synchronized(this) {
		if (!VKCollection::$assertionsDisabled && !(code != nullptr)) {
			$throwNew($AssertionError);
		}
		return $cast($String, $nc(this->code2name)->get(code));
	}
}

void clinit$VKCollection($Class* class$) {
	VKCollection::$assertionsDisabled = !VKCollection::class$->desiredAssertionStatus();
}

VKCollection::VKCollection() {
}

$Class* VKCollection::load$($String* name, bool initialize) {
	$loadClass(VKCollection, name, initialize, &_VKCollection_ClassInfo_, clinit$VKCollection, allocate$VKCollection);
	return class$;
}

$Class* VKCollection::class$ = nullptr;

	} // awt
} // java