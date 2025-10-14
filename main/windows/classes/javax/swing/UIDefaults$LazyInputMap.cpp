#include <javax/swing/UIDefaults$LazyInputMap.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;

namespace javax {
	namespace swing {

$FieldInfo _UIDefaults$LazyInputMap_FieldInfo_[] = {
	{"bindings", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(UIDefaults$LazyInputMap, bindings)},
	{}
};

$MethodInfo _UIDefaults$LazyInputMap_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$LazyInputMap::*)($ObjectArray*)>(&UIDefaults$LazyInputMap::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UIDefaults$LazyInputMap_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$LazyInputMap", "javax.swing.UIDefaults", "LazyInputMap", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UIDefaults$LazyInputMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UIDefaults$LazyInputMap",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_UIDefaults$LazyInputMap_FieldInfo_,
	_UIDefaults$LazyInputMap_MethodInfo_,
	nullptr,
	nullptr,
	_UIDefaults$LazyInputMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$LazyInputMap($Class* clazz) {
	return $of($alloc(UIDefaults$LazyInputMap));
}

void UIDefaults$LazyInputMap::init$($ObjectArray* bindings) {
	$set(this, bindings, bindings);
}

$Object* UIDefaults$LazyInputMap::createValue($UIDefaults* table) {
	if (this->bindings != nullptr) {
		$var($InputMap, km, $LookAndFeel::makeInputMap(this->bindings));
		return $of(km);
	}
	return $of(nullptr);
}

UIDefaults$LazyInputMap::UIDefaults$LazyInputMap() {
}

$Class* UIDefaults$LazyInputMap::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$LazyInputMap, name, initialize, &_UIDefaults$LazyInputMap_ClassInfo_, allocate$UIDefaults$LazyInputMap);
	return class$;
}

$Class* UIDefaults$LazyInputMap::class$ = nullptr;

	} // swing
} // javax