#include <java/awt/DefaultKeyboardFocusManager$TypeAheadMarker.h>

#include <java/awt/Component.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _DefaultKeyboardFocusManager$TypeAheadMarker_FieldInfo_[] = {
	{"after", "J", nullptr, 0, $field(DefaultKeyboardFocusManager$TypeAheadMarker, after)},
	{"untilFocused", "Ljava/awt/Component;", nullptr, 0, $field(DefaultKeyboardFocusManager$TypeAheadMarker, untilFocused)},
	{}
};

$MethodInfo _DefaultKeyboardFocusManager$TypeAheadMarker_MethodInfo_[] = {
	{"<init>", "(JLjava/awt/Component;)V", nullptr, 0, $method(static_cast<void(DefaultKeyboardFocusManager$TypeAheadMarker::*)(int64_t,$Component*)>(&DefaultKeyboardFocusManager$TypeAheadMarker::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultKeyboardFocusManager$TypeAheadMarker_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$TypeAheadMarker", "java.awt.DefaultKeyboardFocusManager", "TypeAheadMarker", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$TypeAheadMarker_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$TypeAheadMarker",
	"java.lang.Object",
	nullptr,
	_DefaultKeyboardFocusManager$TypeAheadMarker_FieldInfo_,
	_DefaultKeyboardFocusManager$TypeAheadMarker_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultKeyboardFocusManager$TypeAheadMarker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$TypeAheadMarker($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$TypeAheadMarker));
}

void DefaultKeyboardFocusManager$TypeAheadMarker::init$(int64_t after, $Component* untilFocused) {
	this->after = after;
	$set(this, untilFocused, untilFocused);
}

$String* DefaultKeyboardFocusManager$TypeAheadMarker::toString() {
	return $str({">>> Marker after "_s, $$str(this->after), " on "_s, this->untilFocused});
}

DefaultKeyboardFocusManager$TypeAheadMarker::DefaultKeyboardFocusManager$TypeAheadMarker() {
}

$Class* DefaultKeyboardFocusManager$TypeAheadMarker::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$TypeAheadMarker, name, initialize, &_DefaultKeyboardFocusManager$TypeAheadMarker_ClassInfo_, allocate$DefaultKeyboardFocusManager$TypeAheadMarker);
	return class$;
}

$Class* DefaultKeyboardFocusManager$TypeAheadMarker::class$ = nullptr;

	} // awt
} // java