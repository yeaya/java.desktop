#include <java/awt/KeyboardFocusManager$HeavyweightFocusRequest.h>

#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager$LightweightFocusRequest.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef FINE

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $KeyboardFocusManager$LightweightFocusRequest = ::java::awt::KeyboardFocusManager$LightweightFocusRequest;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _KeyboardFocusManager$HeavyweightFocusRequest_FieldInfo_[] = {
	{"heavyweight", "Ljava/awt/Component;", nullptr, $FINAL, $field(KeyboardFocusManager$HeavyweightFocusRequest, heavyweight)},
	{"lightweightRequests", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyboardFocusManager$LightweightFocusRequest;>;", $FINAL, $field(KeyboardFocusManager$HeavyweightFocusRequest, lightweightRequests)},
	{"CLEAR_GLOBAL_FOCUS_OWNER", "Ljava/awt/KeyboardFocusManager$HeavyweightFocusRequest;", nullptr, $STATIC | $FINAL, $staticField(KeyboardFocusManager$HeavyweightFocusRequest, CLEAR_GLOBAL_FOCUS_OWNER)},
	{}
};

$MethodInfo _KeyboardFocusManager$HeavyweightFocusRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyboardFocusManager$HeavyweightFocusRequest::*)()>(&KeyboardFocusManager$HeavyweightFocusRequest::init$))},
	{"<init>", "(Ljava/awt/Component;Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)V", nullptr, 0, $method(static_cast<void(KeyboardFocusManager$HeavyweightFocusRequest::*)($Component*,$Component*,bool,$FocusEvent$Cause*)>(&KeyboardFocusManager$HeavyweightFocusRequest::init$))},
	{"addLightweightRequest", "(Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, 0, $method(static_cast<bool(KeyboardFocusManager$HeavyweightFocusRequest::*)($Component*,bool,$FocusEvent$Cause*)>(&KeyboardFocusManager$HeavyweightFocusRequest::addLightweightRequest))},
	{"getFirstLightweightRequest", "()Ljava/awt/KeyboardFocusManager$LightweightFocusRequest;", nullptr, 0, $method(static_cast<$KeyboardFocusManager$LightweightFocusRequest*(KeyboardFocusManager$HeavyweightFocusRequest::*)()>(&KeyboardFocusManager$HeavyweightFocusRequest::getFirstLightweightRequest))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyboardFocusManager$HeavyweightFocusRequest_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$HeavyweightFocusRequest", "java.awt.KeyboardFocusManager", "HeavyweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyboardFocusManager$HeavyweightFocusRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.KeyboardFocusManager$HeavyweightFocusRequest",
	"java.lang.Object",
	nullptr,
	_KeyboardFocusManager$HeavyweightFocusRequest_FieldInfo_,
	_KeyboardFocusManager$HeavyweightFocusRequest_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardFocusManager$HeavyweightFocusRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$HeavyweightFocusRequest($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$HeavyweightFocusRequest));
}

KeyboardFocusManager$HeavyweightFocusRequest* KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER = nullptr;

void KeyboardFocusManager$HeavyweightFocusRequest::init$() {
	$set(this, heavyweight, nullptr);
	$set(this, lightweightRequests, nullptr);
}

void KeyboardFocusManager$HeavyweightFocusRequest::init$($Component* heavyweight, $Component* descendant, bool temporary, $FocusEvent$Cause* cause) {
	$init($KeyboardFocusManager);
	$init($PlatformLogger$Level);
	if ($nc($KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (heavyweight == nullptr) {
			$nc($KeyboardFocusManager::log)->fine("Assertion (heavyweight != null) failed"_s);
		}
	}
	$set(this, heavyweight, heavyweight);
	$set(this, lightweightRequests, $new($LinkedList));
	addLightweightRequest(descendant, temporary, cause);
}

bool KeyboardFocusManager$HeavyweightFocusRequest::addLightweightRequest($Component* descendant, bool temporary, $FocusEvent$Cause* cause) {
	$init($KeyboardFocusManager);
	$init($PlatformLogger$Level);
	if ($nc($KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (this == KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
			$nc($KeyboardFocusManager::log)->fine("Assertion (this != HeavyweightFocusRequest.CLEAR_GLOBAL_FOCUS_OWNER) failed"_s);
		}
		if (descendant == nullptr) {
			$nc($KeyboardFocusManager::log)->fine("Assertion (descendant != null) failed"_s);
		}
	}
	$var($Component, lastDescendant, ($nc(this->lightweightRequests)->size() > 0) ? $nc(($cast($KeyboardFocusManager$LightweightFocusRequest, $($nc(this->lightweightRequests)->getLast()))))->component : ($Component*)nullptr);
	if (descendant != lastDescendant) {
		$nc(this->lightweightRequests)->add($$new($KeyboardFocusManager$LightweightFocusRequest, descendant, temporary, cause));
		return true;
	} else {
		return false;
	}
}

$KeyboardFocusManager$LightweightFocusRequest* KeyboardFocusManager$HeavyweightFocusRequest::getFirstLightweightRequest() {
	if (this == KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
		return nullptr;
	}
	return $cast($KeyboardFocusManager$LightweightFocusRequest, $nc(this->lightweightRequests)->getFirst());
}

$String* KeyboardFocusManager$HeavyweightFocusRequest::toString() {
	bool first = true;
	$var($String, str, $str({"HeavyweightFocusRequest[heavyweight="_s, this->heavyweight, ",lightweightRequests="_s}));
	if (this->lightweightRequests == nullptr) {
		$plusAssign(str, nullptr);
	} else {
		$plusAssign(str, "["_s);
		{
			$var($Iterator, i$, $nc(this->lightweightRequests)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($KeyboardFocusManager$LightweightFocusRequest, lwRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, i$->next()));
				{
					if (first) {
						first = false;
					} else {
						$plusAssign(str, ","_s);
					}
					$plusAssign(str, lwRequest);
				}
			}
		}
		$plusAssign(str, "]"_s);
	}
	$plusAssign(str, "]"_s);
	return str;
}

void clinit$KeyboardFocusManager$HeavyweightFocusRequest($Class* class$) {
	$assignStatic(KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER, $new(KeyboardFocusManager$HeavyweightFocusRequest));
}

KeyboardFocusManager$HeavyweightFocusRequest::KeyboardFocusManager$HeavyweightFocusRequest() {
}

$Class* KeyboardFocusManager$HeavyweightFocusRequest::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$HeavyweightFocusRequest, name, initialize, &_KeyboardFocusManager$HeavyweightFocusRequest_ClassInfo_, clinit$KeyboardFocusManager$HeavyweightFocusRequest, allocate$KeyboardFocusManager$HeavyweightFocusRequest);
	return class$;
}

$Class* KeyboardFocusManager$HeavyweightFocusRequest::class$ = nullptr;

	} // awt
} // java