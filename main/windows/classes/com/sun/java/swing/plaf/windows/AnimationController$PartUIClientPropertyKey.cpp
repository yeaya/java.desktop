#include <com/sun/java/swing/plaf/windows/AnimationController$PartUIClientPropertyKey.h>

#include <com/sun/java/swing/plaf/windows/AnimationController.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <java/util/AbstractMap.h>
#include <java/util/EnumMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AnimationController = ::com::sun::java::swing::plaf::windows::AnimationController;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $EnumMap = ::java::util::EnumMap;
using $Map = ::java::util::Map;
using $UIClientPropertyKey = ::javax::swing::UIClientPropertyKey;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _AnimationController$PartUIClientPropertyKey_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/AnimationController$PartUIClientPropertyKey;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AnimationController$PartUIClientPropertyKey, map)},
	{"part", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE | $FINAL, $field(AnimationController$PartUIClientPropertyKey, part)},
	{}
};

$MethodInfo _AnimationController$PartUIClientPropertyKey_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PRIVATE, $method(static_cast<void(AnimationController$PartUIClientPropertyKey::*)($TMSchema$Part*)>(&AnimationController$PartUIClientPropertyKey::init$))},
	{"getKey", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Lcom/sun/java/swing/plaf/windows/AnimationController$PartUIClientPropertyKey;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<AnimationController$PartUIClientPropertyKey*(*)($TMSchema$Part*)>(&AnimationController$PartUIClientPropertyKey::getKey))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnimationController$PartUIClientPropertyKey_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.AnimationController$PartUIClientPropertyKey", "com.sun.java.swing.plaf.windows.AnimationController", "PartUIClientPropertyKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnimationController$PartUIClientPropertyKey_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.AnimationController$PartUIClientPropertyKey",
	"java.lang.Object",
	"javax.swing.UIClientPropertyKey",
	_AnimationController$PartUIClientPropertyKey_FieldInfo_,
	_AnimationController$PartUIClientPropertyKey_MethodInfo_,
	nullptr,
	nullptr,
	_AnimationController$PartUIClientPropertyKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.AnimationController"
};

$Object* allocate$AnimationController$PartUIClientPropertyKey($Class* clazz) {
	return $of($alloc(AnimationController$PartUIClientPropertyKey));
}

$Map* AnimationController$PartUIClientPropertyKey::map = nullptr;

AnimationController$PartUIClientPropertyKey* AnimationController$PartUIClientPropertyKey::getKey($TMSchema$Part* part) {
	$load(AnimationController$PartUIClientPropertyKey);
	$synchronized(class$) {
		$init(AnimationController$PartUIClientPropertyKey);
		$var(AnimationController$PartUIClientPropertyKey, rv, $cast(AnimationController$PartUIClientPropertyKey, $nc(AnimationController$PartUIClientPropertyKey::map)->get(part)));
		if (rv == nullptr) {
			$assign(rv, $new(AnimationController$PartUIClientPropertyKey, part));
			$nc(AnimationController$PartUIClientPropertyKey::map)->put(part, rv);
		}
		return rv;
	}
}

void AnimationController$PartUIClientPropertyKey::init$($TMSchema$Part* part) {
	$set(this, part, part);
}

$String* AnimationController$PartUIClientPropertyKey::toString() {
	return this->part->toString();
}

void clinit$AnimationController$PartUIClientPropertyKey($Class* class$) {
	$load($TMSchema$Part);
	$assignStatic(AnimationController$PartUIClientPropertyKey::map, $new($EnumMap, $TMSchema$Part::class$));
}

AnimationController$PartUIClientPropertyKey::AnimationController$PartUIClientPropertyKey() {
}

$Class* AnimationController$PartUIClientPropertyKey::load$($String* name, bool initialize) {
	$loadClass(AnimationController$PartUIClientPropertyKey, name, initialize, &_AnimationController$PartUIClientPropertyKey_ClassInfo_, clinit$AnimationController$PartUIClientPropertyKey, allocate$AnimationController$PartUIClientPropertyKey);
	return class$;
}

$Class* AnimationController$PartUIClientPropertyKey::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com