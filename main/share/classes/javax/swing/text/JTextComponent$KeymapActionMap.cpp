#include <javax/swing/text/JTextComponent$KeymapActionMap.h>

#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/text/JTextComponent$KeymapWrapper.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JTextComponent$KeymapWrapper = ::javax::swing::text::JTextComponent$KeymapWrapper;
using $Keymap = ::javax::swing::text::Keymap;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$KeymapActionMap_FieldInfo_[] = {
	{"keymap", "Ljavax/swing/text/Keymap;", nullptr, $PRIVATE, $field(JTextComponent$KeymapActionMap, keymap)},
	{}
};

$MethodInfo _JTextComponent$KeymapActionMap_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Keymap;)V", nullptr, 0, $method(static_cast<void(JTextComponent$KeymapActionMap::*)($Keymap*)>(&JTextComponent$KeymapActionMap::init$))},
	{"get", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"keys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$KeymapActionMap_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$KeymapActionMap", "javax.swing.text.JTextComponent", "KeymapActionMap", $STATIC},
	{}
};

$ClassInfo _JTextComponent$KeymapActionMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$KeymapActionMap",
	"javax.swing.ActionMap",
	nullptr,
	_JTextComponent$KeymapActionMap_FieldInfo_,
	_JTextComponent$KeymapActionMap_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$KeymapActionMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$KeymapActionMap($Class* clazz) {
	return $of($alloc(JTextComponent$KeymapActionMap));
}

void JTextComponent$KeymapActionMap::init$($Keymap* keymap) {
	$ActionMap::init$();
	$set(this, keymap, keymap);
}

$ObjectArray* JTextComponent$KeymapActionMap::keys() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, sKeys, $ActionMap::keys());
	$var($ObjectArray, keymapKeys, $nc(this->keymap)->getBoundActions());
	int32_t sCount = (sKeys == nullptr) ? 0 : $nc(sKeys)->length;
	int32_t keymapCount = (keymapKeys == nullptr) ? 0 : $nc(keymapKeys)->length;
	bool hasDefault = ($nc(this->keymap)->getDefaultAction() != nullptr);
	if (hasDefault) {
		++keymapCount;
	}
	if (sCount == 0) {
		if (hasDefault) {
			$var($ObjectArray, retValue, $new($ObjectArray, keymapCount));
			if (keymapCount > 1) {
				$System::arraycopy(keymapKeys, 0, retValue, 0, keymapCount - 1);
			}
			$init($JTextComponent$KeymapWrapper);
			retValue->set(keymapCount - 1, $JTextComponent$KeymapWrapper::DefaultActionKey);
			return retValue;
		}
		return keymapKeys;
	}
	if (keymapCount == 0) {
		return sKeys;
	}
	$var($ObjectArray, retValue, $new($ObjectArray, sCount + keymapCount));
	$System::arraycopy(sKeys, 0, retValue, 0, sCount);
	if (hasDefault) {
		if (keymapCount > 1) {
			$System::arraycopy(keymapKeys, 0, retValue, sCount, keymapCount - 1);
		}
		$init($JTextComponent$KeymapWrapper);
		retValue->set(sCount + keymapCount - 1, $JTextComponent$KeymapWrapper::DefaultActionKey);
	} else {
		$System::arraycopy(keymapKeys, 0, retValue, sCount, keymapCount);
	}
	return retValue;
}

int32_t JTextComponent$KeymapActionMap::size() {
	$var($ObjectArray, actions, $nc(this->keymap)->getBoundActions());
	int32_t keymapCount = (actions == nullptr) ? 0 : $nc(actions)->length;
	if ($nc(this->keymap)->getDefaultAction() != nullptr) {
		++keymapCount;
	}
	return $ActionMap::size() + keymapCount;
}

$Action* JTextComponent$KeymapActionMap::get(Object$* key) {
	$var($Action, retValue, $ActionMap::get(key));
	if (retValue == nullptr) {
		$init($JTextComponent$KeymapWrapper);
		if ($equals(key, $JTextComponent$KeymapWrapper::DefaultActionKey)) {
			$assign(retValue, $nc(this->keymap)->getDefaultAction());
		} else if ($instanceOf($Action, key)) {
			$assign(retValue, $cast($Action, key));
		}
	}
	return retValue;
}

JTextComponent$KeymapActionMap::JTextComponent$KeymapActionMap() {
}

$Class* JTextComponent$KeymapActionMap::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$KeymapActionMap, name, initialize, &_JTextComponent$KeymapActionMap_ClassInfo_, allocate$JTextComponent$KeymapActionMap);
	return class$;
}

$Class* JTextComponent$KeymapActionMap::class$ = nullptr;

		} // text
	} // swing
} // javax